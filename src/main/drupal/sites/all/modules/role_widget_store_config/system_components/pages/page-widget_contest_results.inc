$page = new stdClass;
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'widget_contest_results';
$page->task = 'page';
$page->admin_title = 'Widget Contest Results';
$page->admin_description = '';
$page->path = 'widget-contest-results';
$page->access = array(
  'plugins' => array(
    0 => array(
      'name' => 'role',
      'settings' => array(
        'rids' => array(
          0 => 3,
          1 => 8,
          2 => 5,
        ),
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  ),
  'logic' => 'and',
);
$page->menu = array();
$page->arguments = array();
$page->conf = array();
$page->default_handlers = array();
$handler = new stdClass;
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_widget_contest_results_panel_context';
$handler->task = 'page';
$handler->subtask = 'widget_contest_results';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'css_id' => '',
  'css' => '.panel-region-separator{
  margin-top:20px;
}',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display;
$display->layout = 'flexible';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass;
  $pane->pid = 'new-1';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'widget_specification_list';
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
    'args' => '236',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '4th ROLE Widget Contest',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-1'] = $pane;
  $display->panels['center'][0] = 'new-1';
  $pane = new stdClass;
  $pane->pid = 'new-2';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'linebreak',
    'title' => '',
    'body' => '<br/>',
    'format' => '1',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $display->content['new-2'] = $pane;
  $display->panels['center'][1] = 'new-2';
  $pane = new stdClass;
  $pane->pid = 'new-3';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'widget_specification_list';
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
    'args' => '87',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '3rd ROLE Widget Contest',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $display->content['new-3'] = $pane;
  $display->panels['center'][2] = 'new-3';
  $pane = new stdClass;
  $pane->pid = 'new-4';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'widget_specification_list';
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
    'args' => '240',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'Example ROLE Widget Contest',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $display->content['new-4'] = $pane;
  $display->panels['center'][3] = 'new-4';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-1';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
