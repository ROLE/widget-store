<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function role_profile_preferences_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function role_profile_preferences_imagecache_default_presets() {
  $items = array(
    'profile_tool_list_thumbnail' => array(
      'presetname' => 'profile_tool_list_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '80',
            'height' => '80',
            'upscale' => 0,
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
    'profile_user_image' => array(
      'presetname' => 'profile_user_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '220px',
            'height' => '260px',
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
            'path' => 'imagecache/overlays/profile_image_overlay.png',
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
function role_profile_preferences_views_api() {
  return array(
    'api' => '2',
  );
}
