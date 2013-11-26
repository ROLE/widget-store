<?php
/**
 * @file Support for importing or exporting menu items along with terms
 *
 * This is a simple true/false flag attribute on the item, the location of the
 * menu item must be deduced from the path info
 */

/**
 * Add menu information to the export document.
 *
 * Produce something like:
 *
 * <rdfs:Class rdf:ID="term-35631" drupal:path="news/weather" drupal:menu="1">
 *
 * HOOK_taxonomy_xml_rdf_export_term
 *
 * @param $termnode The context to add attributes to, an XML term element,
 * already partially built. Modified by reference
 *
 * @param $term The term being exported
 */
function menu_taxonomy_xml_rdf_export_term($termnode, $term) {
  $dom = ( $termnode->nodeType == XML_DOCUMENT_NODE ) ? $termnode : $termnode->ownerDocument;

  // Path generally isn't loaded directly on a $term object,
  // but a term object may still have a path alias in the system.
  $path = '';
  $system_path = taxonomy_term_path($term);

  //
  // TODO
  //
  return;

  $do_menu = $menu ? TRUE : FALSE;
  $termnode->setattributens(TAXONOMY_XML_DRUPAL_NS, 'drupal:menu', $do_menu);

}

/**
 * Add the expected namespaces to the root of the document during construction.
 */
function menu_taxonomy_xml_rdf_document_setup($domcontainer) {
  taxonomy_xml_rdf_add_namespace($domcontainer, TAXONOMY_XML_DRUPAL_NS, 'drupal');
}

/**
 * Hook into importing term data.
 *
 * Runs in post because we need to know the new term ID now.
 *
 * Does not delete old paths.
 */
function menu_taxonomy_xml_term_postsave(&$term) {
  if (! empty($term->predicates['menu'])) {
    // probably is an array containing one TRUE/FALSE flag
    if (! is_array($term->predicates['menu'])) {
      $term->predicates['menu'] = array($term->predicates['menu']);
    }
    $do_menu = reset($term->predicates['menu']);
    if ($do_menu) {
      // Invent or update a menu item.
      // We have only paths to go on

      foreach ((array) $term->predicates['path'] as $path) {
        $term->path = $path;
      }
      if (!$term->path) {
        drupal_set_message(t("I was about to set a menu item for the term %term, but there is no path set. So I won't do that then", array('%term' => $term->name) ), 'warning');
        return FALSE;
      }

      // First look for an existing item at the terms path
      if ( $menu = taxonomy_xml_menu_get_item_by_path($term->path)) {
        // If it exists, then we can be pretty sure it's pointing at the right
        // place, so, just leave it
        drupal_set_message(t("Checked menu item for %term - it already exists.", array('%term' => $term->name) ));
        // TODO does this mean I should reset/override it?
        return TRUE;
      }

      // Do NOT recurse up and autocreate the tree.
      // Just see if there is a valid parent and use that.
      if ($parent_menu = taxonomy_xml_menu_get_item_by_path(dirname($term->path))) {
        drupal_set_message(t("Need to make a new menu item for %term - based on path %path. Parent item was found, so this should work.", array('%term' => $term->name, '%path' => $term->path) ));
        $menu = array(
          'link_title' => $term->name,
          'link_path' => drupal_get_normal_path($term->path),
          'parent' => $parent_menu['menu_name'] . ':' . $parent_menu['mlid'],
          'menu_name' => $parent_menu['menu_name'],
          'plid' => $parent_menu['mlid'],
        );
        $new_mlid = menu_link_save($menu);
      }
      else {
        // If no parent .. give up.
        drupal_set_message(t("I was about to set a menu item for the term being added at the path %path , but there is no parent menu item to attach to. So I won't do that then", array('%path' => $term->path) ));
        return FALSE;
      }

    }
  }
}



/**
 * Return a menu item matching a given path or alias.
 * The alias for the requested path will be tried automatically.
 *
 * If the root menu was defined, the lookup will be restricted to that.
 *
 * @return a menu link ARRAY. NULL if no valid menu item was found.
 */
function taxonomy_xml_menu_get_item_by_path($path, $menu_name = NULL) {
  // Use DB to fetch *all* aliases
  $aliases = array($path);
  $placeholders = array(" link_path = '%s' ");
  $result = db_query("SELECT src FROM {url_alias} WHERE dst = '%s'", $path);

  while ($row = db_fetch_array($result)) {
    $aliases[] = $row['src'];
    $placeholders[] = " link_path = '%s' ";
  }

  // It's bad mojo to mess with the DB directly, but menu doesn't provide a lookup API.
  // Or a way to avoid caching. Do it by hand if I need a newly added menu
  $check_menu_name = '';
  if ($menu_name) {
    $check_menu_name = ' AND menu_name = "%s" ';
    $aliases[] = $menu_name;
  }
  $row = db_fetch_array(db_query("SELECT * FROM {menu_links} WHERE link_path <> '' AND (" . join($placeholders, 'OR') . ") $check_menu_name ", $aliases ));
  if ($row) {
    // If I don't unserialize this, it gets flattened later
    $row['options'] = unserialize($row['options']);
    return $row;
  }
  return NULL;
}
