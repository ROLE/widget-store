<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function frontpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function frontpage_imagecache_default_presets() {
  $items = array(
    'frontpage_bundle_list_110x110' => array(
      'presetname' => 'frontpage_bundle_list_110x110',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '110',
            'height' => '110',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'frontpage_slider_940x360' => array(
      'presetname' => 'frontpage_slider_940x360',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache_coloractions',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '940',
            'height' => '360',
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_file2canvas',
          'data' => array(
            'xpos' => 0,
            'ypos' => 0,
            'alpha' => '100',
            'path' => 'imagecache/overlays/slider-image-frame.png',
          ),
        ),
      ),
    ),
    'frontpage_tool_list_110x110' => array(
      'presetname' => 'frontpage_tool_list_110x110',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '110',
            'height' => '110',
            'upscale' => 1,
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
function frontpage_node_info() {
  $items = array(
    'frontpage_slider_content' => array(
      'name' => t('Frontpage Slider Content'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function frontpage_views_api() {
  return array(
    'api' => '2',
  );
}
