$content['type']  = array (
  'name' => 'User Report',
  'type' => 'user_report',
  'description' => 'A type to create Bundle- and Tool-User Reports',
  'title_label' => 'Title',
  'body_label' => 'Body',
  'min_word_count' => '10',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => true,
    'sticky' => false,
    'revision' => false,
  ),
  'upload' => '1',
  'old_type' => 'user_report',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '1',
  'comment_anonymous' => '2',
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '1',
  'fivestar' => 0,
  'fivestar_stars' => '5',
  'fivestar_labels_enable' => 1,
  'fivestar_label_0' => 'Cancel rating',
  'fivestar_label_1' => 'Poor',
  'fivestar_label_2' => 'Okay',
  'fivestar_label_3' => 'Good',
  'fivestar_label_4' => 'Great',
  'fivestar_label_5' => 'Awesome',
  'fivestar_label_6' => 'Give it @star/@count',
  'fivestar_label_7' => 'Give it @star/@count',
  'fivestar_label_8' => 'Give it @star/@count',
  'fivestar_label_9' => 'Give it @star/@count',
  'fivestar_label_10' => 'Give it @star/@count',
  'fivestar_style' => 'average',
  'fivestar_text' => 'none',
  'fivestar_title' => 0,
  'fivestar_feedback' => 1,
  'fivestar_unvote' => 0,
  'fivestar_position_teaser' => 'hidden',
  'fivestar_position' => 'below',
  'fivestar_comment' => '0',
  'skinr_settings' => 
  array (
    'comment_group' => 
    array (
      'role_widget_store' => 
      array (
        'widgets' => 
        array (
          'grid-width' => 
          array (
          ),
          'fusion-content-alignment' => '',
        ),
        'advanced' => 
        array (
          '_additional' => '',
          '_template' => '',
        ),
      ),
    ),
    'node_group' => 
    array (
      'role_widget_store' => 
      array (
        'widgets' => 
        array (
          'grid-width' => 
          array (
          ),
          'fusion-content-alignment' => '',
          'fusion-float-imagefield' => '',
        ),
        'advanced' => 
        array (
          '_additional' => '',
          '_template' => '',
        ),
      ),
    ),
  ),
  'better_formats_allowed' => 
  array (
    1 => false,
    2 => false,
    3 => false,
    4 => false,
  ),
  'better_formats_defaults' => 
  array (
    'node-1' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'node-2' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'comment-1' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'comment-2' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
  ),
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Subject',
    'field_name' => 'field_report_subject',
    'type' => 'nodereference',
    'widget_type' => 'nodereference_explorer',
    'change' => 'Change basic information',
    'weight' => '43',
    'autocomplete_match' => 'contains',
    'size' => 60,
    'create_ref' => 0,
    'content_preview' => 'preview',
    'content_preview_position' => 'below',
    'dialog_title' => 'Subject Explorer',
    'dialog_width@int' => 800,
    'dialog_height@int' => 600,
    'dialog_api' => 'modalframe',
    'dialog_position' => 'center',
    'theme_css' => '<module>',
    'dialog_dialogClass' => '',
    'dialog_bgiframe@boolean' => 0,
    'dialog_minWidth@int' => '',
    'dialog_minHeight@int' => '',
    'dialog_maxWidth@int' => '',
    'dialog_maxHeight@int' => '',
    'dialog_draggable@boolean' => 0,
    'dialog_resizable@boolean' => 0,
    'dialog_closeOnEscape@boolean' => 0,
    'dialog_show' => 'null',
    'dialog_hide' => 'null',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'nid' => NULL,
        '_error_element' => 'default_value_widget][field_report_subject][0][nid][nid',
        'actions' => 
        array (
          'browse' => 'Browse',
          'remove' => 'Remove',
        ),
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 1,
    'multiple' => '0',
    'referenceable_types' => 
    array (
      'bundle' => 'bundle',
      'lstool_opensocial' => 'lstool_opensocial',
      'lstool_w3c' => 'lstool_w3c',
      'faq' => 0,
      'page' => 0,
      'user_report' => 0,
      'widget_contest' => 0,
      'widget_specification' => 0,
      'widget_specification_review' => 0,
    ),
    'advanced_view' => 'report_subject_browser',
    'advanced_view_args' => '',
    'op' => 'Save field settings',
    'module' => 'nodereference',
    'widget_module' => 'nodereference_explorer',
    'columns' => 
    array (
      'nid' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'index' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'Report Short Description',
    'field_name' => 'field_short_description',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '45',
    'rows' => '5',
    'size' => 60,
    'description' => 'Write a short desciption for this report. It will be displayed on the related content',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_short_description][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_short_description' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_short_description][0][value',
        ),
      ),
    ),
    'group' => false,
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '1000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '44',
  'body_field' => '46',
  'revision_information' => '51',
  'author' => '50',
  'options' => '52',
  'comment_settings' => '54',
  'menu' => '47',
  'path' => '55',
  'attachments' => '53',
  'detailed_question' => '49',
  'workflow' => '48',
);
