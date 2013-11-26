$view = new view;
$view->name = 'winner_coverflow';
$view->description = 'Presnts the widget specification winner widgets in a coverflow.';
$view->tag = '';
$view->base_table = 'node';
$view->core = 6;
$view->api_version = '2';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('relationships', array(
  'field_widget_reference_nid' => array(
    'id' => 'field_widget_reference_nid',
    'table' => 'node_data_field_widget_reference',
    'field' => 'field_widget_reference_nid',
  ),
  'field_thumbnail_fid' => array(
    'label' => 'Thumbnail',
    'required' => 1,
    'delta' => -1,
    'id' => 'field_thumbnail_fid',
    'table' => 'node_data_field_thumbnail',
    'field' => 'field_thumbnail_fid',
    'relationship' => 'field_widget_reference_nid',
  ),
  'field_thumbnail_fid_1' => array(
    'label' => 'Thumbnail',
    'required' => 1,
    'delta' => -1,
    'id' => 'field_thumbnail_fid_1',
    'table' => 'node_data_field_thumbnail',
    'field' => 'field_thumbnail_fid',
    'relationship' => 'field_widget_reference_nid',
  ),
));
$handler->override_option('fields', array(
  'type' => array(
    'label' => 'Type',
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
    'machine_name' => 0,
    'exclude' => 1,
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'field_widget_reference_nid',
  ),
  'title' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<span class="title title-[type]">[title]</span>',
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
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'field_widget_reference_nid',
  ),
  'body' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<span class="teaser">[body]</span>',
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
      'trim' => 1,
      'max_length' => '200',
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
    'id' => 'body',
    'table' => 'node_revisions',
    'field' => 'body',
    'relationship' => 'field_widget_reference_nid',
  ),
  'field_thumbnail_fid' => array(
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
    'link_to_node' => 0,
    'label_type' => 'none',
    'format' => 'image_nodelink',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_thumbnail_fid',
    'table' => 'node_data_field_thumbnail',
    'field' => 'field_thumbnail_fid',
    'relationship' => 'field_widget_reference_nid',
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
$handler->override_option('css_class', 'coverflow');
$handler->override_option('header', 'Widget Contest Winner');
$handler->override_option('header_format', '1');
$handler->override_option('header_empty', 1);
$handler->override_option('style_plugin', 'list');
$handler->override_option('style_options', array(
  'type' => 'ul',
));