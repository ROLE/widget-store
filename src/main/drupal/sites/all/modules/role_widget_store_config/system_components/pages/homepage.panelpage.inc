$page = new stdClass;
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'home';
$page->task = 'page';
$page->admin_title = 'Home ';
$page->admin_description = '';
$page->path = 'homepage';
$page->access = array();
$page->menu = array();
$page->arguments = array();
$page->conf = array();
$page->default_handlers = array();
$handler = new stdClass;
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_home_panel_context';
$handler->task = 'page';
$handler->subtask = 'home';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display;
$display->layout = 'flexible';
$display->layout_settings = array(
  'items' => array(
    'canvas' => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 'main',
      ),
      'parent' => NULL,
      'class' => '',
      'column_class' => '',
      'row_class' => '',
      'region_class' => '',
      'no_scale' => FALSE,
      'fixed_width' => '',
      'column_separation' => '10px',
      'region_separation' => '10px',
      'row_separation' => '10px',
    ),
    'main' => array(
      'type' => 'column',
      'width' => 100,
      'width_type' => '%',
      'children' => array(
        0 => 'main-row',
        1 => 1,
        2 => 6,
      ),
      'parent' => 'canvas',
    ),
    'main-row' => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'center',
      ),
      'parent' => 'main',
      'class' => 'homepage_1_1',
    ),
    'center' => array(
      'type' => 'region',
      'title' => 'Slider',
      'width' => 100,
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => '',
    ),
    1 => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 3,
        1 => 2,
      ),
      'parent' => 'main',
      'class' => '',
    ),
    2 => array(
      'type' => 'column',
      'width' => '33.961233961233965',
      'width_type' => '%',
      'parent' => '1',
      'children' => array(
        0 => 5,
      ),
      'class' => 'homepage_2_2',
    ),
    3 => array(
      'type' => 'column',
      'width' => '66.03876603876603',
      'width_type' => '%',
      'parent' => '1',
      'children' => array(
        0 => 4,
      ),
      'class' => 'homepage_2_1',
    ),
    4 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => '2_1',
      ),
      'parent' => '3',
      'class' => '',
    ),
    5 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => '2_2',
      ),
      'parent' => '2',
      'class' => '',
    ),
    '2_1' => array(
      'type' => 'region',
      'title' => '2_1',
      'width' => 100,
      'width_type' => '%',
      'parent' => '4',
      'class' => '',
    ),
    '2_2' => array(
      'type' => 'region',
      'title' => '2_2',
      'width' => 100,
      'width_type' => '%',
      'parent' => '5',
      'class' => '',
    ),
    6 => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 7,
        1 => 8,
      ),
      'parent' => 'main',
      'class' => '',
    ),
    7 => array(
      'type' => 'column',
      'width' => 50,
      'width_type' => '%',
      'parent' => '6',
      'children' => array(
        0 => 9,
      ),
      'class' => '',
    ),
    8 => array(
      'type' => 'column',
      'width' => 50,
      'width_type' => '%',
      'parent' => '6',
      'children' => array(
        0 => 10,
      ),
      'class' => '',
    ),
    9 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => '3_1',
      ),
      'parent' => '7',
      'class' => '',
    ),
    '3_1' => array(
      'type' => 'region',
      'title' => '3_1',
      'width' => 100,
      'width_type' => '%',
      'parent' => '9',
      'class' => '',
    ),
    10 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => '3_2',
      ),
      'parent' => '8',
      'class' => '',
    ),
    '3_2' => array(
      'type' => 'region',
      'title' => '3_2',
      'width' => 100,
      'width_type' => '%',
      'parent' => '10',
      'class' => '',
    ),
  ),
);
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
    '2_1' => NULL,
    '2_2' => NULL,
    '3_1' => NULL,
    '3_2' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass;
  $pane->pid = 'new-1';
  $pane->panel = '2_1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '6',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-1'] = $pane;
  $display->panels['2_1'][0] = 'new-1';
  $pane = new stdClass;
  $pane->pid = 'new-2';
  $pane->panel = '2_2';
  $pane->type = 'block';
  $pane->subtype = 'system_components-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Personal Contact',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'gray-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-2'] = $pane;
  $display->panels['2_2'][0] = 'new-2';
  $pane = new stdClass;
  $pane->pid = 'new-3';
  $pane->panel = '3_1';
  $pane->type = 'views';
  $pane->subtype = 'frontpage_tool_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '2',
    'pager_id' => '',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'The most popular <span>Tools</span>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-3'] = $pane;
  $display->panels['3_1'][0] = 'new-3';
  $pane = new stdClass;
  $pane->pid = 'new-4';
  $pane->panel = '3_2';
  $pane->type = 'views';
  $pane->subtype = 'frontpage_bundle_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '2',
    'pager_id' => '',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'The most popular <span>Bundles</span>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-4'] = $pane;
  $display->panels['3_2'][0] = 'new-4';
  $pane = new stdClass;
  $pane->pid = 'new-5';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'frontpage_slider';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-5'] = $pane;
  $display->panels['center'][0] = 'new-5';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
