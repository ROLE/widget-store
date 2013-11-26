<?php
/**
 * @file Support for importing or exporting path data along with terms
 */

/**
 * Add path information to the export document.
 *
 * Only exports real aliases, doesn't bother with system term/{tid} paths.
 *
 * Produce something like:
 *
 * <rdfs:Class rdf:ID="term-35631" drupal:path="news/weather">
 *
 * HOOK_taxonomy_xml_rdf_export_term
 *
 * @param $termnode The context to add attributes to, an XML term element,
 * already partially built. Modified by reference
 *
 * @param $term The term being exported
 */
function path_taxonomy_xml_rdf_export_term($termnode, $term) {
  $dom = ( $termnode->nodeType == XML_DOCUMENT_NODE ) ? $termnode : $termnode->ownerDocument;

  // Path generally isn't loaded directly on a $term object,
  // but a term object may still have a path alias in the system.
  $path = '';
  $system_path = taxonomy_term_path($term);
  $found_path = drupal_get_path_alias($system_path);
  if ($found_path != $system_path) {
    // Found an alias
    $path = $found_path;
  }
  if ($path) {
    $termnode->setattributens(TAXONOMY_XML_DRUPAL_NS, 'drupal:path', $path);
  }

}

/**
 * Add the expected namespaces to the root of the document during construction.
 */
function path_taxonomy_xml_rdf_document_setup($domcontainer) {
  taxonomy_xml_rdf_add_namespace($domcontainer, TAXONOMY_XML_DRUPAL_NS, 'drupal');
}

/**
 * Hook into importing term data.
 *
 * Runs in post because we need to know the new term ID now.
 *
 * Does not delete old paths.
 */
function path_taxonomy_xml_term_postsave(&$term) {
  if (! empty($term->predicates['path'])) {
    $termpath = taxonomy_term_path($term);
    $paths = $term->predicates['path'];
    if (! is_array($paths)) {
      $paths = array($paths);
    }
    foreach ($paths as $path) {
      path_set_alias($termpath, $path);
    }
  }
}
