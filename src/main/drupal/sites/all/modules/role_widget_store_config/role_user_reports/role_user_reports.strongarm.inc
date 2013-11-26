<?php

/**
 * Implementation of hook_strongarm().
 */
function role_user_reports_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_user_report';
  $strongarm->value = '2';
  $export['comment_anonymous_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_user_report';
  $strongarm->value = '1';
  $export['comment_controls_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_user_report';
  $strongarm->value = '4';
  $export['comment_default_mode_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_user_report';
  $strongarm->value = '1';
  $export['comment_default_order_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_user_report';
  $strongarm->value = '50';
  $export['comment_default_per_page_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_user_report';
  $strongarm->value = '1';
  $export['comment_form_location_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_user_report';
  $strongarm->value = '1';
  $export['comment_preview_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_user_report';
  $strongarm->value = '1';
  $export['comment_subject_field_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_user_report';
  $strongarm->value = '0';
  $export['comment_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_user_report';
  $strongarm->value = array(
    'title' => '46',
    'body_field' => '47',
    'revision_information' => '51',
    'author' => '50',
    'options' => '52',
    'comment_settings' => '54',
    'menu' => '48',
    'path' => '55',
    'attachments' => '53',
    'workflow' => '49',
  );
  $export['content_extra_weights_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_user_report';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_user_report'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_user_report';
  $strongarm->value = '1';
  $export['upload_user_report'] = $strongarm;

  return $export;
}
