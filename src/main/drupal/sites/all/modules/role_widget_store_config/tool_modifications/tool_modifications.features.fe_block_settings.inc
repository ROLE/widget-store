<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function tool_modifications_default_fe_block_settings() {
  $export = array();

  // fusion_core
  $theme = array();

  $theme['apachesolr-mlt-002'] = array(
    'module' => 'apachesolr',
    'delta' => 'mlt-002',
    'theme' => 'fusion_core',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '4',
  );

  $export['fusion_core'] = $theme;

  // role_widget_store_embedded_v2
  $theme = array();

  $theme['apachesolr-mlt-002'] = array(
    'module' => 'apachesolr',
    'delta' => 'mlt-002',
    'theme' => 'role_widget_store_embedded_v2',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '4',
  );

  $export['role_widget_store_embedded_v2'] = $theme;

  // role_widget_store_2
  $theme = array();

  $theme['apachesolr-mlt-002'] = array(
    'module' => 'apachesolr',
    'delta' => 'mlt-002',
    'theme' => 'role_widget_store_2',
    'status' => '1',
    'weight' => '-30',
    'region' => 'above_comments',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '4',
  );

  $export['role_widget_store_2'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
