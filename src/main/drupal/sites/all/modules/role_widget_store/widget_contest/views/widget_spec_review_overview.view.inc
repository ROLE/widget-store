$view = new view;
$view->name = 'widget_spec_review_overview';
$view->description = 'The widget specification reviews overview';
$view->tag = 'Widget Contest';
$view->base_table = 'node';
$view->core = 6;
$view->api_version = '2';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('relationships', array(
  'votingapi_cache' => array(
    'label' => 'Originality',
    'required' => 0,
    'votingapi' => array(
      'value_type' => 'percent',
      'tag' => 'Originality',
      'function' => 'average',
    ),
    'id' => 'votingapi_cache',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'relationship' => 'none',
  ),
  'votingapi_cache_1' => array(
    'label' => 'Didactic Value',
    'required' => 0,
    'votingapi' => array(
      'value_type' => 'percent',
      'tag' => 'DidacticValue',
      'function' => 'average',
    ),
    'id' => 'votingapi_cache_1',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'relationship' => 'none',
  ),
  'votingapi_cache_2' => array(
    'label' => 'Creativity',
    'required' => 0,
    'votingapi' => array(
      'value_type' => 'percent',
      'tag' => 'Creativity',
      'function' => 'average',
    ),
    'id' => 'votingapi_cache_2',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'relationship' => 'none',
  ),
  'votingapi_cache_3' => array(
    'label' => 'Potential Impact',
    'required' => 0,
    'votingapi' => array(
      'value_type' => 'percent',
      'tag' => 'PotentialImpact',
      'function' => 'average',
    ),
    'id' => 'votingapi_cache_3',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'relationship' => 'none',
  ),
  'votingapi_cache_4' => array(
    'label' => 'User Expirience and Interface',
    'required' => 0,
    'votingapi' => array(
      'value_type' => 'percent',
      'tag' => 'UserExperience',
      'function' => 'average',
    ),
    'id' => 'votingapi_cache_4',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'relationship' => 'none',
  ),
  'votingapi_cache_5' => array(
    'label' => 'Number of Votes',
    'required' => 0,
    'votingapi' => array(
      'value_type' => '',
      'tag' => 'Creativity',
      'function' => 'count',
    ),
    'id' => 'votingapi_cache_5',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'relationship' => 'none',
  ),
));
$handler->override_option('fields', array(
  'nid' => array(
    'label' => 'Nid',
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
    'link_to_node' => 0,
    'exclude' => 1,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'relationship' => 'none',
  ),
  'rownumber' => array(
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
    'exclude' => 0,
    'id' => 'rownumber',
    'table' => 'customfield',
    'field' => 'rownumber',
    'relationship' => 'none',
  ),
  'title' => array(
    'label' => 'Title',
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
  'name' => array(
    'label' => 'Name',
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
    'link_to_user' => 1,
    'overwrite_anonymous' => 0,
    'anonymous_text' => '',
    'exclude' => 0,
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'relationship' => 'none',
  ),
  'value_5' => array(
    'label' => '# Votes',
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
    'empty' => '0',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'hide_alter_empty' => 0,
    'set_precision' => 0,
    'precision' => '0',
    'decimal' => '.',
    'separator' => ',',
    'format_plural' => 0,
    'format_plural_singular' => '1',
    'format_plural_plural' => '@count',
    'prefix' => '',
    'suffix' => '',
    'appearance' => '',
    'exclude' => 0,
    'id' => 'value_5',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache_5',
  ),
  'value' => array(
    'label' => 'Originality',
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
    'set_precision' => 0,
    'precision' => '0',
    'decimal' => '.',
    'separator' => ',',
    'format_plural' => 0,
    'format_plural_singular' => '1',
    'format_plural_plural' => '@count',
    'prefix' => '',
    'suffix' => '',
    'appearance' => 'fivestar_views_value_display_handler',
    'exclude' => 0,
    'id' => 'value',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache',
  ),
  'value_1' => array(
    'label' => 'Didactic Value',
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
    'set_precision' => 0,
    'precision' => '0',
    'decimal' => '.',
    'separator' => ',',
    'format_plural' => 0,
    'format_plural_singular' => '1',
    'format_plural_plural' => '@count',
    'prefix' => '',
    'suffix' => '',
    'appearance' => 'fivestar_views_value_display_handler',
    'exclude' => 0,
    'id' => 'value_1',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache_1',
  ),
  'value_2' => array(
    'label' => 'Creativity',
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
    'set_precision' => 0,
    'precision' => '0',
    'decimal' => '.',
    'separator' => ',',
    'format_plural' => 0,
    'format_plural_singular' => '1',
    'format_plural_plural' => '@count',
    'prefix' => '',
    'suffix' => '',
    'appearance' => 'fivestar_views_value_display_handler',
    'exclude' => 0,
    'id' => 'value_2',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache_2',
  ),
  'value_4' => array(
    'label' => 'User Exp. and UI',
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
    'set_precision' => 0,
    'precision' => '0',
    'decimal' => '.',
    'separator' => ',',
    'format_plural' => 0,
    'format_plural_singular' => '1',
    'format_plural_plural' => '@count',
    'prefix' => '',
    'suffix' => '',
    'appearance' => 'fivestar_views_value_display_handler',
    'exclude' => 0,
    'id' => 'value_4',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache_4',
  ),
  'value_3' => array(
    'label' => 'Potential Impact',
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
    'set_precision' => 0,
    'precision' => '0',
    'decimal' => '.',
    'separator' => ',',
    'format_plural' => 0,
    'format_plural_singular' => '1',
    'format_plural_plural' => '@count',
    'prefix' => '',
    'suffix' => '',
    'appearance' => 'fivestar_views_value_display_handler',
    'exclude' => 0,
    'id' => 'value_3',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache_3',
  ),
  'nothing' => array(
    'label' => '',
    'alter' => array(
      'text' => 'Reviews',
      'make_link' => 1,
      'path' => 'node/[nid]/specification_reviews',
      'absolute' => 0,
      'link_class' => '',
      'alt' => 'Link to the reviews',
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
    'exclude' => 0,
    'id' => 'nothing',
    'table' => 'views',
    'field' => 'nothing',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'nid' => array(
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
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
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('empty', 'Unfortunately there are no widget specifications are available.');
$handler->override_option('empty_format', '2');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'desc',
  'summary' => '',
  'columns' => array(
    'title' => 'title',
    'name' => 'name',
    'value_5' => 'value_5',
    'value' => 'value',
    'value_1' => 'value_1',
    'value_2' => 'value_2',
    'value_4' => 'value_4',
    'value_3' => 'value_3',
  ),
  'info' => array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'value_5' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'value_1' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'value_2' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'value_4' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'value_3' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  ),
  'default' => 'value_3',
));
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'widget-specification-reviews');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
