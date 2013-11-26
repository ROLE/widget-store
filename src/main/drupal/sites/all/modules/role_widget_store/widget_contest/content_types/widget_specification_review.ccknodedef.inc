$content['type']  = array (
  'name' => 'Widget Specification Review',
  'type' => 'widget_specification_review',
  'description' => 'Widget specification review is a textual themed reviewed delivered by selected reviewers. The reviews are invisible for users and their goal is to internally assess the value of specification.',
  'title_label' => 'Title',
  'body_label' => 'Reasoning',
  'min_word_count' => '1',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'upload' => '0',
  'old_type' => 'widget_specification_review',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => '0',
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'fivestar' => 0,
  'fivestar_stars' => 5,
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
  'fivestar_text' => 'dual',
  'fivestar_title' => 1,
  'fivestar_feedback' => 1,
  'fivestar_unvote' => 0,
  'fivestar_position_teaser' => 'hidden',
  'fivestar_position' => 'below',
  'fivestar_comment' => 0,
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
    'node-3' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'node-5' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'node-10' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'node-11' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'node-12' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'node-13' => 
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
    'comment-3' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'comment-5' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'comment-10' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'comment-11' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'comment-12' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
    'comment-13' => 
    array (
      'format' => '0',
      'weight' => '0',
    ),
  ),
);
$content['groups']  = array (
  0 => 
  array (
    'label' => 'Rating',
    'group_type' => 'standard',
    'settings' => 
    array (
      'form' => 
      array (
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => 
      array (
        'description' => '',
        'teaser' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        4 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        2 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        3 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-3',
    'group_name' => 'group_rating',
  ),
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Reviewed Widget Specification',
    'field_name' => 'field_widget_specification',
    'type' => 'nodereference',
    'widget_type' => 'nodereference_select',
    'change' => 'Change basic information',
    'weight' => '-4',
    'autocomplete_match' => 'contains',
    'size' => 60,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'nid' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 1,
    'multiple' => '0',
    'referenceable_types' => 
    array (
      'widget_specification' => 'widget_specification',
      'bundle' => 0,
      'idea' => 0,
      'contest' => 0,
      'review' => 0,
      'lstool_opensocial' => 0,
      'page' => 0,
      'lstool_w3c' => 0,
      'widget_contest' => 0,
      'widget_specification_review' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'op' => 'Save field settings',
    'module' => 'nodereference',
    'widget_module' => 'nodereference',
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
    'label' => 'Originality',
    'field_name' => 'field_originality_rating',
    'type' => 'fivestar',
    'widget_type' => 'stars',
    'change' => 'Change basic information',
    'weight' => '-2',
    'allow_clear' => 1,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'rating' => '-',
        'target' => NULL,
        'axis' => 'Originality',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_originality_rating' => 
      array (
        0 => 
        array (
          'rating' => '-',
          'target' => NULL,
          'axis' => 'Originality',
        ),
      ),
    ),
    'group' => 'group_rating',
    'required' => 1,
    'multiple' => 0,
    'stars' => '5',
    'dynamic_target' => 'field_widget_specification',
    'php_target' => '',
    'axis' => 'Originality',
    'op' => 'Save field settings',
    'module' => 'fivestar',
    'widget_module' => 'fivestar',
    'columns' => 
    array (
      'rating' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'sortable' => true,
      ),
      'target' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
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
  2 => 
  array (
    'label' => 'Creativity',
    'field_name' => 'field_creativity_rating',
    'type' => 'fivestar',
    'widget_type' => 'stars',
    'change' => 'Change basic information',
    'weight' => '-1',
    'allow_clear' => 1,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'rating' => '-',
        'target' => NULL,
        'axis' => 'Creativity',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_creativity_rating' => 
      array (
        0 => 
        array (
          'rating' => '-',
          'target' => NULL,
          'axis' => 'Creativity',
        ),
      ),
    ),
    'group' => 'group_rating',
    'required' => 1,
    'multiple' => 0,
    'stars' => '5',
    'dynamic_target' => 'field_widget_specification',
    'php_target' => '',
    'axis' => 'Creativity',
    'op' => 'Save field settings',
    'module' => 'fivestar',
    'widget_module' => 'fivestar',
    'columns' => 
    array (
      'rating' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'sortable' => true,
      ),
      'target' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
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
  3 => 
  array (
    'label' => 'Didactic Value',
    'field_name' => 'field_didactic_value_rating',
    'type' => 'fivestar',
    'widget_type' => 'stars',
    'change' => 'Change basic information',
    'weight' => 0,
    'allow_clear' => 1,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'rating' => '-',
        'target' => NULL,
        'axis' => 'DidacticValue',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_didactic_value_rating' => 
      array (
        0 => 
        array (
          'rating' => '-',
          'target' => NULL,
          'axis' => 'DidacticValue',
        ),
      ),
    ),
    'group' => 'group_rating',
    'required' => 1,
    'multiple' => 0,
    'stars' => '5',
    'dynamic_target' => 'field_widget_specification',
    'php_target' => '',
    'axis' => 'DidacticValue',
    'op' => 'Save field settings',
    'module' => 'fivestar',
    'widget_module' => 'fivestar',
    'columns' => 
    array (
      'rating' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'sortable' => true,
      ),
      'target' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
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
  4 => 
  array (
    'label' => 'Potential impact on the competition objectives',
    'field_name' => 'field_impact_rating',
    'type' => 'fivestar',
    'widget_type' => 'stars',
    'change' => 'Change basic information',
    'weight' => '1',
    'allow_clear' => 1,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'rating' => '-',
        'target' => NULL,
        'axis' => 'PotentialImpact',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_impact_rating' => 
      array (
        0 => 
        array (
          'rating' => '-',
          'target' => NULL,
          'axis' => 'PotentialImpact',
        ),
      ),
    ),
    'group' => 'group_rating',
    'required' => 1,
    'multiple' => 0,
    'stars' => '5',
    'dynamic_target' => 'field_widget_specification',
    'php_target' => '',
    'axis' => 'PotentialImpact',
    'op' => 'Save field settings',
    'module' => 'fivestar',
    'widget_module' => 'fivestar',
    'columns' => 
    array (
      'rating' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'sortable' => true,
      ),
      'target' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
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
  5 => 
  array (
    'label' => 'User Experience and Interface',
    'field_name' => 'field_user_experience_rating',
    'type' => 'fivestar',
    'widget_type' => 'stars',
    'change' => 'Change basic information',
    'weight' => '2',
    'allow_clear' => 1,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'rating' => '-',
        'target' => NULL,
        'axis' => 'UserExperience',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_user_experience_rating' => 
      array (
        0 => 
        array (
          'rating' => '-',
          'target' => NULL,
          'axis' => 'UserExperience',
        ),
      ),
    ),
    'group' => 'group_rating',
    'required' => 1,
    'multiple' => 0,
    'stars' => '5',
    'dynamic_target' => 'field_widget_specification',
    'php_target' => '',
    'axis' => 'UserExperience',
    'op' => 'Save field settings',
    'module' => 'fivestar',
    'widget_module' => 'fivestar',
    'columns' => 
    array (
      'rating' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'sortable' => true,
      ),
      'target' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
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
  'title' => '-5',
  'body_field' => '0',
  'revision_information' => '3',
  'author' => '2',
  'options' => '4',
  'comment_settings' => '5',
  'menu' => '-1',
  'path' => '6',
  'attachments' => '7',
  'workflow' => '1',
);
