<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tool_modifications_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function tool_modifications_imagecache_default_presets() {
  $items = array(
    'block_node_recommendation_140x140' => array(
      'presetname' => 'block_node_recommendation_140x140',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache_coloractions',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '120',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
        '2' => array(
          'weight' => '-8',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '0',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '140',
              'height' => '140',
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
    'node_generic_screenshot_slider_350x350' => array(
      'presetname' => 'node_generic_screenshot_slider_350x350',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '350',
            'height' => '350',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '0',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '350',
              'height' => '350',
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
    'node_generic_teaser_thumbnail_120x120' => array(
      'presetname' => 'node_generic_teaser_thumbnail_120x120',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '120px',
            'height' => '120px',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '120px',
              'height' => '120px',
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
    'node_generic_thumbnail_140x140' => array(
      'presetname' => 'node_generic_thumbnail_140x140',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '140',
            'height' => '140',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '140',
              'height' => '140',
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
function tool_modifications_views_api() {
  return array(
    'api' => '2',
  );
}
