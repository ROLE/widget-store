<?php

/**
 * configure the captcha forms
 *
 */
function _system_config_set_captchas() {

  //define captchas for all forms
  $forms = array(
      'comment_form' => array(
        'module' => "'recaptcha'", 'captcha_type' => "'reCAPTCHA'",
      ),
      'contact_mail_page' => array(
        'module' => "NULL", 'captcha_type' => "NULL",
      ),
      'contact_mail_user' => array(
        'module' => "NULL", 'captcha_type' => "NULL",
      ),
      'forum_node_form' => array(
        'module' => "NULL", 'captcha_type' => "NULL",
      ),
      'user_login' => array(
        'module' => "NULL", 'captcha_type' => "NULL",
      ),
      'user_login_block' => array(
        'module' => "NULL", 'captcha_type' => "NULL",
      ),
      'user_pass' => array(
        'module' => "NULL", 'captcha_type' => "NULL",
      ),
      'user_register' => array(
        'module' => "'recaptcha'", 'captcha_type' => "'reCAPTCHA'",
      ),
  );

  //add the forms to the database
  foreach ($forms as $form_id => $value) {

    $form_exists = db_result(
        db_query("SELECT * FROM {captcha_points} WHERE form_id = '%s'",
            $form_id));

    if ($form_exists) {
      db_query(
          "UPDATE {captcha_points} SET module = " . $value['module']
              . ", captcha_type = " . $value['captcha_type']
              . " WHERE form_id = '" . $form_id . "'");

    } else {
      db_query(
          "INSERT INTO {captcha_points} (form_id, module, captcha_type) VALUES ('"
              . $form_id . "' ," . $value['module'] . ","
              . $value['captcha_type'] . ")");
    }
  }

}

