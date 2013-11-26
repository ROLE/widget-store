<?php

/**
 * Set permissions for the defined roles
 */
function _system_config_set_permissions() {

  include_once drupal_get_path('module', 'install_profile_api')
      . '/core/user.inc';

  $anonymous_user_rid = install_get_rid('anonymous user');

  install_add_permissions($anonymous_user_rid,
      array(
          0 => 'access comments', 1 => 'post comments',
          2 => 'view field_additional_content',
          3 => 'view field_bundle_screencasts',
          4 => 'view field_bundle_short_description',
          5 => 'view field_bundle_tool',
          6 => 'view field_bundle_tool_activity',
          7 => 'view field_creativity_rating',
          8 => 'view field_didactic_value_rating',
          9 => 'view field_impact_rating',
          10 => 'view field_implementation_reference',
          11 => 'view field_originality_rating',
          12 => 'view field_report_subject',
          13 => 'view field_screenshot_mockups',
          14 => 'view field_screenshots', 15 => 'view field_short_description',
          16 => 'view field_thumbnail', 17 => 'view field_tool_file',
          18 => 'view field_tools', 19 => 'view field_use_case',
          20 => 'view field_user_experience_rating',
          21 => 'view field_widget_contest',
          22 => 'view field_widget_specification', 23 => 'use custom search',
          24 => 'create faq', 25 => 'view faq page', 26 => 'ask question',
          27 => 'view imagecache bundle_400x400',
          28 => 'view imagecache bundle_tool_list_110x110',
          29 => 'view imagecache tool_400x400',
          30 => 'view imagecache widget_specification_screenshot_browser_400x400',
          31 => 'view imagecache wysiwyg_imageupload_lightbox_preset',
          32 => 'access nodes via services', 33 => 'access terms via services',
          34 => 'access content', 35 => 'search content',
          36 => 'use advanced search', 37 => 'switch theme',
          38 => 'access taxonomy images',
          39 => 'access simplerdf sparql endpoint',
      ));

  $authenticated_user_rid = install_get_rid('authenticated user');

  install_add_permissions($authenticated_user_rid,
      array(
          0 => 'access comments', 1 => 'post comments',
          2 => 'post comments without approval',
          3 => 'edit field_additional_content',
          4 => 'edit field_bundle_screencasts',
          5 => 'edit field_bundle_short_description',
          6 => 'edit field_bundle_tool',
          7 => 'edit field_bundle_tool_activity',
          8 => 'edit field_creativity_rating',
          9 => 'edit field_didactic_value_rating',
          10 => 'edit field_impact_rating',
          11 => 'edit field_implementation_reference',
          12 => 'edit field_originality_rating',
          13 => 'edit field_report_subject',
          14 => 'edit field_screenshot_mockups',
          15 => 'edit field_screenshots', 16 => 'edit field_short_description',
          17 => 'edit field_thumbnail', 18 => 'edit field_tool_file',
          19 => 'edit field_tools', 20 => 'edit field_use_case',
          21 => 'edit field_user_experience_rating',
          22 => 'edit field_widget_contest',
          23 => 'edit field_widget_specification',
          24 => 'view field_additional_content',
          25 => 'view field_bundle_screencasts',
          26 => 'view field_bundle_short_description',
          27 => 'view field_bundle_tool',
          28 => 'view field_bundle_tool_activity',
          29 => 'view field_creativity_rating',
          30 => 'view field_didactic_value_rating',
          31 => 'view field_impact_rating',
          32 => 'view field_implementation_reference',
          33 => 'view field_originality_rating',
          34 => 'view field_report_subject',
          35 => 'view field_screenshot_mockups',
          36 => 'view field_screenshots', 37 => 'view field_short_description',
          38 => 'view field_thumbnail', 39 => 'view field_tool_file',
          40 => 'view field_tools', 41 => 'view field_use_case',
          42 => 'view field_user_experience_rating',
          43 => 'view field_widget_contest',
          44 => 'view field_widget_specification', 45 => 'use custom search',
          46 => 'create faq', 47 => 'view faq page', 48 => 'ask question',
          49 => 'rate content', 50 => 'view imagecache bundle_400x400',
          51 => 'view imagecache bundle_tool_list_110x110',
          52 => 'view imagecache tool_400x400',
          53 => 'view imagecache widget_specification_screenshot_browser_400x400',
          54 => 'create opensocial tools', 55 => 'delete own opensocial tools',
          56 => 'edit own opensocial tools', 57 => 'create w3c tools',
          58 => 'delete own w3c tools', 59 => 'edit own w3c tools',
          60 => 'access content', 61 => 'create bundle content',
          62 => 'create widget_specification content',
          63 => 'delete own bundle content',
          64 => 'delete own widget_specification content',
          65 => 'edit own bundle content',
          66 => 'edit own widget_specification content',
          67 => 'search content', 68 => 'use advanced search',
          69 => 'switch theme', 70 => 'access taxonomy images',
          71 => 'change own username',
      ));

  $editor_user_rid = install_get_rid('editor');

  install_add_permissions($editor_user_rid,
      array(
          0 => 'collapse format fieldset by default',
          1 => 'collapsible format selection',
          2 => 'show format selection for nodes',
          3 => 'post comments without approval', 4 => 'administer faq order',
          5 => 'delete faq content', 6 => 'edit faq', 7 => 'answer question',
          8 => 'view imagecache wysiwyg_imageupload_browser_preview',
          9 => 'view imagecache wysiwyg_imageupload_lightbox_preset',
          10 => 'view imagecache wysiwyg_imageupload_preview',
          11 => 'create page content', 12 => 'create widget_contest content',
          13 => 'create widget_specification_review content',
          14 => 'delete revisions', 15 => 'edit any page content',
          16 => 'edit any widget_contest content', 17 => 'revert revisions',
          18 => 'view revisions', 19 => 'publish any page content',
          20 => 'publish any widget_contest content',
          21 => 'unpublish any page content',
          22 => 'unpublish any widget_contest content',
          23 => 'administer site configuration',
          24 => 'edit views basic settings',
          25 => 'enable widget contest field (widget specification)',
          26 => 'enable widget specification field (widget specification review)',
          27 => 'use wysiwyg image upload',
      ));

  $manager_rid = install_get_rid('manager');

  install_add_permissions($manager_rid,
      array(
          0 => 'post comments without approval',
          1 => 'read widget contest results',
          2 => 'read widget specification reviews at node',
      ));

  $moderator_rid = install_get_rid('moderator');

  install_add_permissions($moderator_rid,
      array(
          0 => 'administer comments', 1 => 'post comments without approval',
          2 => 'administer opensocial tools',
          3 => 'delete all opensocial tools', 4 => 'edit all opensocial tools',
          5 => 'administer w3c tools', 6 => 'delete all w3c tools',
          7 => 'edit all w3c tools', 8 => 'delete any bundle content',
          9 => 'edit any bundle content',
          10 => 'edit any widget_specification content',
          11 => 'revert revisions', 12 => 'view revisions',
          13 => 'publish any bundle content',
          14 => 'publish any lstool_opensocial content',
          15 => 'publish any lstool_w3c content',
          16 => 'unpublish any bundle content',
          17 => 'unpublish any lstool_opensocial content',
          18 => 'unpublish any lstool_w3c content',
      ));

  $partner_rid = install_get_rid('partner');

  install_add_permissions($partner_rid,
      array(
          0 => 'post comments without approval',
          1 => 'publish own bundle content',
          2 => 'publish own lstool_opensocial content',
          3 => 'publish own lstool_w3c content',
          4 => 'unpublish own bundle content',
          5 => 'unpublish own lstool_opensocial content',
          6 => 'unpublish own lstool_w3c content',
      ));

  $reviewer_rid = install_get_rid('reviewer');

  install_add_permissions($reviewer_rid,
      array(
          0 => 'post comments without approval',
          1 => 'create widget_specification_review content',
          2 => 'delete own widget_specification_review content',
          3 => 'edit own widget_specification_review content',
          4 => 'read widget contest results',
          5 => 'read widget specification reviews at node',
      ));

  $services_rid = install_get_rid('services');

  install_add_permissions($services_rid,
      array(
          0 => 'access nodes via services', 1 => 'access terms via services',
          2 => 'get taxonomy tree',
      ));
}
