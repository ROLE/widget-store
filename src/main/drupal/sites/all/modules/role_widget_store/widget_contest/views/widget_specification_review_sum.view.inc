$view = new view;
$view->name = 'widget_specification_review_sum';
$view->description = 'The summary of reviews for a node';
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
  'value_5' => array(
    'label' => 'Number of Votes',
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
    'appearance' => '',
    'exclude' => 0,
    'id' => 'value_5',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache_5',
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
$handler->override_option('style_options', array(
  'grouping' => '',
));