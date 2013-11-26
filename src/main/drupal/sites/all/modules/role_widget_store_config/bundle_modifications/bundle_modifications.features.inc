<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function bundle_modifications_imagecache_default_presets() {
  $items = array(
    'node_bundle_tool_list_80x80' => array(
      'presetname' => 'node_bundle_tool_list_80x80',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '80',
            'height' => '80',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => 'ffffff',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '80',
              'height' => '80',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function bundle_modifications_views_api() {
  return array(
    'api' => '2',
  );
}
