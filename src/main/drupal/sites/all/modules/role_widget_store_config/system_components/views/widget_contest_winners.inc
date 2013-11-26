$view = new view;
$view->name = 'widget_contest_winners';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->core = 6;
$view->api_version = '2';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('relationships', array(
  'field_widget_contest_nid' => array(
    'label' => 'Widget Contest',
    'required' => 0,
    'delta' => -1,
    'id' => 'field_widget_contest_nid',
    'table' => 'node_data_field_widget_contest',
    'field' => 'field_widget_contest_nid',
    'relationship' => 'none',
  ),
));
$handler->override_option('fields', array(
  'title' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'hide_alter_empty' => 1,
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'empty',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'empty',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      2 => 0,
      3 => 0,
      8 => 0,
      4 => 0,
      6 => 0,
      5 => 0,
      7 => 0,
    ),
    'me_redirect' => 0,
    'me_validate_user_argument_type' => 'uid',
    'me_validate_user_roles' => array(
      2 => 0,
      3 => 0,
      8 => 0,
      4 => 0,
      6 => 0,
      5 => 0,
      7 => 0,
    ),
    'relationship' => 'field_widget_contest_nid',
    'default_options_div_prefix' => '',
    'default_taxonomy_tid_term_page' => 0,
    'default_taxonomy_tid_node' => 0,
    'default_taxonomy_tid_limit' => 0,
    'default_taxonomy_tid_vids' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
    'default_argument_user' => 0,
    'default_argument_fixed' => '',
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'faq' => 0,
      'lstool_opensocial' => 0,
      'lstool_w3c' => 0,
      'bundle' => 0,
      'bundle_tool_reference' => 0,
      'page' => 0,
      'user_report' => 0,
      'widget_contest' => 0,
      'widget_specification' => 0,
      'widget_specification_review' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '',
    'me_validate_user_restrict_roles' => 0,
  ),
));
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'widget_specification' => 'widget_specification',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'sid' => array(
    'operator' => 'in',
    'value' => array(
      6 => '6',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'sid',
    'table' => 'workflow_node',
    'field' => 'sid',
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('header', 'Winners of the ROLE Widget Contest:');
$handler->override_option('header_format', '1');
$handler->override_option('header_empty', 0);
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'asc',
  'summary' => '',
  'columns' => array(
    'title' => 'title',
  ),
  'info' => array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  ),
  'default' => '-1',
));
