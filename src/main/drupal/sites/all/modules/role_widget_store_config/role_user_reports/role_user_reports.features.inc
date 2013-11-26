<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function role_user_reports_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function role_user_reports_imagecache_default_presets() {
  $items = array(
    'node_user_report_header_user_image' => array(
      'presetname' => 'node_user_report_header_user_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '120',
            'height' => '140',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_file2canvas',
          'data' => array(
            'xpos' => 0,
            'ypos' => 0,
            'alpha' => '100',
            'path' => 'imagecache/overlays/user_report_header_user_image.png',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function role_user_reports_node_info() {
  $items = array(
    'user_report' => array(
      'name' => t('User Report'),
      'module' => 'features',
      'description' => t('A type to create Bundle- and Tool-User Reports'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '10',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function role_user_reports_views_api() {
  return array(
    'api' => '2',
  );
}
