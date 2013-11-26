<?php

/**
 * Implementation of hook_strongarm().
 */
function role_web_tools_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_web_tool';
  $strongarm->value = '0';
  $export['comment_anonymous_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_web_tool';
  $strongarm->value = '3';
  $export['comment_controls_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_web_tool';
  $strongarm->value = '4';
  $export['comment_default_mode_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_web_tool';
  $strongarm->value = '1';
  $export['comment_default_order_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_web_tool';
  $strongarm->value = '50';
  $export['comment_default_per_page_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_web_tool';
  $strongarm->value = '0';
  $export['comment_form_location_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_web_tool';
  $strongarm->value = '1';
  $export['comment_preview_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_web_tool';
  $strongarm->value = '1';
  $export['comment_subject_field_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_web_tool';
  $strongarm->value = '2';
  $export['comment_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_web_tool';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '7',
    'author' => '6',
    'options' => '8',
    'comment_settings' => '9',
    'menu' => '-4',
    'taxonomy' => '-2',
    'path' => '10',
    'workflow' => '5',
  );
  $export['content_extra_weights_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_web_tool';
  $strongarm->value = array();
  $export['node_options_web_tool'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_web_tool';
  $strongarm->value = '0';
  $export['upload_web_tool'] = $strongarm;

  return $export;
}
