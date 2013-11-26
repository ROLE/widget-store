<?php

/**
 * Implementation of hook_content_default_fields().
 */
function role_user_reports_content_default_fields() {
  $fields = array();

  // Exported field: field_report_subject
  $fields['user_report-field_report_subject'] = array(
    'field_name' => 'field_report_subject',
    'type_name' => 'user_report',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'bundle' => 'bundle',
      'lstool_opensocial' => 'lstool_opensocial',
      'lstool_w3c' => 'lstool_w3c',
      'web_tool' => 'web_tool',
      'faq' => 0,
      'frontpage_slider_content' => 0,
      'page' => 0,
      'user_report' => 0,
      'widget_contest' => 0,
      'widget_specification' => 0,
      'widget_specification_review' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_report_subject][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Subject',
      'weight' => '45',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Subject');

  return $fields;
}
