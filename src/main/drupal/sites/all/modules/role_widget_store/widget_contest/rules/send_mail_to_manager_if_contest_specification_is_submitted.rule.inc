array (
  'rules' => 
  array (
    'rules_send_mail_to_manager_if_contest_specification_is_submitted' => 
    array (
      '#type' => 'rule',
      '#set' => 'event_workflow_state_changed',
      '#label' => 'Send mail to manager if contest specification is submitted',
      '#active' => 1,
      '#weight' => '0',
      '#categories' => 
      array (
        0 => 'contest',
        1 => 'mail',
      ),
      '#status' => 'custom',
      '#conditions' => 
      array (
        0 => 
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
            'label' => 'Updated content is Widget Specification',
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
        1 => 
        array (
          '#weight' => 0,
          '#info' => 
          array (
            'label' => 'Check if content workflow state is Submitted',
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
              3 => '3',
            ),
            '#argument map' => 
            array (
              'node' => 'node',
            ),
          ),
          '#type' => 'condition',
        ),
      ),
      '#actions' => 
      array (
        0 => 
        array (
          '#weight' => 0,
          '#type' => 'action',
          '#settings' => 
          array (
            'recipients' => 
            array (
              0 => 8,
            ),
            'from' => 'no-reply@role-widgetstore',
            'subject' => 'New submission for the current ROLE Widget Contest',
            'message' => 'Dear reviewer,

you get this mail because you are a registered manager at the ROLE Widget Store and a new submission for the the current contest was submitted.

The user [author:user] submitted the specification with the title [node:title]. 

You can see the overview of all submission at [:global:site-url]/contest-submissions

Best,
The ROLE Widget Store',
            '#eval input' => 
            array (
              'token_rules_input_evaluator' => 
              array (
                'subject' => 
                array (
                  0 => ':global',
                ),
                'message' => 
                array (
                  0 => 'node',
                  1 => 'author',
                  2 => ':global',
                ),
                'from' => 
                array (
                  0 => ':global',
                ),
              ),
            ),
          ),
          '#name' => 'rules_action_mail_to_users_of_role',
          '#info' => 
          array (
            'label' => 'Send a mail to all users of a role',
            'module' => 'System',
            'eval input' => 
            array (
              0 => 'subject',
              1 => 'message',
              2 => 'from',
            ),
          ),
        ),
      ),
      '#version' => 6003,
    ),
  ),
);