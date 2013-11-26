array (
  'rules' => 
  array (
    'rules_send_mail_to_owner_if_there_is_a_new_comment' => 
    array (
      '#type' => 'rule',
      '#set' => 'event_comment_publish',
      '#label' => 'Send mail to owner if there is a new comment',
      '#active' => 1,
      '#weight' => '0',
      '#categories' => 
      array (
        0 => 'mail',
        1 => 'comment',
      ),
      '#status' => 'custom',
      '#conditions' => 
      array (
      ),
      '#actions' => 
      array (
        0 => 
        array (
          '#type' => 'action',
          '#settings' => 
          array (
            'from' => 'no-reply@role-widgetstore',
            'subject' => 'New comment created for [node:title]',
            'message' => 'Hello [node_author:user],

you get this mail because you are registered at the ROLE Widget Store and submitted [node:title] to the store.

The user [comment_author:user] created a comment with the title [comment:comment-title] for this content. Please check if you want to respond to this comment.

Best,
The ROLE Widget Store',
            '#argument map' => 
            array (
              'user' => 'node_author',
            ),
            '#eval input' => 
            array (
              'token_rules_input_evaluator' => 
              array (
                'subject' => 
                array (
                  0 => 'node',
                  1 => ':global',
                ),
                'message' => 
                array (
                  0 => 'comment',
                  1 => 'comment_author',
                  2 => 'node',
                  3 => 'node_author',
                  4 => ':global',
                ),
                'from' => 
                array (
                  0 => ':global',
                ),
              ),
            ),
          ),
          '#name' => 'rules_action_mail_to_user',
          '#info' => 
          array (
            'label' => 'Send a mail to a the owner',
            'label callback' => false,
            'arguments' => 
            array (
              'user' => 
              array (
                'type' => 'user',
                'label' => 'Recipient',
              ),
            ),
            'module' => 'System',
            'eval input' => 
            array (
              0 => 'subject',
              1 => 'message',
              2 => 'from',
            ),
          ),
          '#weight' => 0,
        ),
      ),
      '#version' => 6003,
    ),
  ),
);