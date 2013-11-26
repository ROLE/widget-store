array (
  'rules' => 
  array (
    'rules_widget_specification_creation_draft' => 
    array (
      '#type' => 'rule',
      '#set' => 'event_node_presave',
      '#label' => 'Widget Specification (creation)->Draft',
      '#active' => 1,
      '#weight' => '0',
      '#categories' => 
      array (
      ),
      '#status' => 'custom',
      '#conditions' => 
      array (
        0 => 
        array (
          '#info' => 
          array (
            'label' => 'Check if content workflow state is (creation)',
            'arguments' => 
            array (
              'node' => 
              array (
                'type' => 'node',
                'label' => 'Node',
              ),
            ),
            'module' => 'Workflow',
          ),
          '#name' => 'workflow_check_state',
          '#settings' => 
          array (
            'state' => 
            array (
              1 => '1',
            ),
            '#argument map' => 
            array (
              'node' => 'node',
            ),
          ),
          '#type' => 'condition',
          '#weight' => 0,
        ),
        1 => 
        array (
          '#type' => 'condition',
          '#settings' => 
          array (
            'type' => 
            array (
              'widget_specification' => 'widget_specification',
            ),
            '#argument map' => 
            array (
              'node' => 'node',
            ),
          ),
          '#name' => 'rules_condition_content_is_type',
          '#info' => 
          array (
            'label' => 'Saved content is Widget Specification',
            'arguments' => 
            array (
              'node' => 
              array (
                'type' => 'node',
                'label' => 'Content',
              ),
            ),
            'module' => 'Node',
          ),
          '#weight' => 0,
        ),
      ),
      '#actions' => 
      array (
        0 => 
        array (
          '#weight' => 0,
          '#info' => 
          array (
            'module' => 'Workflow',
            'arguments' => 
            array (
              'node' => 
              array (
                'label' => 'Content',
                'type' => 'node',
              ),
            ),
            'label' => 'Change workflow state of content to new state',
            'base' => 'rules_core_action_execute',
            'action_name' => 'workflow_select_given_state_action',
            'configurable' => true,
          ),
          '#name' => 'rules_core_workflow_select_given_state_action',
          '#settings' => 
          array (
            'target_sid' => '2',
            'state_name' => 'Draft',
            'force' => 1,
            'workflow_comment' => 'Action set %title to %state.',
            '#argument map' => 
            array (
              'node' => 'node',
            ),
          ),
          '#type' => 'action',
        ),
      ),
      '#version' => 6003,
    ),
  ),
);