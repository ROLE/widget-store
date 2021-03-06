<?php
/**
 * @file
 * Menu definition.
 */

/**
 * Define menu router items.
 */
function _simplerdf_menu() {
  $administer_simplerdf = array('administer simplerdf');

  // Mapping administration
  foreach (array_keys(node_get_types()) as $type) {
    $type = str_replace('_', '-', $type);
    $items['admin/content/node-type/' . $type . '/simplerdf'] = array(
      'title' => 'Simple RDF mappings',
      'description' => 'Configure node RDF property mappings.',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('simplerdf_admin_node_mappings_form', 3),
      'type' => MENU_LOCAL_TASK,
      'access arguments' => array('administer simplerdf mappings'),
      'file' => 'includes/simplerdf.admin.inc',
      'weight' => 1,
    );
  }
  $items['admin/user/simplerdf'] = array(
    'title' => 'Simple RDF mappings',
    'description' => 'Manage RDF mappings for users.',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('simplerdf_admin_mappings_default_form', 'user'),
    'access arguments' => array('administer simplerdf mappings'),
    'type' => MENU_NORMAL_ITEM,
    'file' => 'includes/simplerdf.admin.inc',
  );

  // Admin dashboard
  $items['admin/build/simplerdf'] = array(
    'title' => 'Simple RDF',
    'description' => 'Overview for Simple RDF setup.',
    'type' => MENU_NORMAL_ITEM,
    'page callback' => 'simplerdf_admin_dashboard',
    'access arguments' => $administer_simplerdf,
    'file' => 'includes/simplerdf.admin.inc',
  );
  $items['admin/build/simplerdf/dashboard'] = array(
    'title' => 'Dashboard',
    'type' => MENU_DEFAULT_LOCAL_TASK,
    'weight' => -10,
  );
  $items['admin/build/simplerdf/flush'] = array(
    'title' => 'Flush cache',
    'type' => MENU_CALLBACK,
    'page callback' => 'simplerdf_admin_flush',
    'access arguments' => $administer_simplerdf,
    'file' => 'includes/simplerdf.admin.inc',
  );
  $items['admin/build/simplerdf/relindex'] = array(
    'title' => 'Index object relation',
    'type' => MENU_CALLBACK,
    'page callback' => 'simplerdf_admin_rel_index',
    'access arguments' => $administer_simplerdf,
    'file' => 'includes/simplerdf.admin.inc',
  );

  // URI generator administration
  $items['admin/build/simplerdf/uri'] = array(
    'title' => 'URI format',
    'description' => 'Select and configure settings for generation of URIs for RDF data.',
    'type' => MENU_LOCAL_TASK,
    'page callback' => 'simplerdf_admin_uri_overview',
    'access arguments' => $administer_simplerdf,
    'file' => 'includes/simplerdf.admin.inc',
    'weight' => 1,
  );
  $items['admin/build/simplerdf/uri/%'] = array(
    'title' => 'Object URI format',
    'description' => 'Select and configure settings for generation of URIs for RDF data.',
    'type' => MENU_CALLBACK,
    'page callback' => 'drupal_get_form',
    'page arguments' => array('simplerdf_admin_uri_form', 4),
    'access arguments' => $administer_simplerdf,
    'file' => 'includes/simplerdf.admin.inc',
    'weight' => 1,
  );
  $items['admin/build/simplerdf/uri/%/%'] = array(
    'title' => 'Object URI format settings',
    'description' => 'Configure settings for the URI generator.',
    'type' => MENU_CALLBACK,
    'page callback' => 'drupal_get_form',
    'page arguments' => array('simplerdf_admin_uri_settings_form', 4, 5),
    'access arguments' => $administer_simplerdf,
    'file' => 'includes/simplerdf.admin.inc',
  );

  // Autocomplete callbacks
  $items['simplerdf/autocomplete'] = array(
    'title' => 'Autocomplete',
    'description' => 'Autocomplete-enabled textfield helper.',
    'type' => MENU_CALLBACK,
    'page callback' => '_simplerdf_autocomplete',
    'access arguments' => array('administer simplerdf'),
  );

  return $items;
}
