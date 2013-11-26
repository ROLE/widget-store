<?php

/**
 * Implementation of hook_strongarm().
 */
function tool_modifications_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_comment_lstool_opensocial';
  $strongarm->value = '2';
  $export['fivestar_comment_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_comment_lstool_w3c';
  $strongarm->value = '0';
  $export['fivestar_comment_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_feedback_lstool_opensocial';
  $strongarm->value = 1;
  $export['fivestar_feedback_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_feedback_lstool_w3c';
  $strongarm->value = 1;
  $export['fivestar_feedback_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_labels_enable_lstool_opensocial';
  $strongarm->value = 0;
  $export['fivestar_labels_enable_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_labels_enable_lstool_w3c';
  $strongarm->value = 0;
  $export['fivestar_labels_enable_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_lstool_opensocial';
  $strongarm->value = 1;
  $export['fivestar_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_lstool_w3c';
  $strongarm->value = 1;
  $export['fivestar_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_lstool_opensocial';
  $strongarm->value = 'above_static';
  $export['fivestar_position_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_lstool_w3c';
  $strongarm->value = 'below';
  $export['fivestar_position_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_teaser_lstool_opensocial';
  $strongarm->value = 'hidden';
  $export['fivestar_position_teaser_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_teaser_lstool_w3c';
  $strongarm->value = 'hidden';
  $export['fivestar_position_teaser_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_stars_lstool_opensocial';
  $strongarm->value = '5';
  $export['fivestar_stars_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_stars_lstool_w3c';
  $strongarm->value = '5';
  $export['fivestar_stars_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_style_lstool_opensocial';
  $strongarm->value = 'average';
  $export['fivestar_style_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_style_lstool_w3c';
  $strongarm->value = 'average';
  $export['fivestar_style_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_title_lstool_opensocial';
  $strongarm->value = 0;
  $export['fivestar_title_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_title_lstool_w3c';
  $strongarm->value = 0;
  $export['fivestar_title_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_unvote_lstool_opensocial';
  $strongarm->value = 0;
  $export['fivestar_unvote_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_unvote_lstool_w3c';
  $strongarm->value = 0;
  $export['fivestar_unvote_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_body_lstool_opensocial';
  $strongarm->value = '';
  $export['multistep_body_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_buttons_lstool_opensocial';
  $strongarm->value = 1;
  $export['multistep_buttons_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_buttons_lstool_w3c';
  $strongarm->value = 0;
  $export['multistep_buttons_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_default_lstool_opensocial';
  $strongarm->value = 'multistep';
  $export['multistep_default_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_default_lstool_w3c';
  $strongarm->value = 'multistep';
  $export['multistep_default_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_expose_lstool_opensocial';
  $strongarm->value = 'enabled';
  $export['multistep_expose_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_expose_lstool_w3c';
  $strongarm->value = 'enabled';
  $export['multistep_expose_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_author_lstool_opensocial';
  $strongarm->value = '0';
  $export['multistep_extra_author_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_author_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_author_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_body_field_lstool_opensocial';
  $strongarm->value = '1';
  $export['multistep_extra_body_field_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_body_field_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_body_field_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_comment_settings_lstool_opensocial';
  $strongarm->value = '0';
  $export['multistep_extra_comment_settings_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_comment_settings_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_comment_settings_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_height_lstool_opensocial';
  $strongarm->value = '5';
  $export['multistep_extra_height_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_license_details_lstool_opensocial';
  $strongarm->value = '4';
  $export['multistep_extra_license_details_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_license_lstool_opensocial';
  $strongarm->value = '4';
  $export['multistep_extra_license_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_lstool_lstool_opensocial';
  $strongarm->value = '2';
  $export['multistep_extra_lstool_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_menu_lstool_opensocial';
  $strongarm->value = '0';
  $export['multistep_extra_menu_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_menu_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_menu_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_options_lstool_opensocial';
  $strongarm->value = '0';
  $export['multistep_extra_options_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_options_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_options_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_revision_information_lstool_opensocial';
  $strongarm->value = '0';
  $export['multistep_extra_revision_information_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_revision_information_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_revision_information_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_source_lstool_opensocial';
  $strongarm->value = '1';
  $export['multistep_extra_source_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_1_lstool_opensocial';
  $strongarm->value = '1';
  $export['multistep_extra_taxonomy_1_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_1_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_taxonomy_1_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_2_lstool_opensocial';
  $strongarm->value = '4';
  $export['multistep_extra_taxonomy_2_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_2_lstool_w3c';
  $strongarm->value = '3';
  $export['multistep_extra_taxonomy_2_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_3_bundle';
  $strongarm->value = '4';
  $export['multistep_extra_taxonomy_3_bundle'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_3_lstool_opensocial';
  $strongarm->value = '4';
  $export['multistep_extra_taxonomy_3_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_3_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_taxonomy_3_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_taxonomy_6_lstool_opensocial';
  $strongarm->value = '2';
  $export['multistep_extra_taxonomy_6_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_title_lstool_opensocial';
  $strongarm->value = '1';
  $export['multistep_extra_title_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_title_lstool_w3c';
  $strongarm->value = '1';
  $export['multistep_extra_title_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_workflow_lstool_opensocial';
  $strongarm->value = '0';
  $export['multistep_extra_workflow_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_workflow_lstool_w3c';
  $strongarm->value = '0';
  $export['multistep_extra_workflow_lstool_w3c'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_menu_lstool_opensocial';
  $strongarm->value = 'enabled';
  $export['multistep_menu_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_progress_lstool_opensocial';
  $strongarm->value = 'enabled';
  $export['multistep_progress_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_steps_lstool_opensocial';
  $strongarm->value = '4';
  $export['multistep_steps_lstool_opensocial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_steps_lstool_w3c';
  $strongarm->value = '3';
  $export['multistep_steps_lstool_w3c'] = $strongarm;

  return $export;
}
