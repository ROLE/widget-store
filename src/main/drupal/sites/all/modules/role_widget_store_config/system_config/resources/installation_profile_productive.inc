<?php
/********************************
 *           DETAILS            *
 ********************************/
function shuri_profile_details() {
  return array(
      'name' => 'Sheffield Hallam University - Research Institute',
      'description' => 'Installation profile generated automatically on 6th Feb 2012 04:33pm',
  );
}

/********************************
 *           MODULES            *
 ********************************/
function shuri_profile_modules() {
  return array(
      0 => 'admin_menu', 1 => 'search', 2 => 'apachesolr',
      3 => 'apachesolr_search', 4 => 'apachesolr_autocomplete', 5 => 'ctools',
      6 => 'better_formats', 7 => 'block', 8 => 'blocks404', 9 => 'content',
      10 => 'captcha', 11 => 'comment', 12 => 'computed_field',
      13 => 'content_copy', 14 => 'content_access',
      15 => 'content_permissions', 16 => 'filefield', 17 => 'autoload',
      18 => 'custom_search', 19 => 'taxonomy', 20 => 'dblog', 21 => 'menu',
      22 => 'imageapi', 23 => 'faq', 24 => 'faq_ask', 25 => 'fieldgroup',
      26 => 'votingapi', 27 => 'filter', 28 => 'imagefield', 29 => 'fivestar',
      30 => 'googleanalytics', 31 => 'imagecache', 32 => 'imageapi_gd',
      33 => 'jquery_ui', 34 => 'imagecache_canvasactions',
      35 => 'imagecache_coloractions', 36 => 'imagecache_ui', 37 => 'link',
      38 => 'install_profile_api', 39 => 'jcarousel', 40 => 'jquery_update',
      41 => 'jquery_ui_dialog', 42 => 'views', 43 => 'lightbox2',
      44 => 'modalframe', 45 => 'ls_rest_resources', 46 => 'skip_validation',
      47 => 'lstool', 48 => 'lstool_w3c', 49 => 'me', 50 => 'devel',
      51 => 'menutrails', 52 => 'optionwidgets', 53 => 'node',
      54 => 'node_export', 55 => 'text', 56 => 'nodereference',
      57 => 'nodereference_explorer', 58 => 'panels',
      59 => 'rdf_taxonomy_import', 60 => 'panels_ipe', 61 => 'path',
      62 => 'token', 63 => 'profile', 64 => 'publishcontent',
      65 => 'page_manager', 66 => 'rdf_taxonomy_import_config',
      67 => 'recaptcha', 68 => 'recaptcha_mailhide', 69 => 'services',
      70 => 'rules', 71 => 'system_config', 72 => 'apachesolr_config',
      73 => 'rest_server', 74 => 'skinr', 75 => 'lstool_opensocial',
      76 => 'switchtheme', 77 => 'system', 78 => 'taxonomy_config',
      79 => 'tabs', 80 => 'custom_search_taxonomy', 81 => 'taxonomy_access',
      82 => 'views_customfield', 83 => 'taxonomy_guid', 84 => 'taxonomy_image',
      85 => 'taxonomy_manager', 86 => 'taxonomy_menu',
      87 => 'taxonomy_menu_path_custom', 88 => 'taxonomy_menu_vocabulary_path',
      89 => 'taxonomy_super_select', 90 => 'taxonomy_tag_suggestor',
      91 => 'bundle', 92 => 'thickbox', 93 => 'pathauto', 94 => 'tokenSTARTER',
      95 => 'token_actions', 96 => 'update', 97 => 'upload', 98 => 'user',
      99 => 'wysiwyg', 100 => 'views_content', 101 => 'rules_admin',
      102 => 'views_ui', 103 => 'views_ui_basic', 104 => 'fivestar_comment',
      105 => 'workflow', 106 => 'widget_contest',
      107 => 'widget_contest_config', 108 => 'workflow_access',
      109 => 'drupalwiki_imageselect_element', 110 => 'wysiwyg_imageupload',
      111 => 'wysiwyg_imageupload_browser',
      112 => 'wysiwyg_imageupload_lightbox',
  );
}

/********************************
 *            TASKS             *
 ********************************/
function shuri_profile_tasks() {

  /********************************
   *     INSTALL PROFILE API      *
   ********************************/
  install_include(shuri_profile_modules());

  /********************************
   *    VARIABLES (AND THEMES)     *
   ********************************/
  variable_set("admin_menu_devel_modules_enabled",
      array(
          'content_copy' => 'content_copy', 'views_ui' => 'views_ui',
          'devel' => 'devel',
      ));
  variable_set("admin_menu_margin_top", 1);
  variable_set("admin_menu_position_fixed", 0);
  variable_set("admin_menu_tweak_modules", 1);
  variable_set("admin_menu_tweak_tabs", 0);
  variable_set("admin_theme", 'role_widget_store_backend');
  variable_set("allowed_html_1",
      '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>');
  variable_set("anonymous", 'Anonymous');
  variable_set("apachesolr_autocomplete_suggest_keywords", 1);
  variable_set("apachesolr_autocomplete_suggest_spellcheck", 1);
  variable_set("apachesolr_autocomplete_widget", 'custom');
  variable_set("apachesolr_cron_limit", '100');
  variable_set("apachesolr_enabled_facets",
      array(
          'apachesolr_search' => array(
              'type' => 'type', 'im_vid_2' => 'im_vid_2',
              'im_vid_3' => 'im_vid_3', 'im_vid_1' => 'im_vid_1',
          ),
      ));
  variable_set("apachesolr_facet_missing",
      array(
        'apachesolr_search' => array(
          'im_vid_1' => 0, 'im_vid_2' => 0,
        ),
      ));
  variable_set("apachesolr_facet_query_initial_limits",
      array(
        'apachesolr_search' => array(
          'im_vid_1' => 10, 'im_vid_2' => 10,
        ),
      ));
  variable_set("apachesolr_facet_query_limits",
      array(
        'apachesolr_search' => array(
          'im_vid_1' => 20, 'im_vid_2' => 20,
        ),
      ));
  variable_set("apachesolr_facet_show_children",
      array(
        'apachesolr_search' => array(
          'im_vid_1' => 0, 'im_vid_2' => 0,
        ),
      ));
  variable_set("apachesolr_failure", 'show_error');
  variable_set("apachesolr_host", 'localhost');
  variable_set("apachesolr_index_last",
      array(
          'apachesolr_search' => array(
            'last_change' => '1328540344', 'last_nid' => '70',
          ),
      ));
  variable_set("apachesolr_index_updated", 1328540461);
  variable_set("apachesolr_last_optimize", 1328540165);
  variable_set("apachesolr_mlt_blocks",
      array(
          'mlt-001' => array(
              'name' => 'More like this', 'num_results' => '5',
              'mlt_fl' => array(
                'title' => 'title', 'taxonomy_names' => 'taxonomy_names',
              ), 'mlt_mintf' => '1', 'mlt_mindf' => '1', 'mlt_minwl' => '3',
              'mlt_maxwl' => '15', 'mlt_maxqt' => '20',
          ),
      ));
  variable_set("apachesolr_path", '/solr');
  variable_set("apachesolr_port", '8983');
  variable_set("apachesolr_read_only", '0');
  variable_set("apachesolr_rows", 50);
  variable_set("apachesolr_search_default_previous", 1);
  variable_set("apachesolr_search_excluded_types",
      array(
          'faq' => 'faq', 'page' => 'page',
          'widget_contest' => 'widget_contest',
          'widget_specification' => 'widget_specification',
          'widget_specification_review' => 'widget_specification_review',
          'bundle' => 0, 'lstool_opensocial' => 0, 'lstool_w3c' => 0,
      ));
  variable_set("apachesolr_search_make_default", '1');
  variable_set("apachesolr_search_spellcheck", 1);
  variable_set("apachesolr_search_taxonomy_links", '1');
  variable_set("apachesolr_search_taxonomy_previous", 1);
  variable_set("apachesolr_search_type_boosts",
      array(
          'bundle' => '0', 'faq' => '0', 'lstool_opensocial' => '0',
          'page' => '0', 'lstool_w3c' => '0', 'widget_contest' => '0',
          'widget_specification' => '0', 'widget_specification_review' => '0',
      ));
  variable_set("apachesolr_set_nodeapi_messages", '1');
  variable_set("apachesolr_site_hash", 'hor33i');
  variable_set("better_formats_allowed_bundle", array(
    0 => 1, 1 => 5,
  ));
  variable_set("better_formats_allowed_faq", array(
    0 => 1, 1 => 5, 2 => 6,
  ));
  variable_set("better_formats_allowed_lstool_opensocial",
      array(
        0 => 1, 1 => 5,
      ));
  variable_set("better_formats_allowed_lstool_w3c", array(
    0 => 1, 1 => 5,
  ));
  variable_set("better_formats_fieldset_title", '');
  variable_set("better_formats_long_tips_link_text", '');
  variable_set("better_formats_per_node_type", 1);
  variable_set("block_cache", '0');
  variable_set("cache", '1');
  variable_set("cache_flush_cache", 1328540123);
  variable_set("cache_flush_cache_apachesolr", 1328522462);
  variable_set("cache_flush_cache_block", 1328522462);
  variable_set("cache_flush_cache_content", 1328540123);
  variable_set("cache_flush_cache_filter", 1328504461);
  variable_set("cache_flush_cache_form", 1328533261);
  variable_set("cache_flush_cache_menu", 1328515261);
  variable_set("cache_flush_cache_page", 1328537473);
  variable_set("cache_flush_cache_rules", 1328522462);
  variable_set("cache_flush_cache_tax_image", 1328540123);
  variable_set("cache_flush_cache_views", 1328540123);
  variable_set("cache_flush_cache_views_data", 1328533261);
  variable_set("cache_lifetime", '43200');
  variable_set("captcha_add_captcha_description", 1);
  variable_set("captcha_administration_mode", 0);
  variable_set("captcha_allow_on_admin_pages", 0);
  variable_set("captcha_default_challenge", 'recaptcha/reCAPTCHA');
  variable_set("captcha_default_validation", '1');
  variable_set("captcha_description",
      'Please solve the captcha below and help us stopping spam.');
  variable_set("captcha_log_wrong_responses", 1);
  variable_set("captcha_persistence", '1');
  variable_set("captcha_placement_map_cache",
      array(
          'comment_form' => array(
            'path' => array(), 'key' => NULL, 'weight' => 18.9,
          ),
          'user_register' => array(
            'path' => array(), 'key' => 'submit', 'weight' => 30,
          ),
      ));
  variable_set("captcha_wrong_response_counter", 7);
  variable_set("clean_url", '1');
  variable_set("clear", 'Clear cached data');
  variable_set("comment_anonymous_bundle", '2');
  variable_set("comment_anonymous_faq", '2');
  variable_set("comment_anonymous_lstool_opensocial", '2');
  variable_set("comment_anonymous_lstool_w3c", '2');
  variable_set("comment_anonymous_widget_contest", '0');
  variable_set("comment_anonymous_widget_specification", '0');
  variable_set("comment_anonymous_widget_specification_review", '0');
  variable_set("comment_bundle", '2');
  variable_set("comment_controls_bundle", '3');
  variable_set("comment_controls_faq", '3');
  variable_set("comment_controls_lstool_opensocial", '3');
  variable_set("comment_controls_lstool_w3c", '3');
  variable_set("comment_controls_widget_contest", '3');
  variable_set("comment_controls_widget_specification", '3');
  variable_set("comment_controls_widget_specification_review", '3');
  variable_set("comment_default_mode_bundle", '4');
  variable_set("comment_default_mode_faq", '4');
  variable_set("comment_default_mode_lstool_opensocial", '4');
  variable_set("comment_default_mode_lstool_w3c", '4');
  variable_set("comment_default_mode_widget_contest", '4');
  variable_set("comment_default_mode_widget_specification", '4');
  variable_set("comment_default_mode_widget_specification_review", '4');
  variable_set("comment_default_order_bundle", '1');
  variable_set("comment_default_order_faq", '1');
  variable_set("comment_default_order_lstool_opensocial", '1');
  variable_set("comment_default_order_lstool_w3c", '1');
  variable_set("comment_default_order_widget_contest", '1');
  variable_set("comment_default_order_widget_specification", '1');
  variable_set("comment_default_order_widget_specification_review", '1');
  variable_set("comment_default_per_page_bundle", '50');
  variable_set("comment_default_per_page_faq", '50');
  variable_set("comment_default_per_page_lstool_opensocial", '50');
  variable_set("comment_default_per_page_lstool_w3c", '50');
  variable_set("comment_default_per_page_widget_contest", '50');
  variable_set("comment_default_per_page_widget_specification", '50');
  variable_set("comment_default_per_page_widget_specification_review", '50');
  variable_set("comment_faq", '0');
  variable_set("comment_form_location_bundle", '1');
  variable_set("comment_form_location_faq", '1');
  variable_set("comment_form_location_lstool_opensocial", '1');
  variable_set("comment_form_location_lstool_w3c", '1');
  variable_set("comment_form_location_widget_contest", '0');
  variable_set("comment_form_location_widget_specification", '0');
  variable_set("comment_form_location_widget_specification_review", '0');
  variable_set("comment_lstool_opensocial", '2');
  variable_set("comment_lstool_w3c", '2');
  variable_set("comment_page", 0);
  variable_set("comment_preview_bundle", '0');
  variable_set("comment_preview_faq", '1');
  variable_set("comment_preview_lstool_opensocial", '0');
  variable_set("comment_preview_lstool_w3c", '0');
  variable_set("comment_preview_widget_contest", '1');
  variable_set("comment_preview_widget_specification", '1');
  variable_set("comment_preview_widget_specification_review", '1');
  variable_set("comment_subject_field_bundle", '1');
  variable_set("comment_subject_field_faq", '1');
  variable_set("comment_subject_field_lstool_opensocial", '1');
  variable_set("comment_subject_field_lstool_w3c", '1');
  variable_set("comment_subject_field_widget_contest", '1');
  variable_set("comment_subject_field_widget_specification", '1');
  variable_set("comment_subject_field_widget_specification_review", '1');
  variable_set("comment_widget_contest", '0');
  variable_set("comment_widget_specification", '0');
  variable_set("comment_widget_specification_review", '0');
  variable_set("content_access_settings",
      array(
          'view' => array(
            'widget_specification_review' => array(
              0 => 1, 1 => 2,
            ),
          ),
          'view_own' => array(
            'widget_specification_review' => array(
              0 => 1, 1 => 2,
            ),
          ), 'per_node' => array(
            'widget_specification_review' => 0,
          ), 'priority' => array(
            'widget_specification_review' => '0',
          ),
      ));
  variable_set("content_extra_weights_bundle",
      array(
          'title' => '-1', 'body_field' => '1', 'revision_information' => '8',
          'author' => '7', 'options' => '9', 'comment_settings' => '12',
          'menu' => '-2', 'taxonomy' => '5', 'path' => '11',
          'attachments' => '10', 'workflow' => '6',
      ));
  variable_set("content_extra_weights_lstool_opensocial",
      array(
          'title' => '-5', 'body_field' => '-3', 'revision_information' => '0',
          'author' => '-1', 'options' => '1', 'comment_settings' => '4',
          'menu' => '-4', 'taxonomy' => '5', 'path' => '3',
          'attachments' => '2', 'workflow' => '7',
      ));
  variable_set("content_extra_weights_lstool_w3c",
      array(
          'title' => '-5', 'body_field' => '-4', 'revision_information' => '1',
          'author' => '0', 'options' => '2', 'comment_settings' => '5',
          'menu' => '-1', 'taxonomy' => '4', 'path' => '6',
          'attachments' => '3', 'workflow' => '7',
      ));
  variable_set("content_extra_weights_widget_contest",
      array(
          'title' => '-5', 'body_field' => '0', 'revision_information' => '20',
          'author' => '20', 'options' => '25', 'comment_settings' => '30',
          'menu' => '-2', 'path' => '30', 'workflow' => '10',
      ));
  variable_set("content_extra_weights_widget_specification",
      array(
          'title' => '-2', 'body_field' => '0', 'revision_information' => '8',
          'author' => '7', 'options' => '9', 'comment_settings' => '10',
          'menu' => '6', 'taxonomy' => '1', 'path' => '11', 'workflow' => '5',
      ));
  variable_set("content_extra_weights_widget_specification_review",
      array(
          'title' => '-5', 'body_field' => '0', 'revision_information' => '3',
          'author' => '2', 'options' => '4', 'comment_settings' => '5',
          'menu' => '-1', 'path' => '6', 'attachments' => '7',
          'workflow' => '1',
      ));
  variable_set("css_js_query_string", 'PIE9MdxHfZ4imlQRVbt5');
  variable_set("ctools_last_cron", 1328540165);
  variable_set("custom_search_delta", '');
  variable_set("date_default_timezone", '7200');
  variable_set("default_nodes_main", '10');
  variable_set("drupal_http_request_fails", false);
  variable_set("error_level", '0');
  variable_set("faq_answer_category_name", 0);
  variable_set("faq_answer_label", '');
  variable_set("faq_ask_admin_advice",
      'You are allowed to edit unanswered questions.');
  variable_set("faq_ask_asker_advice",
      'You may edit your own questions until they are answered.');
  variable_set("faq_ask_categorize", 0);
  variable_set("faq_ask_default_expert", '9');
  variable_set("faq_ask_expert_advice",
      'If you select a question, you must answer it.');
  variable_set("faq_ask_expert_own", '2');
  variable_set("faq_ask_help_text",
      'Add a question for our expert to answer. After being answered, your question and the answer will be displayed in the FAQ pages. If the question will not fit in the box below, please try to rephrase it.');
  variable_set("faq_ask_notify", 1);
  variable_set("faq_ask_notify_asker", 1);
  variable_set("faq_ask_notify_asker_simplenews_confirm", 1);
  variable_set("faq_ask_notify_asker_simplenews_tid", '0');
  variable_set("faq_ask_notify_by_cron", 1);
  variable_set("faq_ask_unanswered", 'Not answered yet.');
  variable_set("faq_ask_vocabularies", array(
    5 => 5,
  ));
  variable_set("faq_back_to_top", '');
  variable_set("faq_block_recent_faq_count", '5');
  variable_set("faq_category_display", 'categories_inline');
  variable_set("faq_category_hide_qa_accordion", 0);
  variable_set("faq_category_listing", 'ul');
  variable_set("faq_count", 0);
  variable_set("faq_custom_breadcrumbs", 0);
  variable_set("faq_default_sorting", 'DESC');
  variable_set("faq_description",
      'The FAQs answer common questions concerning contribution of widgets and widget bundles to the Widget Store, usage of widgets and widget bundles, e.g. adding of applications to a PLE, and questions regarding the ROLE Widget Competition. If you have questions concerning development of widgets or need a detailed explanation, please find the developer documentation and ROLE SDK at the <a target="_blank" href="http://sourceforge.net/apps/mediawiki/role-project/index.php?title=Main_Page">SourceForge Platform</a> or join our <a target="_blank" href="http://groups.google.com/group/role-dev">Google developer forum</a>. If you have a question that should be answered in the FAQs, please use the form on the right.');
  variable_set("faq_description_format", '1');
  variable_set("faq_disable_node_links", 0);
  variable_set("faq_display", 'new_page');
  variable_set("faq_enable_term_links", 1);
  variable_set("faq_expert_role", array(
    3 => '3',
  ));
  variable_set("faq_group_questions_top", 0);
  variable_set("faq_hide_child_terms", 0);
  variable_set("faq_hide_qa_accordion", 0);
  variable_set("faq_omit_vocabulary", array(
    5 => 0,
  ));
  variable_set("faq_qa_mark", 0);
  variable_set("faq_question_label", '');
  variable_set("faq_question_length", 'long');
  variable_set("faq_question_listing", 'ol');
  variable_set("faq_question_long_form", 1);
  variable_set("faq_show_expand_all", 0);
  variable_set("faq_show_node_links", 0);
  variable_set("faq_show_term_page_children", 0);
  variable_set("faq_title", 'Frequently Asked Questions');
  variable_set("faq_unanswered_count", '3');
  variable_set("faq_use_categories", 1);
  variable_set("faq_use_teaser", 0);
  variable_set("fieldgroup_schema_version", 6000);
  variable_set("field_tool_file", 'field_tool_file');
  variable_set("field_tool_screenshots", 'field_tool_screenshots');
  variable_set("field_tool_thumbnail", 'field_tool_thumbnail');
  variable_set("filefield_description_length", 400);
  variable_set("filefield_description_type", 'textarea');
  variable_set("file_directory_path", 'sites/default/files');
  variable_set("file_directory_temp", '/srv/www/vhosts/role-widgetstore.eu/tmp');
  variable_set("file_downloads", '1');
  variable_set("filter_html_1", '1');
  variable_set("filter_html_help_1", 1);
  variable_set("filter_html_nofollow_1", 0);
  variable_set("filter_url_length_1", '72');
  variable_set("fivestar_bundle", 1);
  variable_set("fivestar_comment_bundle", '2');
  variable_set("fivestar_comment_lstool_opensocial", '0');
  variable_set("fivestar_comment_lstool_w3c", '0');
  variable_set("fivestar_comment_widget_specification", '0');
  variable_set("fivestar_feedback_bundle", 0);
  variable_set("fivestar_feedback_lstool_opensocial", 1);
  variable_set("fivestar_feedback_lstool_w3c", 1);
  variable_set("fivestar_feedback_widget_specification", 1);
  variable_set("fivestar_labels_enable_bundle", 0);
  variable_set("fivestar_labels_enable_lstool_opensocial", 0);
  variable_set("fivestar_labels_enable_lstool_w3c", 0);
  variable_set("fivestar_labels_enable_widget_specification", 1);
  variable_set("fivestar_labels_widget_contest",
      array(
          0 => 'Cancel rating', 1 => 'Poor', 2 => 'Okay', 3 => 'Good',
          4 => 'Great', 5 => 'Awesome', 6 => 'Give it @star/@count',
          7 => 'Give it @star/@count', 8 => 'Give it @star/@count',
          9 => 'Give it @star/@count', 10 => 'Give it @star/@count',
      ));
  variable_set("fivestar_labels_widget_specification",
      array(
          0 => 'Cancel rating', 1 => 'Poor', 2 => 'Okay', 3 => 'Good',
          4 => 'Great', 5 => 'Awesome', 6 => 'Give it @star/@count',
          7 => 'Give it @star/@count', 8 => 'Give it @star/@count',
          9 => 'Give it @star/@count', 10 => 'Give it @star/@count',
      ));
  variable_set("fivestar_labels_widget_specification_review",
      array(
          0 => 'Cancel rating', 1 => 'Poor', 2 => 'Okay', 3 => 'Good',
          4 => 'Great', 5 => 'Awesome', 6 => 'Give it @star/@count',
          7 => 'Give it @star/@count', 8 => 'Give it @star/@count',
          9 => 'Give it @star/@count', 10 => 'Give it @star/@count',
      ));
  variable_set("fivestar_lstool_opensocial", 1);
  variable_set("fivestar_lstool_w3c", 1);
  variable_set("fivestar_position_bundle", 'above_static');
  variable_set("fivestar_position_lstool_opensocial", 'below');
  variable_set("fivestar_position_lstool_w3c", 'below');
  variable_set("fivestar_position_teaser_bundle", 'below_static');
  variable_set("fivestar_position_teaser_lstool_opensocial", 'hidden');
  variable_set("fivestar_position_teaser_lstool_w3c", 'hidden');
  variable_set("fivestar_position_teaser_widget_specification", 'hidden');
  variable_set("fivestar_position_widget_specification", 'hidden');
  variable_set("fivestar_stars_bundle", '5');
  variable_set("fivestar_stars_lstool_opensocial", '5');
  variable_set("fivestar_stars_lstool_w3c", '5');
  variable_set("fivestar_stars_widget_specification", '5');
  variable_set("fivestar_style_bundle", 'average');
  variable_set("fivestar_style_lstool_opensocial", 'average');
  variable_set("fivestar_style_lstool_w3c", 'average');
  variable_set("fivestar_style_widget_specification", 'average');
  variable_set("fivestar_text_bundle", 'none');
  variable_set("fivestar_text_lstool_opensocial", 'none');
  variable_set("fivestar_text_lstool_w3c", 'none');
  variable_set("fivestar_text_widget_specification", 'dual');
  variable_set("fivestar_title_bundle", 0);
  variable_set("fivestar_title_lstool_opensocial", 0);
  variable_set("fivestar_title_lstool_w3c", 0);
  variable_set("fivestar_title_widget_specification", 0);
  variable_set("fivestar_unvote_bundle", 0);
  variable_set("fivestar_unvote_lstool_opensocial", 0);
  variable_set("fivestar_unvote_lstool_w3c", 0);
  variable_set("fivestar_unvote_widget_specification", 0);
  variable_set("fivestar_widget_specification", 1);
  variable_set("format", '1');
  variable_set("form_build_id_bundle", 'form-6caba22b2ea796f43734ddd96e8b402f');
  variable_set("form_build_id_faq", 'form-a46f4e59f88d41e031faeb77370fc383');
  variable_set("form_build_id_lstool_opensocial",
      'form-e76874f2998f29c6e17bbebb21c6e4b5');
  variable_set("form_build_id_lstool_w3c",
      'form-5e968ef3838ff5651a15af9179bcbd06');
  variable_set("googleanalytics_account", 'UA-20871615-5');
  variable_set("googleanalytics_cache", 0);
  variable_set("googleanalytics_codesnippet_after", '');
  variable_set("googleanalytics_codesnippet_before", '');
  variable_set("googleanalytics_custom", '0');
  variable_set("googleanalytics_custom_var",
      array(
          'slots' => array(
              1 => array(
                'slot' => 1, 'name' => '', 'value' => '', 'scope' => '3',
              ),
              2 => array(
                'slot' => 2, 'name' => '', 'value' => '', 'scope' => '3',
              ),
              3 => array(
                'slot' => 3, 'name' => '', 'value' => '', 'scope' => '3',
              ),
              4 => array(
                'slot' => 4, 'name' => '', 'value' => '', 'scope' => '3',
              ),
              5 => array(
                'slot' => 5, 'name' => '', 'value' => '', 'scope' => '3',
              ),
          ),
      ));
  variable_set("googleanalytics_domain_mode", '0');
  variable_set("googleanalytics_pages",
      'admin admin/* batch node/add* node/*/* user/*/*');
  variable_set("googleanalytics_privacy_donottrack", 1);
  variable_set("googleanalytics_roles",
      array(
        3 => 3, 4 => 4, 5 => 5, 1 => 0, 2 => 0,
      ));
  variable_set("googleanalytics_site_search", 0);
  variable_set("googleanalytics_trackadsense", 0);
  variable_set("googleanalytics_tracker_anonymizeip", 0);
  variable_set("googleanalytics_trackfiles", 1);
  variable_set("googleanalytics_trackfiles_extensions",
      '7z|aac|arc|arj|asf|asx|avi|bin|csv|doc|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls|xml|z|zip');
  variable_set("googleanalytics_trackmailto", 1);
  variable_set("googleanalytics_trackoutboundaspageview", 0);
  variable_set("googleanalytics_trackoutgoing", 1);
  variable_set("googleanalytics_visibility", '0');
  variable_set("googleanalytics_visibility_roles", '1');
  variable_set("group_media_data", 'group_media_data');
  variable_set("install_task", 'done');
  variable_set("install_time", 1318423242);
  variable_set("javascript_parsed", array());
  variable_set("jquery_update_compression_type", 'min');
  variable_set("jquery_update_replace", true);
  variable_set("lstool_opensocial_contest_participation",
      'contest_participation');
  variable_set("menu_default_node_menu", 'primary-links');
  variable_set("menu_expanded", array(
    0 => 'menu-tool-categories',
  ));
  variable_set("menu_masks",
      array(
          0 => 127, 1 => 125, 2 => 63, 3 => 62, 4 => 61, 5 => 59, 6 => 58,
          7 => 57, 8 => 56, 9 => 31, 10 => 30, 11 => 29, 12 => 28, 13 => 24,
          14 => 21, 15 => 15, 16 => 14, 17 => 11, 18 => 10, 19 => 7, 20 => 6,
          21 => 5, 22 => 3, 23 => 2, 24 => 1,
      ));
  variable_set("menu_primary_links_source", 'primary-links');
  variable_set("menu_secondary_links_source", 'secondary-links');
  variable_set("node_admin_theme", 0);
  variable_set("node_cron_comments_scale", 1);
  variable_set("node_cron_last", '1323858995');
  variable_set("node_cron_views_scale", 1);
  variable_set("node_options_bundle", array());
  variable_set("node_options_faq", array(
    0 => 'status',
  ));
  variable_set("node_options_forum", array(
    0 => 'status',
  ));
  variable_set("node_options_lstool_opensocial", array());
  variable_set("node_options_lstool_w3c", array());
  variable_set("node_options_widget_contest", array(
    0 => 'status',
  ));
  variable_set("node_options_widget_specification", array(
    0 => 'status',
  ));
  variable_set("node_options_widget_specification_review",
      array(
        0 => 'status',
      ));
  variable_set("node_preview", '0');
  variable_set("node_type_faq", array(
    0 => 'status',
  ));
  variable_set("page_compression", '1');
  variable_set("panels_legacy_rendering_mode", false);
  variable_set("pathauto_case", '1');
  variable_set("pathauto_faq_pattern", 'faq/[catpath-raw]');
  variable_set("pathauto_faq_supportsfeeds", NULL);
  variable_set("pathauto_ignore_words",
      'a,an,as,at,before,but,by,for,from,is,in,into,like,of,off,on,onto,per,since,than,the,this,that,to,up,via,with');
  variable_set("pathauto_indexaliases", false);
  variable_set("pathauto_indexaliases_bulkupdate", false);
  variable_set("pathauto_max_bulk_update", '50');
  variable_set("pathauto_max_component_length", '100');
  variable_set("pathauto_max_length", '100');
  variable_set("pathauto_modulelist", array(
    0 => 'node', 1 => 'user',
  ));
  variable_set("pathauto_node_applytofeeds", '');
  variable_set("pathauto_node_bulkupdate", 0);
  variable_set("pathauto_node_bundle_pattern", 'bundle/[title-raw]');
  variable_set("pathauto_node_faq_pattern", 'faq/[title-raw]');
  variable_set("pathauto_node_forum_pattern", '');
  variable_set("pathauto_node_image_pattern", '');
  variable_set("pathauto_node_lstool_opensocial_pattern", 'tiool/[title-raw]');
  variable_set("pathauto_node_lstool_w3c_pattern", 'tool/[title-raw]');
  variable_set("pathauto_node_page_pattern", '[title-raw]');
  variable_set("pathauto_node_pattern", 'content/[title-raw]');
  variable_set("pathauto_node_story_pattern", '');
  variable_set("pathauto_node_supportsfeeds", 'feed');
  variable_set("pathauto_node_widget_contest_pattern", 'contest/[title-raw]');
  variable_set("pathauto_node_widget_specification_pattern",
      'specification/[title-raw]');
  variable_set("pathauto_node_widget_specification_review_pattern",
      'specification-review/[title-raw]');
  variable_set("pathauto_punctuation_ampersand", '0');
  variable_set("pathauto_punctuation_asterisk", '0');
  variable_set("pathauto_punctuation_at", '0');
  variable_set("pathauto_punctuation_backtick", '0');
  variable_set("pathauto_punctuation_back_slash", '0');
  variable_set("pathauto_punctuation_caret", '0');
  variable_set("pathauto_punctuation_colon", '0');
  variable_set("pathauto_punctuation_comma", '0');
  variable_set("pathauto_punctuation_dollar", '0');
  variable_set("pathauto_punctuation_double_quotes", '0');
  variable_set("pathauto_punctuation_equal", '0');
  variable_set("pathauto_punctuation_exclamation", '0');
  variable_set("pathauto_punctuation_greater_than", '0');
  variable_set("pathauto_punctuation_hash", '0');
  variable_set("pathauto_punctuation_hyphen", '1');
  variable_set("pathauto_punctuation_left_curly", '0');
  variable_set("pathauto_punctuation_left_parenthesis", '0');
  variable_set("pathauto_punctuation_left_square", '0');
  variable_set("pathauto_punctuation_less_than", '0');
  variable_set("pathauto_punctuation_percent", '0');
  variable_set("pathauto_punctuation_period", '0');
  variable_set("pathauto_punctuation_pipe", '0');
  variable_set("pathauto_punctuation_plus", '0');
  variable_set("pathauto_punctuation_question_mark", '0');
  variable_set("pathauto_punctuation_quotes", '0');
  variable_set("pathauto_punctuation_right_curly", '0');
  variable_set("pathauto_punctuation_right_parenthesis", '0');
  variable_set("pathauto_punctuation_right_square", '0');
  variable_set("pathauto_punctuation_semicolon", '0');
  variable_set("pathauto_punctuation_slash", '0');
  variable_set("pathauto_punctuation_tilde", '0');
  variable_set("pathauto_punctuation_underscore", '0');
  variable_set("pathauto_reduce_ascii", 0);
  variable_set("pathauto_separator", '-');
  variable_set("pathauto_taxonomy_1_pattern", 'tool-category/[catpath-raw]');
  variable_set("pathauto_taxonomy_2_pattern", 'functionality/[catpath-raw]');
  variable_set("pathauto_taxonomy_3_pattern", 'learning-domain/[catpath-raw]');
  variable_set("pathauto_taxonomy_4_pattern", 'tag/[catpath-raw]');
  variable_set("pathauto_taxonomy_5_pattern", '');
  variable_set("pathauto_taxonomy_applytofeeds", '0/feed');
  variable_set("pathauto_taxonomy_bulkupdate", 0);
  variable_set("pathauto_taxonomy_pattern",
      'category/[vocab-raw]/[catpath-raw]');
  variable_set("pathauto_taxonomy_supportsfeeds", '0/feed');
  variable_set("pathauto_transliterate", false);
  variable_set("pathauto_update_action", '2');
  variable_set("pathauto_user_bulkupdate", 0);
  variable_set("pathauto_user_pattern", 'users/[user-raw]');
  variable_set("pathauto_user_supportsfeeds", NULL);
  variable_set("pathauto_verbose", 1);
  variable_set("preprocess_css", '0');
  variable_set("preprocess_js", '1');
  variable_set("rebuild", 'Rebuild permissions');
  variable_set("recaptcha_ajax_api", 1);
  variable_set("recaptcha_mailhide_private_key",
      'cc3f0c5e64ef01e49ae626eb809c166f');
  variable_set("recaptcha_mailhide_public_key", '01UoAWVmE8bxDOczgY9Vfypg==');
  variable_set("recaptcha_private_key",
      '6LeZBMsSAAAAAGNHFwdliDpdemTuN4faC4MtYlNY');
  variable_set("recaptcha_public_key",
      '6LeZBMsSAAAAAAyd0fObC99o-1tQI3TtXt5fFl1I');
  variable_set("recaptcha_secure_connection", 1);
  variable_set("recaptcha_tabindex", '');
  variable_set("recaptcha_theme", 'red');
  variable_set("rules_inactive_sets",
      array(
          1 => 'event_comment_update', 2 => 'event_comment_delete',
          3 => 'event_comment_view', 4 => 'event_comment_publish',
          5 => 'event_comment_unpublish', 9 => 'event_node_view',
          10 => 'event_node_delete', 11 => 'event_init', 12 => 'event_cron',
          13 => 'event_taxonomy_term_insert',
          14 => 'event_taxonomy_term_update', 16 => 'event_user_update',
          17 => 'event_user_view', 18 => 'event_user_delete',
          19 => 'event_user_login', 20 => 'event_user_logout',
          21 => 'event_workflow_state_changed',
          22 => 'event_workflow_comment_added',
      ));
  variable_set("search_cron_limit", 0);
  variable_set("services_use_content_permissions", 0);
  variable_set("site_403", 'access-denied');
  variable_set("site_404", 'page-not-found');
  variable_set("site_footer", '');
  variable_set("site_frontpage", 'homepage');
  variable_set("site_mail", 'no-reply@role-widgetstore.com');
  variable_set("site_mission", '');
  variable_set("site_name", 'ROLE Widget Store');
  variable_set("site_offline", '0');
  variable_set("site_offline_message",
      'ROLE Widget Store is currently under maintenance. We should be back shortly. Thank you for your patience.');
  variable_set("site_slogan", '');
  variable_set("skinr_role_widget_store",
      array(
          'block' => array(
              'views-Ideas_list_top-block_1' => array(),
              'ideastream_config-0' => array(),
              'views-top_inventors2-block_1' => array(),
              'ideastream_config-1' => array(),
              'ideastream_blocks-0' => array(),
              'ideastream_blocks-1' => array(),
              'menu-menu-my-content' => array(
                'fusion-menu' => 'fusion-inline-menu',
              ),
              'menu-menu-tool-categories' => array(
                '_additional' => 'widget-block-icon',
              ),
              'menu-primary-links' => array(
                  'grid12-width' => 'grid12-5',
                  'fusion-alignment' => 'fusion-right',
                  'fusion-content-alignment' => 'fusion-right-content',
                  '_additional' => 'primary-menu',
              ), 'search-0' => array(
                'grid12-width' => 'grid12-4',
              ),
              'menu-menu-catalogues' => array(
                'grid12-width' => 'grid12-8',
              ), 'apachesolr_search-im_vid_2' => array(),
              'faq_ask-1' => array(), 'faq_ask-0' => array(),
              'faq-0' => array(), 'faq-1' => array(),
          ),
          'comment' => array(
              'idea' => array(), 'widget_contest' => array(),
              'widget_specification_review' => array(), 'bundle' => array(),
              'faq' => array(),
          ),
          'node' => array(
              'idea' => array(), 'widget_contest' => array(),
              'widget_specification_review' => array(), 'bundle' => array(),
              'faq' => array(),
          ),
          'views' => array(
              'view-widget_specification_review_sum-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
              'view-widget_spec_review_overview-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
              'view-my_tools-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
              'view-my_widget_specification_reviews-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
              'view-my_widget_specifications-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
              'view-widget_specification_list-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
              'view-nodereference_explorer_default-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
          ),
      ));
  variable_set("skinr_role_widget_store_embedded",
      array(
          'comment' => array(
              'widget_contest' => array(), 'widget_specification' => array(),
              'widget_specification_review' => array(),
              'lstool_w3c' => array(),
          ),
          'node' => array(
              'widget_contest' => array(), 'widget_specification' => array(),
              'widget_specification_review' => array(),
              'lstool_w3c' => array(),
          ), 'block' => array(
            'apachesolr_search-im_vid_1' => array(),
          ),
          'views' => array(
              'view-nodereference_explorer_default-display-default' => array(
                  'grid-width' => array(), 'fusion-content-alignment' => '',
                  'fusion-multicol' => '', 'fusion-list-styles' => array(),
                  'fusion-float-imagefield' => '',
              ),
          ),
      ));
  variable_set("skinr_settings_bundle",
      array(
        0 => 'comment_group', 1 => 'node_group',
      ));
  variable_set("skinr_settings_faq",
      array(
        0 => 'comment_group', 1 => 'node_group',
      ));
  variable_set("skinr_settings_lstool_opensocial",
      array(
        0 => 'comment_group', 1 => 'node_group',
      ));
  variable_set("skinr_settings_lstool_w3c",
      array(
        0 => 'comment_group', 1 => 'node_group',
      ));
  variable_set("skinr_settings_widget_contest",
      array(
        0 => 'comment_group', 1 => 'node_group',
      ));
  variable_set("skinr_settings_widget_specification",
      array(
        0 => 'comment_group', 1 => 'node_group',
      ));
  variable_set("skinr_settings_widget_specification_review",
      array(
        0 => 'comment_group', 1 => 'node_group',
      ));
  variable_set("smtp_library", '');
  variable_set("taxonomy_image_admin_preset", 'ORIGINAL');
  variable_set("taxonomy_image_default", '');
  variable_set("taxonomy_image_disable",
      'Check this box to disable the display of content images.');
  variable_set("taxonomy_image_height", '200');
  variable_set("taxonomy_image_imagecache_preset", 'ORIGINAL');
  variable_set("taxonomy_image_link_title", '1');
  variable_set("taxonomy_image_path", 'category_pictures');
  variable_set("taxonomy_image_recursive", '0');
  variable_set("taxonomy_image_resize", '1');
  variable_set("taxonomy_image_verbose_delete", 0);
  variable_set("taxonomy_image_width", '150');
  variable_set("taxonomy_image_wrapper", 1);
  variable_set("taxonomy_menu_blank_title_1", 0);
  variable_set("taxonomy_menu_blank_title_2", 0);
  variable_set("taxonomy_menu_blank_title_3", 0);
  variable_set("taxonomy_menu_blank_title_5", 0);
  variable_set("taxonomy_menu_display_descendants_1", 0);
  variable_set("taxonomy_menu_display_descendants_2", 0);
  variable_set("taxonomy_menu_display_descendants_3", 0);
  variable_set("taxonomy_menu_display_descendants_5", 0);
  variable_set("taxonomy_menu_display_num_1", 0);
  variable_set("taxonomy_menu_display_num_2", 0);
  variable_set("taxonomy_menu_display_num_3", 0);
  variable_set("taxonomy_menu_display_num_5", 0);
  variable_set("taxonomy_menu_end_all_1", 0);
  variable_set("taxonomy_menu_end_all_2", 0);
  variable_set("taxonomy_menu_end_all_3", 0);
  variable_set("taxonomy_menu_end_all_5", 0);
  variable_set("taxonomy_menu_expanded_1", 1);
  variable_set("taxonomy_menu_expanded_2", 1);
  variable_set("taxonomy_menu_expanded_3", 1);
  variable_set("taxonomy_menu_expanded_5", 1);
  variable_set("taxonomy_menu_hide_empty_terms_1", 0);
  variable_set("taxonomy_menu_hide_empty_terms_2", 0);
  variable_set("taxonomy_menu_hide_empty_terms_3", 0);
  variable_set("taxonomy_menu_hide_empty_terms_5", 0);
  variable_set("taxonomy_menu_path_1", 'taxonomy_menu_path_default');
  variable_set("taxonomy_menu_path_2", 'taxonomy_menu_path_default');
  variable_set("taxonomy_menu_path_3", 'taxonomy_menu_path_default');
  variable_set("taxonomy_menu_path_5", 'taxonomy_menu_path_default');
  variable_set("taxonomy_menu_rebuild_1", 0);
  variable_set("taxonomy_menu_rebuild_2", 0);
  variable_set("taxonomy_menu_rebuild_3", 0);
  variable_set("taxonomy_menu_rebuild_5", 0);
  variable_set("taxonomy_menu_sync_1", 1);
  variable_set("taxonomy_menu_sync_2", 1);
  variable_set("taxonomy_menu_sync_3", 1);
  variable_set("taxonomy_menu_sync_5", 1);
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_base_path_1", 'tools');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_base_path_2",
      'category');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_base_path_3",
      'category');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_base_path_5",
      'category');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_depth_1", '1');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_depth_2", '');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_depth_3", '');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_depth_5", '');
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_use_term_name_1", 1);
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_use_term_name_2", 0);
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_use_term_name_3", 0);
  variable_set("taxonomy_menu_taxonomy_menu_path_custom_use_term_name_5", 0);
  variable_set("taxonomy_menu_taxonomy_menu_vocabulary_path_1", 'tools');
  variable_set("taxonomy_menu_taxonomy_menu_vocabulary_path_2", 'category');
  variable_set("taxonomy_menu_taxonomy_menu_vocabulary_path_3", 'category');
  variable_set("taxonomy_menu_taxonomy_menu_vocabulary_path_5", 'category');
  variable_set(
      "taxonomy_menu_vocabulary_path_use_custom_path_for_term_menu_path_1", 1);
  variable_set(
      "taxonomy_menu_vocabulary_path_use_custom_path_for_term_menu_path_2", 0);
  variable_set(
      "taxonomy_menu_vocabulary_path_use_custom_path_for_term_menu_path_3", 0);
  variable_set(
      "taxonomy_menu_vocabulary_path_use_custom_path_for_term_menu_path_5", 0);
  variable_set("taxonomy_menu_vocab_menu_1", 'menu-tool-categories');
  variable_set("taxonomy_menu_vocab_menu_2", '0');
  variable_set("taxonomy_menu_vocab_menu_3", '0');
  variable_set("taxonomy_menu_vocab_menu_5", '0');
  variable_set("taxonomy_menu_vocab_parent_1", '0');
  variable_set("taxonomy_menu_vocab_parent_2", NULL);
  variable_set("taxonomy_menu_vocab_parent_3", NULL);
  variable_set("taxonomy_menu_vocab_parent_5", NULL);
  variable_set("taxonomy_menu_voc_item_1", 0);
  variable_set("taxonomy_menu_voc_item_2", 1);
  variable_set("taxonomy_menu_voc_item_3", 1);
  variable_set("taxonomy_menu_voc_item_5", 1);
  variable_set("taxonomy_menu_voc_name_1", '');
  variable_set("taxonomy_menu_voc_name_2", '');
  variable_set("taxonomy_menu_voc_name_3", '');
  variable_set("taxonomy_menu_voc_name_5", '');
  variable_set("taxonomy_super_select_vid_1",
      array(
          'types' => array(
            '-all-' => '-all-',
          ), 'parents' => 0, 'image' => 0, 'collapsible' => 0,
          'terms_expanded' => 0, 'compact' => 0,
      ));
  variable_set("taxonomy_super_select_vid_2",
      array(
          'types' => array(), 'parents' => 0, 'image' => 0, 'collapsible' => 1,
          'terms_expanded' => 0, 'compact' => 0,
      ));
  variable_set("taxonomy_super_select_vid_3",
      array(
          'types' => array(), 'parents' => 0, 'image' => 0, 'collapsible' => 1,
          'terms_expanded' => 0, 'compact' => 0,
      ));
  variable_set("taxonomy_tag_suggestor_vid_1",
      array(
        'types' => array(), 'source' => 'intern',
      ));
  variable_set("taxonomy_tag_suggestor_vid_2",
      array(
        'types' => array(
          '-all-' => '-all-',
        ), 'source' => 'intern',
      ));
  variable_set("taxonomy_tag_suggestor_vid_3",
      array(
          'types' => array(
              'bundle' => 'bundle', 'lstool_opensocial' => 'lstool_opensocial',
              'lstool_w3c' => 'lstool_w3c', '-all-' => '-all-',
          ), 'source' => 'intern',
      ));
  variable_set("taxonomy_xml_vid", '2');
  variable_set("teaser_length", '600');
  system_theme_data();
  variable_set("theme_default", 'role_widget_store');
  variable_set("theme_fusion_core_settings",
      array(
          'user_notverified_display' => 1, 'breadcrumb_display' => 1,
          'search_snippet' => 1, 'search_info_type' => 1,
          'search_info_user' => 1, 'search_info_date' => 1,
          'search_info_comment' => 1, 'search_info_upload' => 1,
          'rebuild_registry' => 0, 'fix_css_limit' => 0,
          'block_config_link' => 1, 'grid_mask' => 0,
          'sidebar_layout' => 'sidebars-split', 'sidebar_first_width' => '3',
          'sidebar_last_width' => '3', 'theme_font' => 'none',
          'theme_font_size' => 'font-size-13', 'primary_menu_dropdown' => 1,
          'mission' => '', 'default_logo' => 1, 'logo_path' => '',
          'default_favicon' => 1, 'favicon_path' => '', 'primary_links' => 1,
          'secondary_links' => 1, 'toggle_logo' => 1, 'toggle_favicon' => 1,
          'toggle_name' => 1, 'toggle_search' => 0, 'toggle_slogan' => 0,
          'toggle_mission' => 1, 'toggle_node_user_picture' => 0,
          'toggle_comment_user_picture' => 0, 'toggle_primary_links' => 1,
          'toggle_secondary_links' => 1, 'toggle_node_info_lstool' => 1,
          'toggle_node_info_lstool_opensocial' => 1,
          'theme_grid' => 'grid16-960', 'fluid_grid_width' => 'fluid-100',
          'theme_grid_options' => array(
              0 => 'grid16-960', 1 => 'grid16-fluid', 2 => 'grid12-960',
              3 => 'grid12-fluid',
          ),
      ));
  variable_set("theme_role_widget_store_backend_settings",
      array(
          'toggle_logo' => 1, 'toggle_name' => 0, 'toggle_slogan' => 0,
          'toggle_mission' => 1, 'toggle_node_user_picture' => 0,
          'toggle_comment_user_picture' => 0, 'toggle_search' => 0,
          'toggle_favicon' => 1, 'toggle_primary_links' => 1,
          'toggle_secondary_links' => 1, 'default_logo' => 1,
          'logo_path' => '', 'logo_upload' => '', 'default_favicon' => 1,
          'favicon_path' => '', 'favicon_upload' => '',
      ));
  variable_set("theme_role_widget_store_embedded_settings",
      array(
          'toggle_logo' => 1, 'toggle_name' => 0, 'toggle_slogan' => 0,
          'toggle_node_user_picture' => 0, 'toggle_comment_user_picture' => 0,
          'toggle_search' => 1, 'toggle_favicon' => 1,
          'toggle_primary_links' => 1, 'toggle_secondary_links' => 1,
          'default_logo' => 1, 'logo_path' => '', 'logo_upload' => '',
          'default_favicon' => 1, 'favicon_path' => '', 'favicon_upload' => '',
          'theme_grid' => 'grid12-984', 'fluid_grid_width' => 'fluid-100',
          'sidebar_layout' => 'sidebars-split', 'sidebar_first_width' => '3',
          'sidebar_last_width' => '2', 'theme_font' => 'none',
          'theme_font_size' => 'font-size-12', 'primary_menu_dropdown' => 1,
          'breadcrumb_display' => 1, 'search_snippet' => 1,
          'search_info_type' => 1, 'search_info_user' => 1,
          'search_info_date' => 1, 'search_info_comment' => 1,
          'search_info_upload' => 1, 'user_notverified_display' => 1,
          'block_config_link' => 1, 'grid_mask' => 0, 'rebuild_registry' => 0,
          'fix_css_limit' => 0,
      ));
  variable_set("theme_role_widget_store_settings",
      array(
          'toggle_logo' => 1, 'toggle_name' => 0, 'toggle_slogan' => 0,
          'toggle_node_user_picture' => 0, 'toggle_comment_user_picture' => 0,
          'toggle_search' => 1, 'toggle_favicon' => 1,
          'toggle_primary_links' => 1, 'toggle_secondary_links' => 1,
          'default_logo' => 1, 'logo_path' => '', 'logo_upload' => '',
          'default_favicon' => 1, 'favicon_path' => '', 'favicon_upload' => '',
          'theme_grid' => 'grid12-984', 'fluid_grid_width' => 'fluid-100',
          'sidebar_layout' => 'sidebars-split', 'sidebar_first_width' => '3',
          'sidebar_last_width' => '3', 'theme_font' => 'none',
          'theme_font_size' => 'font-size-12', 'primary_menu_dropdown' => 1,
          'breadcrumb_display' => 1, 'search_snippet' => 1,
          'search_info_type' => 1, 'search_info_user' => 1,
          'search_info_date' => 1, 'search_info_comment' => 1,
          'search_info_upload' => 1, 'user_notverified_display' => 1,
          'block_config_link' => 1, 'grid_mask' => 0, 'rebuild_registry' => 0,
          'fix_css_limit' => 0,
      ));
  variable_set("theme_settings",
      array(
          'toggle_logo' => 1, 'toggle_name' => 0, 'toggle_slogan' => 0,
          'toggle_mission' => 0, 'toggle_node_user_picture' => 0,
          'toggle_comment_user_picture' => 0, 'toggle_search' => 1,
          'toggle_favicon' => 1, 'toggle_primary_links' => 1,
          'toggle_secondary_links' => 1,
          'toggle_node_info_lstool_opensocial' => 1,
          'toggle_node_info_page' => 1, 'toggle_node_info_lstool_w3c' => 1,
          'default_logo' => 1, 'logo_path' => '', 'logo_upload' => '',
          'default_favicon' => 1, 'favicon_path' => '', 'favicon_upload' => '',
      ));
  variable_set("update_last_check", 1328540164);
  variable_set("upload_bundle", '0');
  variable_set("upload_faq", '0');
  variable_set("upload_lstool_opensocial", '0');
  variable_set("upload_lstool_w3c", '0');
  variable_set("upload_widget_contest", '0');
  variable_set("upload_widget_specification", '0');
  variable_set("upload_widget_specification_review", '0');
  variable_set("user_email_verification", true);
  variable_set("views_block_hashes",
      array(
          '231b0ab61fc595f943f1ad1723ca3d90' => '-exp-nodereference_explorer_default-default',
          '2a1e1fd05732d4828431bb53712d6648' => '-exp-nodereference_explorer_default-table',
          '6c7fd6164525b40e5518abb946d56c6b' => '-exp-nodereference_explorer_default-preview',
          'e65e15770a0d49a9aef7a6fc30da3d03' => '-exp-nodereference_explorer_default-page_1',
      ));
  variable_set("views_ui_basic",
      array(
          'my_widget_specification_reviews' => array(
            0 => 'default', 1 => 'page_1',
          ),
          'my_widget_specifications' => array(
            0 => 'default', 1 => 'page_1',
          ), 'my_tools' => array(
            0 => 'default', 1 => 'page_1',
          ), 'my_bundle' => array(
            0 => 'default', 1 => 'page_1',
          ),
          'widget_spec_review_overview' => array(
            0 => 'default', 1 => 'page_1',
          ),
          'widget_specification_list' => array(
            0 => 'default', 1 => 'page_1',
          ),
      ));
  variable_set("views_ui_basic_fields",
      array(
        'header' => 'header', 'empty' => 'empty',
      ));
  variable_set("wipe", 'Wipe and rebuild');
  variable_set("workflow_bundle", array(
    0 => 'node',
  ));
  variable_set("workflow_lstool_opensocial", array(
    0 => 'node',
  ));
  variable_set("workflow_lstool_w3c", array(
    0 => 'node',
  ));
  variable_set("workflow_page", array(
    0 => 'node',
  ));
  variable_set("workflow_widget_contest", array(
    0 => 'node',
  ));
  variable_set("workflow_widget_specification", array(
    0 => 'node',
  ));
  variable_set("workflow_widget_specification_review", array(
    0 => 'node',
  ));
  variable_set("wysiwyg_imageupload_dest_root", 'wysiwyg_imageupload');
  variable_set("wysiwyg_imageupload_filename_as_title_default", 0);
  variable_set("wysiwyg_imageupload_imgstyles", '');
  variable_set("wysiwyg_imageupload_lightbox_default", 0);
  variable_set("wysiwyg_imageupload_lightbox_preset",
      'wysiwyg_imageupload_lightbox_preset');
  variable_set("wysiwyg_imageupload_max_filesize", '0');
  variable_set("wysiwyg_imageupload_presets_whitelist",
      array(
          'wysiwyg_200x200' => 'wysiwyg_200x200', 'bundle_400x400' => 0,
          'bundle_tool_explorer_50x50' => 0, 'bundle_tool_list_110x110' => 0,
          'tool_400x400' => 0,
          'widget_specification_screenshot_browser_400x400' => 0,
          'wysiwyg_imageupload_browser_preview' => 0,
          'wysiwyg_imageupload_preview' => 0,
          'wysiwyg_imageupload_lightbox_preset' => 0,
      ));
  variable_set("wysiwyg_imageupload_relative_user", '$uid');
  variable_set("wysiwyg_imageupload_skip_dependencies_check", 1);

  /********************************
   *      CUSTOM NODE TYPES       *
   ********************************/
  db_query(
      "INSERT INTO {node_type} (type, name, module, description, help, has_title, title_label, has_body, body_label, min_word_count, custom, modified, locked, orig_type) VALUES ('page', 'Page', 'node', 'A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an \"About us\" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.', '', '1', 'Title', '1', 'Body', '0', '1', '1', '0', 'page')");
  db_query(
      "INSERT INTO {node_type} (type, name, module, description, help, has_title, title_label, has_body, body_label, min_word_count, custom, modified, locked, orig_type) VALUES ('widget_contest', 'Widget Contest', 'node', 'A page which describes a widget contest', '', '1', 'Title of the Contest', '1', 'Contest Description', '0', '1', '1', '0', '')");
  db_query(
      "INSERT INTO {node_type} (type, name, module, description, help, has_title, title_label, has_body, body_label, min_word_count, custom, modified, locked, orig_type) VALUES ('widget_specification', 'Widget Specification', 'node', 'This type describes the specification of an widget including screenshot mock-ups, use case and an optional URL to a possible implementation', 'Use this form to create a widget specification for the ROLE Widget Contest. 

The specification will be saved as draft as long you do not set the status to submitted. Use the \"my submissions\" link to edit the specification again and see the current status.', '1', 'Title', '1', 'Widget Specification', '0', '1', '1', '0', '')");
  db_query(
      "INSERT INTO {node_type} (type, name, module, description, help, has_title, title_label, has_body, body_label, min_word_count, custom, modified, locked, orig_type) VALUES ('widget_specification_review', 'Widget Specification Review', 'node', 'Widget specification review is a textual themed reviewed delivered by selected reviewers. The reviews are invisible for users and their goal is to internally assess the value of specification.', '', '1', 'Title', '1', 'Reasoning', '1', '1', '1', '0', '')");

  /********************************
   *    VOCABULARIES AND TERMS     *
   ********************************/
  $tids = array(
    0 => 0
  );
  /********************************
   *  TAXONOMY: TOOL CATEGORIES   *
   ********************************/
  $vid = install_taxonomy_add_vocabulary('Tool Categories',
      array(
          'lstool_opensocial' => 'lstool_opensocial',
          'lstool_w3c' => 'lstool_w3c',
      ),
      array(
          'name' => 'Tool Categories', 'description' => '', 'help' => '',
          'relations' => '1', 'hierarchy' => '0', 'multiple' => '1',
          'required' => '1', 'tags' => '0', 'module' => 'taxonomy',
          'weight' => '-10',
      ));

  $term = array(
      'name' => 'Plan & Organise',
      'description' => 'These tools facilitate the planning and organisation of your learning activities, process and resources as well as the setting of your learning goals.',
      'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Search & get Recommendation',
      'description' => 'These tools enhance the searching process for your learning resources and/ or give recommendation for suitable tools, widgets or bundles.',
      'weight' => '1', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Collaborate & Communicate',
      'description' => 'These tools provide the possibility to collaborate and communicate with other participants of your learning process.',
      'weight' => '2', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Explore & View',
      'description' => 'These tools provide access to domain specific learning content. Content may be static or interactive.',
      'weight' => '3', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Train & Test',
      'description' => 'These tools provide support for knowledge acquisition as well as training and testing of skills.',
      'weight' => '4', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Create & Manipulate',
      'description' => 'These tools facilitate the creation and manipulation of content in your learning environment.',
      'weight' => '5', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Reflect & Evaluate',
      'description' => 'These tools facilitate the reflection of your learning process, -progress, -result and -environment.',
      'weight' => '6', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Demo Widgets',
      'description' => 'Example widgets and bundles which provide demo functionality.',
      'weight' => '7', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Developer Tools',
      'description' => 'Tools which are supporting developers by creating new tools',
      'weight' => '8', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  /********************************
   *  TAXONOMY: FUNCTIONALITIES   *
   ********************************/
  $vid = install_taxonomy_add_vocabulary('Functionalities',
      array(
          'lstool_opensocial' => 'lstool_opensocial',
          'lstool_w3c' => 'lstool_w3c',
      ),
      array(
          'name' => 'Functionalities', 'description' => '', 'help' => '',
          'relations' => '1', 'hierarchy' => '0', 'multiple' => '1',
          'required' => '0', 'tags' => '1', 'module' => 'taxonomy',
          'weight' => '-9',
      ));

  $term = array(
      'name' => 'Asynchronous Communication/Collaboration',
      'description' => 'Asynchronous Communication/Collaboration',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC2',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Alert',
      'description' => 'allows access to news, updates, and announcements',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF13',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Annotation/rating',
      'description' => 'provides support for the creation, management and use of secondary metadata (user ratings and text annotations)',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF14',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Audio and video (AV) conferencing',
      'description' => 'provides conferencing incl. video and/or audio broadcast',
      'weight' => '0', 'guid' => 'http://purl.org/role/terms/FunctionalityTF2',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Blogging',
      'description' => '"supports the use of asynchronous messaging in reverse chronological order about a particular topic. Comprises single user, embedded in portals (e.g. in LMS or CMS systems) and collective blogs',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF19',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Calendaring',
      'description' => 'supports the sharing of calendars, such as personal calendars and course timetables',
      'weight' => '0', 'guid' => 'http://purl.org/role/terms/FunctionalityTF8',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Collaborative writing',
      'description' => 'allows creating written works by multiple people together',
      'weight' => '0', 'guid' => 'http://purl.org/role/terms/FunctionalityTF6',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Forum',
      'description' => 'supports the use of asynchronous collaborative messaging, as offered by fora and message boards',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF15',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Group',
      'description' => 'provides a means to manage basic information about groups of people',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF12',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Messaging',
      'description' => 'allows broadcast of asynchronous messages to users and groups using appropriate communication technology. Typically a Messaging service will deliver messages using Email or SMS (based on ).',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF10',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Microblogging',
      'description' => 'a blogging variant that limits the length of messages and automatically distributes the content to all subscribers',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF20',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Person',
      'description' => 'provides a means to manage basic information about people, such as names, contact information, and perhaps some types of demographic and system management information, such as would typically be stored in a directory .',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF11',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Presence',
      'description' => 'provides information about a users online status, much like a chat application',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF16',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Quality assurance',
      'description' => 'supports the recording and retrieval of quality assurance statements, such as second-marking of assessments and approval of content for use in courses',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF17',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Resource sharing',
      'description' => 'supports the sharing, access and management of learning resources',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF18',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Social bookmarking',
      'description' => 'service that helps users share, classify, and discover web resources',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF23',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Social networking',
      'description' => 'service that allow individuals to (1) construct a public or semi-public profile within a bounded system, (2) articulate a list of other users with whom they share a connection, and (3) view and traverse their list of connections and those made by others',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF22',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Survey',
      'description' => 'supports the creation, management and use of online questionnaires',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF24',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Voting', 'description' => 'supports the collection of votes',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF21',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Whiteboard',
      'description' => 'supports the use of collaborative tools that focus on shared editing and idea sharing, such as electronic whiteboards',
      'weight' => '0', 'guid' => 'http://purl.org/role/terms/FunctionalityTF3',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Authoring Tools', 'description' => 'Authoring Tools',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC8',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Charting',
      'description' => 'involves creating a graph with symbols to document a process or event, or a table with rows and columns to document facts and values.',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF121',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'ConceptMapping',
      'description' => 'allow to represent relationships between concepts like ideas, images or words.',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF119',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Development',
      'description' => 'comprises tools for web site, e-learning, simulation, game and rapid application development',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF53',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Formatting', 'description' => 'allows formatting of text',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF123',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Highlighting',
      'description' => 'provides means for higlighting of text',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF124',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Knowledge domain authoring',
      'description' => 'supports the process of creating models and concepts',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF50',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Learning content authoring',
      'description' => 'supports the process of creating learning content, including learning assets, learning activities and curricula',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF48',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Manipulating',
      'description' => 'Provide a means of manipulating both textual and numerical data',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF54',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Media',
      'description' => 'supports media asset production (creation of graphics, audio, video and animation)',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF52',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Metadata authoring',
      'description' => 'supports the process of creating metadata instances',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF49',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'MindMapping',
      'description' => 'allow to represent words, ideas, tasks, or other items linked to and arranged around a central key word or idea. Mind maps are used to generate, visualize, structure, and classify ideas, and as an aid to studying and organizing information, solving problems, making decisions, and writing.',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF120',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Notetaking',
      'description' => 'allows recording information captured from a transient source, such as an oral discussion at a meeting, or a lecture often in the informal and/or unstructured format.',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF122',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Outlining',
      'description' => 'allows text to be organized into discrete sections that are related in a tree structure or hierarchy. Text may be collapsed into a node, or expanded and edited.',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF117',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Recording', 'description' => 'allows media record',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF108',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Speech synthesizing',
      'description' => 'products human speech', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF107',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Spreadsheet',
      'description' => 'simulates a paper, accounting worksheet. It displays multiple cells usually in a two-dimensional matrix or grid consisting of rows and columns. Each cell contains alphanumeric text, numeric values or formulas.',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF118',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'TextEditing', 'description' => 'allows text editing',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF104',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Word processing',
      'description' => 'supports word processors, page layout and document format tools',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF51',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Enabling Services', 'description' => 'Enabling Services',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC9',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Analyse',
      'description' => 'supports management and manipulation of complex data sets, allows classification and modelling of both numerical and textual data',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF76',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Authentication',
      'description' => 'allows the identity of users to be established',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF55',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Authorisation',
      'description' => 'supports the management of access to resources by agents, by providing access control decisions to applications based on information they provide about an agents requested behaviour',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF56',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Automatic metadata generation',
      'description' => 'supports the automatic generation and extraction of metadata values',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF57',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Digital rights management (DRM)',
      'description' => 'supports the allocation and application of rights policies against resources, consuming data in a digital rights expression language (DREL) to determine access. Typically works through authorisation services, and is generally intended to be called by auth',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF59',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Format conversion',
      'description' => '"supports the transformation of information from one format to another for example, from IMS Content Packaging to METS',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF61',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Harvesting',
      'description' => 'allows application services to support resource discovery by harvesting copies of some or all metadata records',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF62',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Identifier',
      'description' => 'supports the creation, registration and deregistration of identifiers',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF63',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Mapping',
      'description' => 'supports cross-mapping of values in different namespaces, such as crosswalks between metadata schemata',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF64',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Mashup/integration',
      'description' => 'supports the aggregation of services and tools as well as content',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF65',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Metadata management',
      'description' => 'supports the management of metadata for objects, including creation, validation and retrieval',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF66',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Recommendation Generation',
      'description' => 'supports the generation of recommendations to the user through collaborative filtering, content-based approaches or a combination of both',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF67',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'RenderWidgets', 'description' => 'render learning widgets',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF114',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Resolver',
      'description' => 'provides services based on the use of OpenURL (or similar) metadata, including redirection to document delivery services, redirection to online bookshops, to local library services, and other discovery activities. Resolver services work with institutional',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF68',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Service registry',
      'description' => 'stores, manages and makes available descriptions of service instances',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF70',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Social network analysis',
      'description' => 'supports the identification and representation of social structures',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF71',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Validation',
      'description' => 'supports the process of checking whether data and/or services are compliant to pre-determined formats or other defined criteria',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF75',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'VideoViewer', 'description' => 'view video', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF103',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Visualisation',
      'description' => 'supports the use of interactive visual representations of data to amplify cognition',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF72',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Learning Domain Services',
      'description' => 'Learning Domain Services', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC3',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Activity management',
      'description' => 'supports the management of learning activities',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF34',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Assessment',
      'description' => 'supports the use of automated assessments',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF28',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Competency',
      'description' => 'supports the management of competency frameworks, and the mapping of units of learning, assessments, and activities against specific competencies',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF30',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Dictionary', 'description' => 'provides with dictionary',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF74',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Educational gaming',
      'description' => 'provides support for the integration of learning content into educational games',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF38',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Encyclopaedia', 'description' => 'provides with encyclopedia',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF73',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'ePortfolios',
      'description' => 'supports the management of artefacts created by learners, such as essays and projects',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF31',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Grading',
      'description' => 'supports submitting grades against courses, modules, and other units of learning',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF29',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Learning Flow',
      'description' => 'supports the management and use of complex learning scenarios',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF32',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Managing',
      'description' => 'supports retrieval, description and organisation of information resources',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF58',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Marking',
      'description' => 'provides automated marking services. It could also support a dropbox method for traditional artifact-based assessment',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF36',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Reporting',
      'description' => 'provides standardised institutional (performance) data to outside agencies',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF33',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Resource List',
      'description' => 'supports the creation, access and management of reading lists and other lists of resources',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF27',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Sequencing',
      'description' => 'provides support for the use of sequenced learning objects, primarily of use within Virtual Learning Environments (VLEs) and similar environments for the delivery of complex learning packages',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF37',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Spell checking', 'description' => 'allows check spell',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF106',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Tracking',
      'description' => 'supports recording and retrieval of performance information, typically as a result of undertaking learning activities or interacting with materials',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF35',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Translation',
      'description' => 'Translate words and sentences', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF105',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Learning Evaluating Services',
      'description' => 'Learning Evaluating Services', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC6',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Evaluation',
      'description' => 'comparison of learners performance outcome with his or her goals or with a standard',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF43',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Self-assessment',
      'description' => 'supports critically reviewing the quality of ones own performance and provision',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF44',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Learning Observation Services',
      'description' => 'Learning Observation Services', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC5',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Mirroring',
      'description' => 'reflect information on an interaction with no evaluation',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF42',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Navigation',
      'description' => 'supports learning through displaying the current state within the learning cycle',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF39',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Learning Planning Service',
      'description' => 'Learning Planning Service', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC4',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'AddTask', 'description' => 'add a task to the current goal',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF113',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Arrange', 'description' => 'arrange objects', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF102',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Defining', 'description' => 'define objects', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF101',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Goal-Setting',
      'description' => 'supports the setting of the goals and accessing to skills',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF40',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Profiling',
      'description' => 'allows entering of personal profile data',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF116',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Scheduling',
      'description' => 'supports the management of allocation of resources against time',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF41',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Learning Supporting Tools',
      'description' => 'Learning Supporting Tools', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC7',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'ActorSearching',
      'description' => 'provides means for searching peers/facilitators',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF112',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'ArtefactSearching',
      'description' => 'provides means for searching artefacts/content',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF109',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Federated search',
      'description' => 'supports the processing of searches that target multiple types of repositories, such as a combined search using SRW, XQuery and Z39.50 protocols against repositories supporting a range of different metadata formats the results from which are then aggregat',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF60',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Feedback',
      'description' => 'system visualisations on learning state and progress and providing feedback about performance, emotional state, goal achievement by the learner',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF45',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Guiding',
      'description' => 'provides guideness of the learner through his learning process by giving of (internally generated) recommendations',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF47',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Search',
      'description' => 'supports the finding of information resources including learning objects, assets, e-reserves, learning opportunities, funding sources and so on. Search will typically target a single search type (such as SRW for library resources) although a search servic',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF69',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Simulation',
      'description' => 'comprises microworlds, computer simulations and gaming (including role play simulation and computer supported simulation and gaming)',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF46',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Support',
      'description' => 'provide support and guidance either through online tutorials or step by step instructions and semi-automated tasks',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF77',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'ToolSearching',
      'description' => 'provides means for searching tools/widgets',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF110',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'VideoSearching', 'description' => 'searching for videos',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF115',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Synchronous Communication Collaboration',
      'description' => 'Synchronous Communication Collaboration',
      'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTypeTC1',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Application sharing',
      'description' => 'supports the sharing of running applications',
      'weight' => '0', 'guid' => 'http://purl.org/role/terms/FunctionalityTF5',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Chat',
      'description' => 'provides communication by exchanging of text messages at the real-time',
      'weight' => '0', 'guid' => 'http://purl.org/role/terms/FunctionalityTF1',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Presenting',
      'description' => 'supports presentation of materials', 'weight' => '0',
      'guid' => 'http://purl.org/role/terms/FunctionalityTF7',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Synchronous file transfer',
      'description' => 'allows the file transfer over the net',
      'weight' => '0', 'guid' => 'http://purl.org/role/terms/FunctionalityTF4',
  );
  $term["parent"] = array(
    $tids[1]
  );
  $tids[2] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  /********************************
   *  TAXONOMY: LEARNING DOMAINS   *
   ********************************/
  $vid = install_taxonomy_add_vocabulary('Learning Domains',
      array(
          'bundle' => 'bundle', 'lstool_opensocial' => 'lstool_opensocial',
          'lstool_w3c' => 'lstool_w3c',
      ),
      array(
          'name' => 'Learning Domains', 'description' => '', 'help' => '',
          'relations' => '1', 'hierarchy' => '0', 'multiple' => '1',
          'required' => '0', 'tags' => '1', 'module' => 'taxonomy',
          'weight' => '-8',
      ));

  $term = array(
    'name' => 'Curriki', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Drupal#Contributed modules', 'description' => '',
      'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'English language', 'description' => '', 'weight' => '0',
      'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Federated search', 'description' => '', 'weight' => '0',
      'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'French language', 'description' => '', 'weight' => '0',
      'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'German language', 'description' => '', 'weight' => '0',
      'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Thesis (academic document)', 'description' => '',
      'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
    'name' => 'Translation', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  /*****************************************
   *  TAXONOMY: WIDGET SPECIFICATION TAGS   *
   *****************************************/
  $vid = install_taxonomy_add_vocabulary('Widget Specification Tags',
      array(
        'widget_specification' => 'widget_specification',
      ),
      array(
          'name' => 'Widget Specification Tags',
          'description' => 'Specification tags created by users.',
          'help' => 'User tags for sorting and managing specification.',
          'relations' => '1', 'hierarchy' => '0', 'multiple' => '1',
          'required' => '0', 'tags' => '1', 'module' => 'taxonomy',
          'weight' => '-7',
      ));

  $term = array(
    'name' => 'language', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
    'name' => 'OpenSocial', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
    'name' => 'training', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
    'name' => 'vocabulary', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Vocabulary Trainer', 'description' => '', 'weight' => '0',
      'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
    'name' => 'Widget', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  /********************************
   *    TAXONOMY: FAQ CATEGORY     *
   ********************************/
  $vid = install_taxonomy_add_vocabulary('FAQ Category',
      array(
        'faq' => 'faq',
      ),
      array(
          'name' => 'FAQ Category', 'description' => '', 'help' => '',
          'relations' => '1', 'hierarchy' => '1', 'multiple' => '0',
          'required' => '1', 'tags' => '0', 'module' => 'taxonomy',
          'weight' => '0',
      ));

  $term = array(
    'name' => 'Bundles', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
    'name' => 'Reviews', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
    'name' => 'Tools', 'description' => '', 'weight' => '0', 'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  $term = array(
      'name' => 'Widget Contest', 'description' => '', 'weight' => '0',
      'guid' => '',
  );
  $term["parent"] = array(
    $tids[0]
  );
  $tids[1] = install_taxonomy_add_term($vid, $term["name"],
      $term["description"], $term);

  /********************************
   *    ROLES AND PERMISSIONS     *
   ********************************/
  $roles_map[1] = install_add_role('anonymous user');
  install_add_permissions($roles_map[1],
      array(
          0 => 'access comments', 1 => 'post comments',
          2 => 'view field_bundle_screenshots',
          3 => 'view field_bundle_short_description',
          4 => 'view field_bundle_thumbnail', 5 => 'view field_bundle_tools',
          6 => 'view field_creativity_rating',
          7 => 'view field_didactic_value_rating',
          8 => 'view field_impact_rating',
          9 => 'view field_implementation_reference',
          10 => 'view field_originality_rating', 11 => 'view field_rating',
          12 => 'view field_screenshot_mockups', 13 => 'view field_tool_file',
          14 => 'view field_tool_screenshots',
          15 => 'view field_tool_thumbnail', 16 => 'view field_use_case',
          17 => 'view field_user_experience_rating',
          18 => 'view field_widget_contest',
          19 => 'view field_widget_specification', 20 => 'use custom search',
          21 => 'create faq', 22 => 'view faq page', 23 => 'ask question',
          24 => 'view imagecache bundle_400x400',
          25 => 'view imagecache bundle_tool_explorer_50x50',
          26 => 'view imagecache bundle_tool_list_110x110',
          27 => 'view imagecache tool_400x400',
          28 => 'view imagecache widget_specification_screenshot_browser_400x400',
          29 => 'view imagecache wysiwyg_imageupload_lightbox_preset',
          30 => 'access nodes via services', 31 => 'access terms via services',
          32 => 'access content', 33 => 'search content',
          34 => 'use advanced search', 35 => 'switch theme',
          36 => 'access taxonomy images',
      ));

  $roles_map[2] = install_add_role('authenticated user');
  install_add_permissions($roles_map[2],
      array(
          0 => 'access comments', 1 => 'post comments',
          2 => 'post comments without approval',
          3 => 'edit field_bundle_screenshots',
          4 => 'edit field_bundle_short_description',
          5 => 'edit field_bundle_thumbnail', 6 => 'edit field_bundle_tools',
          7 => 'edit field_creativity_rating',
          8 => 'edit field_didactic_value_rating',
          9 => 'edit field_impact_rating',
          10 => 'edit field_implementation_reference',
          11 => 'edit field_originality_rating', 12 => 'edit field_rating',
          13 => 'edit field_screenshot_mockups', 14 => 'edit field_tool_file',
          15 => 'edit field_tool_screenshots',
          16 => 'edit field_tool_thumbnail', 17 => 'edit field_use_case',
          18 => 'edit field_user_experience_rating',
          19 => 'edit field_widget_contest',
          20 => 'edit field_widget_specification',
          21 => 'view field_bundle_screenshots',
          22 => 'view field_bundle_short_description',
          23 => 'view field_bundle_thumbnail', 24 => 'view field_bundle_tools',
          25 => 'view field_creativity_rating',
          26 => 'view field_didactic_value_rating',
          27 => 'view field_impact_rating',
          28 => 'view field_implementation_reference',
          29 => 'view field_originality_rating', 30 => 'view field_rating',
          31 => 'view field_screenshot_mockups', 32 => 'view field_tool_file',
          33 => 'view field_tool_screenshots',
          34 => 'view field_tool_thumbnail', 35 => 'view field_use_case',
          36 => 'view field_user_experience_rating',
          37 => 'view field_widget_contest',
          38 => 'view field_widget_specification', 39 => 'use custom search',
          40 => 'create faq', 41 => 'view faq page', 42 => 'ask question',
          43 => 'rate content', 44 => 'view imagecache bundle_400x400',
          45 => 'view imagecache bundle_tool_explorer_50x50',
          46 => 'view imagecache bundle_tool_list_110x110',
          47 => 'view imagecache tool_400x400',
          48 => 'view imagecache widget_specification_screenshot_browser_400x400',
          49 => 'create opensocial tools', 50 => 'delete own opensocial tools',
          51 => 'edit own opensocial tools', 52 => 'create w3c tools',
          53 => 'delete own w3c tools', 54 => 'edit own w3c tools',
          55 => 'access content', 56 => 'create bundle content',
          57 => 'create widget_specification content',
          58 => 'delete own bundle content',
          59 => 'delete own widget_specification content',
          60 => 'edit own widget_specification content',
          61 => 'search content', 62 => 'use advanced search',
          63 => 'switch theme', 64 => 'access taxonomy images',
          65 => 'change own username',
      ));

  $roles_map[3] = install_add_role('editor');
  install_add_permissions($roles_map[3],
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

  $roles_map[8] = install_add_role('manager');
  install_add_permissions($roles_map[8],
      array(
          0 => 'post comments without approval',
          1 => 'read widget contest results',
          2 => 'read widget specification reviews at node',
      ));

  $roles_map[4] = install_add_role('moderator');
  install_add_permissions($roles_map[4],
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

  $roles_map[6] = install_add_role('partner');
  install_add_permissions($roles_map[6],
      array(
          0 => 'post comments without approval',
          1 => 'publish own bundle content',
          2 => 'publish own lstool_opensocial content',
          3 => 'publish own lstool_w3c content',
          4 => 'unpublish own bundle content',
          5 => 'unpublish own lstool_opensocial content',
          6 => 'unpublish own lstool_w3c content',
      ));

  $roles_map[5] = install_add_role('reviewer');
  install_add_permissions($roles_map[5],
      array(
          0 => 'post comments without approval',
          1 => 'create widget_specification_review content',
          2 => 'delete own widget_specification_review content',
          3 => 'edit own widget_specification_review content',
          4 => 'read widget contest results',
          5 => 'read widget specification reviews at node',
      ));

  $roles_map[7] = install_add_role('services');
  install_add_permissions($roles_map[7],
      array(
          0 => 'access nodes via services', 1 => 'access terms via services',
          2 => 'get taxonomy tree',
      ));

  /********************************
   *     FILTERS AND FORMATS      *
   ********************************/
  $formats_map[1] = install_add_format('Filtered HTML', '1');
  install_add_format(
      array(
          $roles_map[1], $roles_map[2], $roles_map[3], $roles_map[8],
          $roles_map[4], $roles_map[6], $roles_map[5], $roles_map[7],
      ), $formats_map[1]);
  $formats_map[2] = install_add_format('Full HTML', '1');
  install_add_format(array(
    $roles_map[],
  ), $formats_map[2]);
  $formats_map[5] = install_add_format('WYSIWYG - All Roles', '1');
  install_add_format(
      array(
          $roles_map[1], $roles_map[2], $roles_map[3], $roles_map[8],
          $roles_map[4], $roles_map[6], $roles_map[5], $roles_map[7],
      ), $formats_map[5]);
  $formats_map[6] = install_add_format('WYSIWYG - Editor ROLE', '1');
  install_add_format(array(
    $roles_map[3],
  ), $formats_map[6]);
  install_set_filter($formats_map[1], 'filter', '0', '-9');
  install_set_filter($formats_map[1], 'recaptcha_mailhide', '0', '-8');
  install_set_filter($formats_map[1], 'filter', '1', '-7');
  install_set_filter($formats_map[1], 'filter', '2', '-6');
  install_set_filter($formats_map[1], 'wysiwyg_imageupload', '0', '10');
  install_set_filter($formats_map[2], 'filter', '2', '0');
  install_set_filter($formats_map[2], 'filter', '1', '1');
  install_set_filter($formats_map[2], 'filter', '3', '10');
  install_set_filter($formats_map[2], 'wysiwyg_imageupload', '0', '10');
  install_set_filter($formats_map[5], 'filter', '2', '-6');
  install_set_filter($formats_map[5], 'wysiwyg_imageupload', '0', '10');
  install_set_filter($formats_map[6], 'filter', '2', '-6');
  install_set_filter($formats_map[6], 'wysiwyg_imageupload', '0', '10');

  /********************************
   *            VIEWS             *
   ********************************/
  module_load_include('inc', 'views', 'includes/view');

  /********************************
   *      VIEW: BUNDLE_TOOL       *
   ********************************/
  $view = new view;
  $view->name = 'bundle_tool';
  $view->description = 'Displays all tools of a bundle';
  $view->tag = 'Bundle';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('relationships',
          array(
              'field_bundle_tools_nid' => array(
                  'label' => 'Tools', 'required' => 0, 'delta' => '-1',
                  'id' => 'field_bundle_tools_nid',
                  'table' => 'node_data_field_bundle_tools',
                  'field' => 'field_bundle_tools_nid',
                  'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('fields',
          array(
              'view_node' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'text' => '', 'exclude' => 0,
                  'id' => 'view_node', 'table' => 'node',
                  'field' => 'view_node',
                  'relationship' => 'field_bundle_tools_nid',
              ),
              'field_tool_thumbnail_fid' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'none',
                  'format' => 'bundle_tool_list_110x110_linked',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_tool_thumbnail_fid',
                  'table' => 'node_data_field_tool_thumbnail',
                  'field' => 'field_tool_thumbnail_fid',
                  'relationship' => 'field_bundle_tools_nid',
              ),
              'body' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 1,
                      'max_length' => '1000', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 1,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'body',
                  'table' => 'node_revisions', 'field' => 'body',
                  'relationship' => 'field_bundle_tools_nid',
              ),
              'title' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 1, 'exclude' => 0,
                  'id' => 'title', 'table' => 'node', 'field' => 'title',
                  'relationship' => 'field_bundle_tools_nid',
              ),
              'path' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'absolute' => 0, 'exclude' => 0,
                  'id' => 'path', 'table' => 'node', 'field' => 'path',
                  'relationship' => 'field_bundle_tools_nid',
              ),
          ));
  $handler
      ->override_option('arguments',
          array(
              'nid' => array(
                  'default_action' => 'ignore',
                  'style_plugin' => 'default_summary',
                  'style_options' => array(), 'wildcard' => 'all',
                  'wildcard_substitution' => 'All', 'title' => '',
                  'breadcrumb' => '', 'default_argument_type' => 'fixed',
                  'default_argument' => '', 'validate_type' => 'none',
                  'validate_fail' => 'not found', 'break_phrase' => 0,
                  'not' => 0, 'id' => 'nid', 'table' => 'node',
                  'field' => 'nid', 'validate_user_argument_type' => 'uid',
                  'validate_user_roles' => array(
                    2 => 0, 3 => 0, 6 => 0, 4 => 0, 7 => 0, 5 => 0,
                  ), 'me_redirect' => 0,
                  'me_validate_user_argument_type' => 'uid',
                  'me_validate_user_roles' => array(
                    2 => 0, 3 => 0, 6 => 0, 4 => 0, 7 => 0, 5 => 0,
                  ), 'relationship' => 'none',
                  'default_options_div_prefix' => '',
                  'default_taxonomy_tid_term_page' => 0,
                  'default_taxonomy_tid_node' => 0,
                  'default_taxonomy_tid_limit' => 0,
                  'default_taxonomy_tid_vids' => array(
                    2 => 0, 3 => 0, 1 => 0, 4 => 0,
                  ), 'default_argument_user' => 0,
                  'default_argument_fixed' => '', 'default_argument_php' => '',
                  'validate_argument_node_type' => array(
                      'bundle' => 0, 'lstool_opensocial' => 0,
                      'lstool_w3c' => 0, 'bundle2' => 0, 'page' => 0,
                      'widget_contest' => 0, 'widget_specification' => 0,
                      'widget_specification_review' => 0,
                  ), 'validate_argument_node_access' => 0,
                  'validate_argument_nid_type' => 'nid',
                  'validate_argument_vocabulary' => array(
                    2 => 0, 3 => 0, 1 => 0, 4 => 0,
                  ), 'validate_argument_type' => 'tid',
                  'validate_argument_transform' => 0,
                  'validate_user_restrict_roles' => 0,
                  'validate_argument_vocabulary_machine_name' => array(
                      'functionalities' => 0, 'learning_domains' => 0,
                      'tool_categories' => 0, '' => 0,
                  ), 'validate_argument_php' => '',
                  'me_validate_user_restrict_roles' => 0,
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                    'bundle' => 'bundle', 'bundle2' => 'bundle2',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'relationship' => 'none',
              ),
          ));
  $handler->override_option('access', array(
        'type' => 'none',
      ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $view->save();

  /********************************
   *       VIEW: MY_BUNDLE        *
   ********************************/
  $view = new view;
  $view->name = 'my_bundle';
  $view->description = 'A view which shows the user the status of their own bunles';
  $view->tag = 'Bundle';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('relationships',
          array(
              'votingapi_cache' => array(
                  'label' => 'Average Rating', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'vote',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
              'votingapi_cache_1' => array(
                  'label' => 'Number of Votes', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'vote',
                      'function' => 'count',
                  ), 'id' => 'votingapi_cache_1', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('fields',
          array(
              'field_bundle_thumbnail_fid' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'none',
                  'format' => 'bundle_tool_explorer_50x50_linked',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_bundle_thumbnail_fid',
                  'table' => 'node_data_field_bundle_thumbnail',
                  'field' => 'field_bundle_thumbnail_fid',
                  'relationship' => 'none',
              ),
              'title' => array(
                  'label' => 'Title',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'link_class' => '', 'alt' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'link_to_node' => 1, 'exclude' => 0, 'id' => 'title',
                  'table' => 'node', 'field' => 'title',
                  'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
              ),
              'comment_count' => array(
                  'label' => 'Comment count',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => FALSE,
                  'precision' => 0, 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'exclude' => 1, 'id' => 'comment_count',
                  'table' => 'node_comment_statistics',
                  'field' => 'comment_count', 'relationship' => 'none',
              ),
              'value' => array(
                  'label' => 'Rating',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 1, 'id' => 'value',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache',
              ),
              'new_comments' => array(
                  'label' => 'New comments',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => FALSE,
                  'precision' => 0, 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'link_to_comment' => 1, 'exclude' => 1,
                  'id' => 'new_comments', 'table' => 'node',
                  'field' => 'new_comments', 'relationship' => 'none',
              ),
              'changed' => array(
                  'label' => 'Updated date',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'date_format' => 'small',
                  'custom_date_format' => 'd. M. Y', 'exclude' => 0,
                  'id' => 'changed', 'table' => 'node', 'field' => 'changed',
                  'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'value_1' => array(
                  'label' => 'Number of Votes',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'appearance' => '', 'exclude' => 1,
                  'id' => 'value_1', 'table' => 'votingapi_cache',
                  'field' => 'value', 'relationship' => 'votingapi_cache_1',
              ),
              'status' => array(
                  'label' => 'Published',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'link_class' => '', 'alt' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'type' => 'yes-no', 'not' => 0, 'exclude' => 0,
                  'id' => 'status', 'table' => 'node', 'field' => 'status',
                  'relationship' => 'none',
              ),
              'nothing_1' => array(
                  'label' => 'Rating (# Votes)',
                  'alter' => array(
                      'text' => '[value] <div class="number-of-votes">([value_1])</div>',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'nothing_1',
                  'table' => 'views', 'field' => 'nothing',
                  'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'nothing' => array(
                  'label' => 'Comments (New)',
                  'alter' => array(
                      'text' => '[comment_count] ([new_comments])',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'nothing',
                  'table' => 'views', 'field' => 'nothing',
                  'relationship' => 'none',
              ),
              'edit_node' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'text' => '', 'exclude' => 0,
                  'id' => 'edit_node', 'table' => 'node',
                  'field' => 'edit_node', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                    'bundle' => 'bundle',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'relationship' => 'none',
              ),
              'uid_current' => array(
                  'operator' => '=', 'value' => '1', 'group' => '0',
                  'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'uid_current', 'table' => 'users',
                  'field' => 'uid_current',
                  'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('access',
          array(
            'type' => 'role', 'role' => array(
              2 => 2,
            ),
          ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $handler
      ->override_option('header',
          'Below you see the bundle you added to the store. You can edit them directly using the edit link. ');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler
      ->override_option('empty',
          '<p>You have not added any tool to the store yet. Please note the <a href="http://www.role-widgetstore.eu/faq" target="_blank">FAQs </a>before adding your tool. Currently only OpenSocial tools (<a href="http://www.opensocial.org/" target="_blank">link</a>) are supported. More tool specifications (like W3C) and tools will be added soon.</p> <p>You can also add tools where you are not the author if this is allowed by the given licence.</p><p>After you submitted a tool a member of the ROLE consortium will review your tool and either publish it or contact you because of possible improvement. You can see the status of the tool at the My tools page.</p> <p>&nbsp;</p> <p style="text-align: center;"><a class="form-submit" href="/add-new-tool" style="font-size:18px">Add a New tool</a></p>');
  $handler->override_option('empty_format', '2');
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('style_plugin', 'table');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'override' => 1, 'sticky' => 0,
              'order' => 'asc', 'summary' => '',
              'columns' => array(
                  'edit_node' => 'edit_node', 'phpcode' => 'phpcode',
                  'title' => 'title',
                  'field_contest_participation_value' => 'field_contest_participation_value',
                  'new_comments' => 'new_comments', 'changed' => 'changed',
                  'status' => 'status',
              ),
              'info' => array(
                  'edit_node' => array(
                    'separator' => '',
                  ), 'phpcode' => array(
                    'separator' => '',
                  ), 'title' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
                  'field_contest_participation_value' => array(
                    'separator' => '',
                  ), 'new_comments' => array(
                    'separator' => '',
                  ), 'changed' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'status' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
              ), 'default' => 'changed',
          ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler
      ->override_option('empty',
          '<p>You have not added any tool to the store yet. After you submitted a bundle a member of the ROLE consortium will review your tool and either publish it or contact you because of possible improvement. </p><p>&nbsp;</p><p style="text-align: center;"><a class="form-submit" style="font-size: 18px;" href="/add-new-bundle">Add a New Bundle</a></p>');
  $handler->override_option('path', 'my-content/bundles');
  $handler
      ->override_option('menu',
          array(
              'type' => 'normal', 'title' => 'Bundles', 'description' => '',
              'weight' => '0', 'name' => 'menu-my-content',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $view->save();

  /********************************
   *        VIEW: MY_TOOLS         *
   ********************************/
  $view = new view;
  $view->name = 'my_tools';
  $view->description = 'A view which shows the user the status of their own tools';
  $view->tag = 'Tool';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('relationships',
          array(
              'votingapi_cache' => array(
                  'label' => 'Average Rating', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'vote',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
              'votingapi_cache_1' => array(
                  'label' => 'Number of Votes', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'vote',
                      'function' => 'count',
                  ), 'id' => 'votingapi_cache_1', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('fields',
          array(
              'field_tool_thumbnail_fid' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'none',
                  'format' => 'thumbnail_overview_list_50x50_linked',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_tool_thumbnail_fid',
                  'table' => 'node_data_field_tool_thumbnail',
                  'field' => 'field_tool_thumbnail_fid',
                  'relationship' => 'none',
              ),
              'title' => array(
                  'label' => 'Title',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'link_class' => '', 'alt' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'link_to_node' => 1, 'exclude' => 0, 'id' => 'title',
                  'table' => 'node', 'field' => 'title',
                  'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
              ),
              'comment_count' => array(
                  'label' => 'Comment count',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => FALSE,
                  'precision' => 0, 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'exclude' => 1, 'id' => 'comment_count',
                  'table' => 'node_comment_statistics',
                  'field' => 'comment_count', 'relationship' => 'none',
              ),
              'value' => array(
                  'label' => 'Rating',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 1, 'id' => 'value',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache',
              ),
              'new_comments' => array(
                  'label' => 'New comments',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => FALSE,
                  'precision' => 0, 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'link_to_comment' => 1, 'exclude' => 1,
                  'id' => 'new_comments', 'table' => 'node',
                  'field' => 'new_comments', 'relationship' => 'none',
              ),
              'changed' => array(
                  'label' => 'Updated date',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'date_format' => 'small',
                  'custom_date_format' => 'd. M. Y', 'exclude' => 0,
                  'id' => 'changed', 'table' => 'node', 'field' => 'changed',
                  'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'value_1' => array(
                  'label' => 'Number of Votes',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'appearance' => '', 'exclude' => 1,
                  'id' => 'value_1', 'table' => 'votingapi_cache',
                  'field' => 'value', 'relationship' => 'votingapi_cache_1',
              ),
              'status' => array(
                  'label' => 'Published',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'link_class' => '', 'alt' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'type' => 'yes-no', 'not' => 0, 'exclude' => 0,
                  'id' => 'status', 'table' => 'node', 'field' => 'status',
                  'relationship' => 'none',
              ),
              'nothing_1' => array(
                  'label' => 'Rating (# Votes)',
                  'alter' => array(
                      'text' => '[value] <div class="number-of-votes">([value_1])</div>',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'nothing_1',
                  'table' => 'views', 'field' => 'nothing',
                  'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'nothing' => array(
                  'label' => 'Comments (New)',
                  'alter' => array(
                      'text' => '[comment_count] ([new_comments])',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'nothing',
                  'table' => 'views', 'field' => 'nothing',
                  'relationship' => 'none',
              ),
              'edit_node' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'text' => '', 'exclude' => 0,
                  'id' => 'edit_node', 'table' => 'node',
                  'field' => 'edit_node', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                      'lstool_opensocial' => 'lstool_opensocial',
                      'lstool_w3c' => 'lstool_w3c',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'relationship' => 'none',
              ),
              'uid_current' => array(
                  'operator' => '=', 'value' => '1', 'group' => '0',
                  'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'uid_current', 'table' => 'users',
                  'field' => 'uid_current',
                  'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('access',
          array(
            'type' => 'role', 'role' => array(
              2 => 2,
            ),
          ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $handler
      ->override_option('header',
          'Below you see the tools you added to the store. You can edit them directly using the edit link. ');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler
      ->override_option('empty',
          '<p>You have not added any tool to the store yet. Please note the <a href="http://www.role-widgetstore.eu/faq" target="_blank">FAQs </a>before adding your tool. Currently only OpenSocial tools (<a href="http://www.opensocial.org/" target="_blank">link</a>) are supported. More tool specifications (like W3C) and tools will be added soon.</p> <p>You can also add tools where you are not the author if this is allowed by the given licence.</p><p>After you submitted a tool a member of the ROLE consortium will review your tool and either publish it or contact you because of possible improvement. You can see the status of the tool at the My tools page.</p> <p>&nbsp;</p> <p style="text-align: center;"><a class="form-submit" href="/add-new-tool" style="font-size:18px">Add a New tool</a></p>');
  $handler->override_option('empty_format', '2');
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('style_plugin', 'table');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'override' => 1, 'sticky' => 0,
              'order' => 'asc', 'summary' => '',
              'columns' => array(
                  'edit_node' => 'edit_node', 'phpcode' => 'phpcode',
                  'title' => 'title',
                  'field_contest_participation_value' => 'field_contest_participation_value',
                  'new_comments' => 'new_comments', 'changed' => 'changed',
                  'status' => 'status',
              ),
              'info' => array(
                  'edit_node' => array(
                    'separator' => '',
                  ), 'phpcode' => array(
                    'separator' => '',
                  ), 'title' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
                  'field_contest_participation_value' => array(
                    'separator' => '',
                  ), 'new_comments' => array(
                    'separator' => '',
                  ), 'changed' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'status' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
              ), 'default' => 'changed',
          ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler
      ->override_option('empty',
          '<p>You have not added any tool to the store yet. Currently only OpenSocia and W3Cl tools and&nbsp;are supported. More tool specifications and tool types will be added soon.</p><p>You can also add tools where you are not the author if this is allowed by the given licence.</p><p>After you submitted a tool a member of the ROLE consortium will review your tool and either publish it or contact you because of possible improvement. You can see the status of the tool at the My tools page.</p><p>&nbsp;</p><p style="text-align: center;"><a class="form-submit" style="font-size: 18px;" href="/add-new-tool">Add a New tool</a></p>');
  $handler->override_option('path', 'my-content/tools');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $view->save();

  /************************************
   *  VIEW: MY_WIDGET_SPECIFICATIONS   *
   ************************************/
  $view = new view;
  $view->name = 'my_widget_specifications';
  $view->description = 'List of my widget specifications';
  $view->tag = 'Widget Contest';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('fields',
          array(
              'title' => array(
                  'label' => 'Title',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 1, 'exclude' => 0,
                  'id' => 'title', 'table' => 'node', 'field' => 'title',
                  'relationship' => 'none',
              ),
              'tid' => array(
                  'label' => 'Tags',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => 'No tags', 'hide_empty' => 0,
                  'empty_zero' => 0, 'hide_alter_empty' => 0,
                  'type' => 'separator', 'separator' => ', ',
                  'link_to_taxonomy' => 0, 'limit' => 0,
                  'vids' => array(
                    2 => 0, 3 => 0, 1 => 0, 36 => 0,
                  ), 'exclude' => 0, 'id' => 'tid', 'table' => 'term_node',
                  'field' => 'tid', 'relationship' => 'none',
              ),
              'field_widget_contest_nid' => array(
                  'label' => 'Widget Contest',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'widget', 'format' => 'default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_widget_contest_nid',
                  'table' => 'node_data_field_widget_contest',
                  'field' => 'field_widget_contest_nid',
                  'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
              ),
              'changed' => array(
                  'label' => 'Updated',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'date_format' => 'small',
                  'custom_date_format' => '', 'exclude' => 0,
                  'id' => 'changed', 'table' => 'node', 'field' => 'changed',
                  'relationship' => 'none',
              ),
              'state' => array(
                  'label' => 'Workflow',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'state',
                  'table' => 'workflow_states', 'field' => 'state',
                  'relationship' => 'none',
              ),
              'edit_node' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'text' => '', 'exclude' => 0,
                  'id' => 'edit_node', 'table' => 'node',
                  'field' => 'edit_node', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                    'widget_specification' => 'widget_specification',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'relationship' => 'none',
              ),
              'uid_current' => array(
                  'operator' => '=', 'value' => '1', 'group' => '0',
                  'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'uid_current', 'table' => 'users',
                  'field' => 'uid_current', 'relationship' => 'none',
              ),
          ));
  $handler->override_option('access', array(
        'type' => 'none',
      ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $handler
      ->override_option('header',
          'Below you see the specifications you contributed to a contest. You can edit them directly using the edit link.');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler
      ->override_option('empty',
          '<p>You have not added any Specification to the store yet. See the contest page for more information:</br></br> <a href="/contest/third-role-widget-contest">ROLE Widget Contest</a>');
  $handler->override_option('empty_format', '2');
  $handler->override_option('style_plugin', 'table');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'override' => 1, 'sticky' => 0,
              'order' => 'asc', 'summary' => '',
              'columns' => array(
                  'value' => 'value', 'value_1' => 'value_1',
                  'value_2' => 'value_2', 'value_3' => 'value_3',
                  'value_4' => 'value_4', 'value_5' => 'value_5',
              ),
              'info' => array(
                  'value' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'value_1' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'value_2' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'value_3' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'value_4' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'value_5' => array(
                    'sortable' => 0, 'separator' => '',
                  ),
              ), 'default' => '-1',
          ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler
      ->override_option('empty',
          '<p>You have not added any specification to the current contest yet. For more information go to the current contest page</p> <p>&nbsp;</p><p style="text-align: center;"><a class="form-submit" style="font-size: 18px;" href="/contest/third-role-widget-contest">Go to the contest page</a></p> ');
  $handler->override_option('path', 'my-content/contest-contributions');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $view->save();

  /*******************************************
   *  VIEW: MY_WIDGET_SPECIFICATION_REVIEWS   *
   *******************************************/
  $view = new view;
  $view->name = 'my_widget_specification_reviews';
  $view->description = 'List of my widget specification reviews';
  $view->tag = 'Widget Contest';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('fields',
          array(
              'field_widget_specification_nid' => array(
                  'label' => 'Reviewed Spec.',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'custom', 'format' => 'default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_widget_specification_nid',
                  'table' => 'node_data_field_widget_specification',
                  'field' => 'field_widget_specification_nid',
                  'relationship' => 'none',
              ),
              'title' => array(
                  'label' => 'Review Title',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 1,
                      'max_length' => '25', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 1, 'exclude' => 0,
                  'id' => 'title', 'table' => 'node', 'field' => 'title',
                  'relationship' => 'none',
              ),
              'created' => array(
                  'label' => 'Created',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'date_format' => 'small',
                  'custom_date_format' => '', 'exclude' => 0,
                  'id' => 'created', 'table' => 'node', 'field' => 'created',
                  'relationship' => 'none',
              ),
              'field_originality_rating_rating' => array(
                  'label' => 'Originality',
                  'alter' => array(
                      'alter_text' => 0,
                      'text' => '[field_originality_rating_rating]%',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'widget', 'format' => 'default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_originality_rating_rating',
                  'table' => 'node_data_field_originality_rating',
                  'field' => 'field_originality_rating_rating',
                  'relationship' => 'none',
              ),
              'field_creativity_rating_rating' => array(
                  'label' => 'Creativity',
                  'alter' => array(
                      'alter_text' => 0,
                      'text' => '[field_creativity_rating_rating]%',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'widget', 'format' => 'default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_creativity_rating_rating',
                  'table' => 'node_data_field_creativity_rating',
                  'field' => 'field_creativity_rating_rating',
                  'relationship' => 'none',
              ),
              'field_didactic_value_rating_rating' => array(
                  'label' => 'Didactic Value',
                  'alter' => array(
                      'alter_text' => 0,
                      'text' => '[field_didactic_value_rating_rating]%',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'widget', 'format' => 'default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0,
                  'id' => 'field_didactic_value_rating_rating',
                  'table' => 'node_data_field_didactic_value_rating',
                  'field' => 'field_didactic_value_rating_rating',
                  'relationship' => 'none',
              ),
              'field_user_experience_rating_rating' => array(
                  'label' => 'User Exp. & UI',
                  'alter' => array(
                      'alter_text' => 0,
                      'text' => '[field_user_experience_rating_rating]%',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'custom', 'format' => 'default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0,
                  'id' => 'field_user_experience_rating_rating',
                  'table' => 'node_data_field_user_experience_rating',
                  'field' => 'field_user_experience_rating_rating',
                  'relationship' => 'none',
              ),
              'field_impact_rating_rating' => array(
                  'label' => 'Potential impact',
                  'alter' => array(
                      'alter_text' => 0,
                      'text' => '[field_impact_rating_rating]%',
                      'make_link' => 0, 'path' => '', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'custom', 'format' => 'default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_impact_rating_rating',
                  'table' => 'node_data_field_impact_rating',
                  'field' => 'field_impact_rating_rating',
                  'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('arguments',
          array(
              'field_widget_specification_nid' => array(
                  'default_action' => 'ignore',
                  'style_plugin' => 'default_summary',
                  'style_options' => array(), 'wildcard' => 'all',
                  'wildcard_substitution' => 'All', 'title' => '',
                  'breadcrumb' => '', 'default_argument_type' => 'fixed',
                  'default_argument' => '', 'validate_type' => 'none',
                  'validate_fail' => 'not found', 'break_phrase' => 0,
                  'not' => 0, 'id' => 'field_widget_specification_nid',
                  'table' => 'node_data_field_widget_specification',
                  'field' => 'field_widget_specification_nid',
                  'validate_user_argument_type' => 'uid',
                  'validate_user_roles' => array(
                    2 => 0, 13 => 0, 3 => 0, 11 => 0, 12 => 0, 10 => 0, 5 => 0,
                  ), 'me_redirect' => 0,
                  'me_validate_user_argument_type' => 'uid',
                  'me_validate_user_roles' => array(
                    2 => 0, 13 => 0, 3 => 0, 11 => 0, 12 => 0, 10 => 0, 5 => 0,
                  ), 'relationship' => 'none',
                  'default_options_div_prefix' => '',
                  'default_taxonomy_tid_term_page' => 0,
                  'default_taxonomy_tid_node' => 0,
                  'default_taxonomy_tid_limit' => 0,
                  'default_taxonomy_tid_vids' => array(
                    31 => 0, 2 => 0, 3 => 0, 32 => 0, 33 => 0, 1 => 0, 36 => 0,
                  ), 'default_argument_user' => 0,
                  'default_argument_fixed' => '', 'default_argument_php' => '',
                  'validate_argument_node_type' => array(
                      'bundle' => 0, 'lstool_opensocial' => 0,
                      'lstool_w3c' => 0, 'contest' => 0, 'idea' => 0,
                      'page' => 0, 'review' => 0, 'widget_contest' => 0,
                      'widget_specification' => 0,
                      'widget_specification_review' => 0,
                  ), 'validate_argument_node_access' => 0,
                  'validate_argument_nid_type' => 'nid',
                  'validate_argument_vocabulary' => array(
                    31 => 0, 2 => 0, 3 => 0, 32 => 0, 33 => 0, 1 => 0, 36 => 0,
                  ), 'validate_argument_type' => 'tid',
                  'validate_argument_transform' => 0,
                  'validate_user_restrict_roles' => 0,
                  'validate_argument_php' => '',
                  'me_validate_user_restrict_roles' => 0,
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                      'widget_specification_review' => 'widget_specification_review',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'relationship' => 'none',
              ),
              'uid_current' => array(
                  'operator' => '=', 'value' => '1', 'group' => '0',
                  'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'uid_current', 'table' => 'users',
                  'field' => 'uid_current', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('access',
          array(
              'type' => 'perm',
              'perm' => 'create widget_specification_review content',
          ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $handler
      ->override_option('header',
          'Below you see the reviews you created for specification which were submitted to a contest.');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler
      ->override_option('empty',
          'There is no review available for this widget specification. You be the first one who submit a review!');
  $handler->override_option('empty_format', '2');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'override' => 1, 'sticky' => 0,
              'order' => 'desc', 'summary' => '',
              'columns' => array(
                  'field_widget_specification_nid' => 'field_widget_specification_nid',
                  'title' => 'title', 'created' => 'created',
                  'field_originality_rating_rating' => 'field_originality_rating_rating',
                  'field_creativity_rating_rating' => 'field_creativity_rating_rating',
                  'field_didactic_value_rating_rating' => 'field_didactic_value_rating_rating',
                  'field_user_experience_rating_rating' => 'field_user_experience_rating_rating',
                  'field_impact_rating_rating' => 'field_impact_rating_rating',
              ),
              'info' => array(
                  'field_widget_specification_nid' => array(
                    'separator' => '',
                  ), 'title' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'created' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
                  'field_originality_rating_rating' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
                  'field_creativity_rating_rating' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
                  'field_didactic_value_rating_rating' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
                  'field_user_experience_rating_rating' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
                  'field_impact_rating_rating' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
              ), 'default' => 'created',
          ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler
      ->override_option('empty',
          '<p>You have not added any review for a widget specification.</p><h2 style="text-align: center;"><a href="contest-submissions" target="_self">Go to the submitted specifications page</a></h2>');
  $handler->override_option('path', 'my-content/specification-reviews');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $view->save();

  /******************************************
   *  VIEW: NODEREFERENCE_EXPLORER_DEFAULT   *
   ******************************************/
  $view = new view;
  $view->name = 'nodereference_explorer_default';
  $view->description = 'Generic nodereference explorer view including three default displays (table, thumbnails and list)';
  $view->tag = 'nodereference_explorer';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('relationships',
          array(
              'votingapi_cache' => array(
                  'label' => 'Vote results', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'vote',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache', 'table' => 'node',
                  'field' => 'votingapi_cache',
                  'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('fields',
          array(
              'nid' => array(
                  'label' => 'Node Id',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0, 'exclude' => 1,
                  'id' => 'nid', 'table' => 'node', 'field' => 'nid',
                  'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'field_tool_thumbnail_fid' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'none',
                  'format' => 'bundle_tool_explorer_50x50_default',
                  'multiple' => array(
                      'group' => TRUE, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => FALSE,
                  ), 'exclude' => 0, 'id' => 'field_tool_thumbnail_fid',
                  'table' => 'node_data_field_tool_thumbnail',
                  'field' => 'field_tool_thumbnail_fid',
                  'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'title' => array(
                  'label' => 'Title', 'id' => 'title', 'table' => 'node',
                  'field' => 'title',
              ),
              'type' => array(
                  'label' => 'Type', 'id' => 'type', 'table' => 'node',
                  'field' => 'type',
              ),
              'value' => array(
                  'label' => 'Rating',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache',
              ),
              'name' => array(
                  'label' => 'User',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'link_class' => '', 'alt' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'link_to_user' => 0, 'overwrite_anonymous' => 0,
                  'anonymous_text' => '', 'exclude' => 0, 'id' => 'name',
                  'table' => 'users', 'field' => 'name',
                  'relationship' => 'none',
              ),
              'tid' => array(
                  'label' => 'Categories',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'type' => 'separator',
                  'separator' => ', ', 'link_to_taxonomy' => 0, 'limit' => 1,
                  'vids' => array(
                    1 => 1, 2 => 0, 3 => 0,
                  ), 'exclude' => 0, 'id' => 'tid', 'table' => 'term_node',
                  'field' => 'tid',
                  'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('sorts',
          array(
              'changed' => array(
                  'order' => 'DESC', 'granularity' => 'second',
                  'id' => 'changed', 'table' => 'node', 'field' => 'changed',
                  'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('arguments',
          array(
              'type' => array(
                  'default_action' => 'ignore',
                  'style_plugin' => 'default_summary',
                  'style_options' => array(), 'wildcard' => 'all',
                  'wildcard_substitution' => 'All', 'title' => '',
                  'breadcrumb' => '', 'default_argument_type' => 'fixed',
                  'default_argument' => '', 'validate_type' => 'none',
                  'validate_fail' => 'not found', 'id' => 'type',
                  'table' => 'node', 'field' => 'type',
                  'validate_user_argument_type' => 'uid',
                  'validate_user_roles' => array(), 'relationship' => 'none',
                  'default_options_div_prefix' => '',
                  'default_argument_user' => 0, 'default_argument_fixed' => '',
                  'default_argument_php' => '',
                  'validate_argument_node_type' => array(),
                  'validate_argument_node_access' => 0,
                  'validate_argument_nid_type' => 'nid',
                  'validate_argument_vocabulary' => array(),
                  'validate_argument_type' => 'tid',
                  'validate_argument_transform' => 0,
                  'validate_user_restrict_roles' => 0,
                  'validate_argument_php' => '',
              ),
          ));
  $handler->override_option('access', array(
        'type' => 'none',
      ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('use_pager', '1');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'table_selectable');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'override' => 1, 'sticky' => 1,
              'order' => 'asc', 'summary' => '',
              'columns' => array(
                  'nid' => 'nid',
                  'field_tool_thumbnail_fid' => 'field_tool_thumbnail_fid',
                  'title' => 'title', 'type' => 'type', 'value' => 'value',
                  'name' => 'name', 'tid' => 'tid',
              ),
              'info' => array(
                  'nid' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'field_tool_thumbnail_fid' => array(
                    'separator' => '',
                  ), 'title' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'type' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'value' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'name' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'tid' => array(
                    'separator' => '',
                  ),
              ), 'default' => 'title',
          ));
  $handler->override_option('exposed_block', TRUE);
  $handler = $view->new_display('page', 'All Tools', 'table');
  $handler
      ->override_option('filters',
          array(
              'title' => array(
                  'operator' => 'contains', 'value' => '', 'group' => '0',
                  'exposed' => TRUE,
                  'expose' => array(
                      'use_operator' => 0, 'operator' => 'title_op',
                      'identifier' => 'title', 'label' => 'Title',
                      'optional' => 1, 'remember' => 0,
                  ), 'case' => 0, 'id' => 'title', 'table' => 'node',
                  'field' => 'title',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
              'body' => array(
                  'operator' => 'contains', 'value' => '', 'group' => '0',
                  'exposed' => TRUE,
                  'expose' => array(
                      'use_operator' => 0, 'operator' => 'body_op',
                      'identifier' => 'body', 'label' => 'Body',
                      'optional' => 1, 'remember' => 0,
                  ), 'case' => 0, 'id' => 'body', 'table' => 'node_revisions',
                  'field' => 'body', 'relationship' => 'none',
                  'override' => array(
                    'button' => 'Use default',
                  ),
              ),
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                      'lstool_opensocial' => 'lstool_opensocial',
                      'lstool_w3c' => 'lstool_w3c',
                  ), 'group' => '0', 'exposed' => TRUE,
                  'expose' => array(
                      'use_operator' => 0, 'operator' => 'type_op',
                      'identifier' => 'type', 'label' => 'Tool Type',
                      'optional' => 1, 'single' => 1, 'remember' => 0,
                      'reduce' => 1,
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
              'name' => array(
                  'operator' => 'contains', 'value' => '', 'group' => '0',
                  'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '', 'optional' => FALSE,
                  ), 'case' => 0, 'id' => 'name', 'table' => 'term_data',
                  'field' => 'name',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('path', 'nodereference_explorer/menu_display_table');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler = $view->new_display('page', 'Preview', 'preview');
  $handler
      ->override_option('arguments',
          array(
              'nid' => array(
                  'default_action' => 'empty',
                  'style_plugin' => 'default_summary',
                  'style_options' => array(), 'wildcard' => 'all',
                  'wildcard_substitution' => 'All', 'title' => '',
                  'breadcrumb' => '', 'default_argument_type' => 'fixed',
                  'default_argument' => '', 'validate_type' => 'none',
                  'validate_fail' => 'not found', 'break_phrase' => 0,
                  'not' => 0, 'id' => 'nid', 'table' => 'node',
                  'field' => 'nid', 'validate_user_argument_type' => 'uid',
                  'validate_user_roles' => array(), 'relationship' => 'none',
                  'default_options_div_prefix' => '',
                  'default_argument_user' => 0, 'default_argument_fixed' => '',
                  'default_argument_php' => '',
                  'validate_argument_node_type' => array(),
                  'validate_argument_node_access' => 0,
                  'validate_argument_nid_type' => 'nid',
                  'validate_argument_vocabulary' => array(),
                  'validate_argument_type' => 'tid',
                  'validate_argument_transform' => 0,
                  'validate_user_restrict_roles' => 0,
                  'validate_argument_php' => '',
                  'override' => array(
                    'button' => 'Use default',
                  ),
              ),
          ));
  $handler->override_option('style_plugin', 'table');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'override' => 1, 'sticky' => 0,
              'order' => 'asc', 'summary' => '',
              'columns' => array(
                  'nid' => 'nid',
                  'field_tool_thumbnail_fid' => 'field_tool_thumbnail_fid',
                  'title' => 'title', 'type' => 'type', 'changed' => 'changed',
                  'name' => 'name',
              ),
              'info' => array(
                  'nid' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'field_tool_thumbnail_fid' => array(
                    'separator' => '',
                  ), 'title' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'type' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'changed' => array(
                    'sortable' => 0, 'separator' => '',
                  ), 'name' => array(
                    'sortable' => 0, 'separator' => '',
                  ),
              ), 'default' => '-1',
          ));
  $handler->override_option('row_plugin', 'node');
  $handler
      ->override_option('row_options',
          array(
              'relationship' => 'none', 'build_mode' => 'teaser', 'links' => 1,
              'comments' => 0,
          ));
  $handler
      ->override_option('path', 'nodereference_explorer/menu_display_preview');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler = $view->new_display('page', 'My Tools', 'page_1');
  $handler
      ->override_option('filters',
          array(
              'title' => array(
                  'operator' => 'contains', 'value' => '', 'group' => '0',
                  'exposed' => TRUE,
                  'expose' => array(
                      'use_operator' => 0, 'operator' => 'title_op',
                      'identifier' => 'title', 'label' => 'Title',
                      'optional' => 1, 'remember' => 0,
                  ), 'case' => 0, 'id' => 'title', 'table' => 'node',
                  'field' => 'title',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
              'body' => array(
                  'operator' => 'contains', 'value' => '', 'group' => '0',
                  'exposed' => TRUE,
                  'expose' => array(
                      'use_operator' => 0, 'operator' => 'body_op',
                      'identifier' => 'body', 'label' => 'Body',
                      'optional' => 1, 'remember' => 0,
                  ), 'case' => 0, 'id' => 'body', 'table' => 'node_revisions',
                  'field' => 'body', 'relationship' => 'none',
                  'override' => array(
                    'button' => 'Use default',
                  ),
              ),
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                      'lstool_opensocial' => 'lstool_opensocial',
                      'lstool_w3c' => 'lstool_w3c',
                  ), 'group' => '0', 'exposed' => TRUE,
                  'expose' => array(
                      'use_operator' => 0, 'operator' => 'type_op',
                      'identifier' => 'type', 'label' => 'Tool Type',
                      'optional' => 1, 'single' => 1, 'remember' => 0,
                      'reduce' => 1,
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
              'name' => array(
                  'operator' => 'contains', 'value' => '', 'group' => '0',
                  'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '', 'optional' => FALSE,
                  ), 'case' => 0, 'id' => 'name', 'table' => 'term_data',
                  'field' => 'name',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
              'uid_current' => array(
                  'operator' => '=', 'value' => '1', 'group' => '0',
                  'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'uid_current', 'table' => 'users',
                  'field' => 'uid_current',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('path', 'nodereference_explorer/menu_display_table');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $view->save();

  /********************************
   *    VIEW: TOOL_CATEGORIES     *
   ********************************/
  $view = new view;
  $view->name = 'tool_categories';
  $view->description = '';
  $view->tag = 'Tool';
  $view->base_table = 'term_data';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('fields',
          array(
              'name' => array(
                  'label' => 'Term',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => 'tool-category/[name]', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_taxonomy' => 1,
                  'exclude' => 0, 'id' => 'name', 'table' => 'term_data',
                  'field' => 'name', 'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'tid' => array(
                  'label' => 'Term image',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => 'tool-category/[name]', 'absolute' => 0,
                      'link_class' => '', 'alt' => '', 'rel' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'imagecache_preset' => '',
                  'link_to_taxonomy' => 1, 'exclude' => 0, 'id' => 'tid',
                  'table' => 'term_image', 'field' => 'tid',
                  'relationship' => 'none',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'description' => array(
                  'label' => 'Term description',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'link_class' => '', 'alt' => '',
                      'prefix' => '', 'suffix' => '', 'target' => '',
                      'help' => '', 'trim' => 0, 'max_length' => '',
                      'word_boundary' => 1, 'ellipsis' => 1, 'html' => 0,
                      'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'exclude' => 0, 'id' => 'description',
                  'table' => 'term_data', 'field' => 'description',
                  'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('sorts',
          array(
              'weight' => array(
                  'order' => 'ASC', 'id' => 'weight', 'table' => 'term_data',
                  'field' => 'weight', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'vid' => array(
                  'operator' => 'in', 'value' => array(
                    1 => '1',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'vid', 'table' => 'term_data', 'field' => 'vid',
                  'relationship' => 'none',
              ),
          ));
  $handler->override_option('access', array(
        'type' => 'none',
      ));
  $handler
      ->override_option('cache',
          array(
              'type' => 'time', 'results_lifespan' => '518400',
              'output_lifespan' => '518400',
          ));
  $handler->override_option('title', 'Tool Categories');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'grid');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'columns' => '3', 'alignment' => 'horizontal',
              'fill_single_line' => 1,
          ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'tool_categories');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $view->save();

  /********************************
   *    VIEW: TOOL_SCREENSHOTS     *
   ********************************/
  $view = new view;
  $view->name = 'tool_screenshots';
  $view->description = 'Shows the screenshots of a tool';
  $view->tag = 'Tools';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('fields',
          array(
              'field_tool_screenshots_fid' => array(
                  'label' => '',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'label_type' => 'none',
                  'format' => 'imagefield__lightbox2__tool_400x400__original',
                  'multiple' => array(
                      'group' => 0, 'multiple_number' => '',
                      'multiple_from' => '', 'multiple_reversed' => 0,
                  ), 'exclude' => 0, 'id' => 'field_tool_screenshots_fid',
                  'table' => 'node_data_field_tool_screenshots',
                  'field' => 'field_tool_screenshots_fid',
                  'relationship' => 'none',
              ),
              'field_tool_screenshots_data' => array(
                  'label' => 'Tool Screenshots (field_tool_screenshots) - data',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0,
                  'data_key' => 'description', 'exclude' => 0,
                  'id' => 'field_tool_screenshots_data',
                  'table' => 'node_data_field_tool_screenshots',
                  'field' => 'field_tool_screenshots_data',
                  'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('arguments',
          array(
              'nid' => array(
                  'default_action' => 'not found',
                  'style_plugin' => 'default_summary',
                  'style_options' => array(), 'wildcard' => 'all',
                  'wildcard_substitution' => 'All', 'title' => '',
                  'breadcrumb' => '', 'default_argument_type' => 'fixed',
                  'default_argument' => '', 'validate_type' => 'none',
                  'validate_fail' => 'not found', 'break_phrase' => 0,
                  'not' => 0, 'id' => 'nid', 'table' => 'node',
                  'field' => 'nid', 'validate_user_argument_type' => 'uid',
                  'validate_user_roles' => array(
                    2 => 0, 6 => 0, 3 => 0, 7 => 0, 4 => 0, 9 => 0, 5 => 0,
                  ), 'me_redirect' => 0,
                  'me_validate_user_argument_type' => 'uid',
                  'me_validate_user_roles' => array(
                    2 => 0, 6 => 0, 3 => 0, 7 => 0, 4 => 0, 9 => 0, 5 => 0,
                  ), 'override' => array(
                    'button' => 'Override',
                  ), 'relationship' => 'none',
                  'default_options_div_prefix' => '',
                  'default_taxonomy_tid_term_page' => 0,
                  'default_taxonomy_tid_node' => 0,
                  'default_taxonomy_tid_limit' => 0,
                  'default_taxonomy_tid_vids' => array(
                    4 => 0, 2 => 0, 3 => 0, 5 => 0, 6 => 0, 1 => 0,
                  ), 'default_argument_user' => 0,
                  'default_argument_fixed' => '', 'default_argument_php' => '',
                  'validate_argument_node_type' => array(
                      'lstool_opensocial' => 0, 'lstool_w3c' => 0,
                      'contest' => 0, 'idea' => 0, 'page' => 0, 'review' => 0,
                  ), 'validate_argument_node_access' => 0,
                  'validate_argument_nid_type' => 'nid',
                  'validate_argument_vocabulary' => array(
                    4 => 0, 2 => 0, 3 => 0, 5 => 0, 6 => 0, 1 => 0,
                  ), 'validate_argument_type' => 'tid',
                  'validate_argument_transform' => 0,
                  'validate_user_restrict_roles' => 0,
                  'validate_argument_php' => '',
                  'me_validate_user_restrict_roles' => 0,
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                      'lstool_opensocial' => 'lstool_opensocial',
                      'lstool_w3c' => 'lstool_w3c',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'relationship' => 'none',
              ),
          ));
  $handler->override_option('access', array(
        'type' => 'none',
      ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $handler->override_option('style_plugin', 'jcarousel');
  $handler
      ->override_option('style_options',
          array(
              'wrap' => '0', 'skin' => '', 'visible' => '1', 'scroll' => '1',
              'auto' => '0', 'navigation' => 'after', 'ajax' => 0,
              'animation' => '', 'easing' => '', 'start' => '1',
              'autoPause' => 1, 'vertical' => 0,
          ));
  $view->save();

  /*************************************
   *  VIEW: WIDGET_SPECIFICATION_LIST   *
   *************************************/
  $view = new view;
  $view->name = 'widget_specification_list';
  $view->description = 'A list of all widget specifications for the given contest';
  $view->tag = 'Widget Contest';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler
      ->override_option('relationships',
          array(
              'votingapi_cache' => array(
                  'label' => 'Originality', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'Originality',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
              'votingapi_cache_1' => array(
                  'label' => 'Didactic Value', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'DidacticValue',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache_1', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
              'votingapi_cache_2' => array(
                  'label' => 'Creativity', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'Creativity',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache_2', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
              'votingapi_cache_3' => array(
                  'label' => 'Potential Impact', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'PotentialImpact',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache_3', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
              'votingapi_cache_4' => array(
                  'label' => 'User Expirience and Interface', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => 'percent', 'tag' => 'UserExperience',
                      'function' => 'average',
                  ), 'id' => 'votingapi_cache_4', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
              'votingapi_cache_5' => array(
                  'label' => 'Number of Votes', 'required' => 0,
                  'votingapi' => array(
                      'value_type' => '', 'tag' => 'Creativity',
                      'function' => 'count',
                  ), 'id' => 'votingapi_cache_5', 'table' => 'node',
                  'field' => 'votingapi_cache', 'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('fields',
          array(
              'nid' => array(
                  'label' => 'Nid',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0, 'exclude' => 1,
                  'id' => 'nid', 'table' => 'node', 'field' => 'nid',
                  'relationship' => 'none',
              ),
              'title' => array(
                  'label' => 'Title',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 1, 'exclude' => 0,
                  'id' => 'title', 'table' => 'node', 'field' => 'title',
                  'relationship' => 'none',
              ),
              'value' => array(
                  'label' => 'Originality',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache',
              ),
              'value_1' => array(
                  'label' => 'Didactic Value',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_1',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_1',
              ),
              'value_2' => array(
                  'label' => 'Creativity',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_2',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_2',
              ),
              'value_3' => array(
                  'label' => 'Potential Impact',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_3',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_3',
              ),
              'value_4' => array(
                  'label' => 'User Exp. and UI',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_4',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_4',
              ),
              'value_5' => array(
                  'label' => '# Votes',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'appearance' => '', 'exclude' => 0,
                  'id' => 'value_5', 'table' => 'votingapi_cache',
                  'field' => 'value', 'relationship' => 'votingapi_cache_5',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'nothing_1' => array(
                  'label' => '',
                  'alter' => array(
                      'text' => 'Reviews', 'make_link' => 1,
                      'path' => 'node/[nid]/specification_reviews',
                      'absolute' => 0, 'link_class' => '', 'alt' => 'Reviews',
                      'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'nothing_1',
                  'table' => 'views', 'field' => 'nothing',
                  'relationship' => 'none',
              ),
              'sid' => array(
                'id' => 'sid', 'table' => 'workflow_node', 'field' => 'sid',
              ),
          ));
  $handler
      ->override_option('arguments',
          array(
              'field_widget_contest_nid' => array(
                  'default_action' => 'ignore',
                  'style_plugin' => 'default_summary',
                  'style_options' => array(), 'wildcard' => 'all',
                  'wildcard_substitution' => 'All',
                  'title' => 'WIdget Contest Reference', 'breadcrumb' => '',
                  'default_argument_type' => 'fixed', 'default_argument' => '',
                  'validate_type' => 'none', 'validate_fail' => 'not found',
                  'break_phrase' => 0, 'not' => 0,
                  'id' => 'field_widget_contest_nid',
                  'table' => 'node_data_field_widget_contest',
                  'field' => 'field_widget_contest_nid',
                  'validate_user_argument_type' => 'uid',
                  'validate_user_roles' => array(
                    2 => 0, 13 => 0, 3 => 0, 11 => 0, 12 => 0, 10 => 0, 5 => 0,
                  ), 'me_redirect' => 0,
                  'me_validate_user_argument_type' => 'uid',
                  'me_validate_user_roles' => array(
                    2 => 0, 13 => 0, 3 => 0, 11 => 0, 12 => 0, 10 => 0, 5 => 0,
                  ), 'relationship' => 'none',
                  'default_options_div_prefix' => '',
                  'default_taxonomy_tid_term_page' => 0,
                  'default_taxonomy_tid_node' => 0,
                  'default_taxonomy_tid_limit' => 0,
                  'default_taxonomy_tid_vids' => array(
                    2 => 0, 3 => 0, 1 => 0, 36 => 0,
                  ), 'default_argument_user' => 0,
                  'default_argument_fixed' => '', 'default_argument_php' => '',
                  'validate_argument_node_type' => array(
                      'bundle' => 0, 'lstool_opensocial' => 0,
                      'lstool_w3c' => 0, 'page' => 0, 'widget_contest' => 0,
                      'widget_specification' => 0,
                      'widget_specification_review' => 0,
                  ), 'validate_argument_node_access' => 0,
                  'validate_argument_nid_type' => 'nid',
                  'validate_argument_vocabulary' => array(
                    2 => 0, 3 => 0, 1 => 0, 36 => 0,
                  ), 'validate_argument_type' => 'tid',
                  'validate_argument_transform' => 0,
                  'validate_user_restrict_roles' => 0,
                  'validate_argument_php' => '',
                  'me_validate_user_restrict_roles' => 0,
              ),
          ));
  $handler
      ->override_option('filters',
          array(
              'type' => array(
                  'operator' => 'in',
                  'value' => array(
                    'widget_specification' => 'widget_specification',
                  ), 'group' => '0', 'exposed' => FALSE,
                  'expose' => array(
                    'operator' => FALSE, 'label' => '',
                  ), 'id' => 'type', 'table' => 'node', 'field' => 'type',
                  'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('access',
          array(
            'type' => 'perm', 'perm' => 'read widget contest results',
          ));
  $handler->override_option('cache', array(
        'type' => 'none',
      ));
  $handler->override_option('title', 'Contest Submissions');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty_format', '3');
  $handler->override_option('style_plugin', 'table');
  $handler
      ->override_option('style_options',
          array(
              'grouping' => '', 'override' => 1, 'sticky' => 0,
              'order' => 'asc', 'summary' => '',
              'columns' => array(
                  'value' => 'value', 'value_1' => 'value_1',
                  'value_2' => 'value_2', 'value_3' => 'value_3',
                  'value_4' => 'value_4', 'value_5' => 'value_5',
              ),
              'info' => array(
                  'value' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'value_1' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'value_2' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'value_3' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'value_4' => array(
                    'sortable' => 1, 'separator' => '',
                  ), 'value_5' => array(
                    'sortable' => 1, 'separator' => '',
                  ),
              ), 'default' => '-1',
          ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler
      ->override_option('fields',
          array(
              'nid' => array(
                  'label' => 'Nid',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 0, 'exclude' => 1,
                  'id' => 'nid', 'table' => 'node', 'field' => 'nid',
                  'relationship' => 'none',
              ),
              'title' => array(
                  'label' => 'Title',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'link_to_node' => 1, 'exclude' => 0,
                  'id' => 'title', 'table' => 'node', 'field' => 'title',
                  'relationship' => 'none',
              ),
              'value' => array(
                  'label' => 'Originality',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache',
              ),
              'value_1' => array(
                  'label' => 'Didactic Value',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_1',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_1',
              ),
              'value_2' => array(
                  'label' => 'Creativity',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_2',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_2',
              ),
              'value_3' => array(
                  'label' => 'Potential Impact',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_3',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_3',
              ),
              'value_4' => array(
                  'label' => 'User Exp. and UI',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '',
                  'appearance' => 'fivestar_views_value_display_handler',
                  'exclude' => 0, 'id' => 'value_4',
                  'table' => 'votingapi_cache', 'field' => 'value',
                  'relationship' => 'votingapi_cache_4',
              ),
              'value_5' => array(
                  'label' => '# Votes',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '0', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 0, 'set_precision' => 0,
                  'precision' => '0', 'decimal' => '.', 'separator' => ',',
                  'format_plural' => 0, 'format_plural_singular' => '1',
                  'format_plural_plural' => '@count', 'prefix' => '',
                  'suffix' => '', 'appearance' => '', 'exclude' => 0,
                  'id' => 'value_5', 'table' => 'votingapi_cache',
                  'field' => 'value', 'relationship' => 'votingapi_cache_5',
                  'override' => array(
                    'button' => 'Override',
                  ),
              ),
              'state' => array(
                  'label' => 'Status',
                  'alter' => array(
                      'alter_text' => 0, 'text' => '', 'make_link' => 0,
                      'path' => '', 'absolute' => 0, 'link_class' => '',
                      'alt' => '', 'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'state',
                  'table' => 'workflow_states', 'field' => 'state',
                  'override' => array(
                    'button' => 'Use default',
                  ), 'relationship' => 'none',
              ),
              'nothing_1' => array(
                  'label' => '',
                  'alter' => array(
                      'text' => 'Reviews', 'make_link' => 1,
                      'path' => 'node/[nid]/specification_reviews',
                      'absolute' => 0, 'link_class' => '', 'alt' => 'Reviews',
                      'rel' => '', 'prefix' => '', 'suffix' => '',
                      'target' => '', 'help' => '', 'trim' => 0,
                      'max_length' => '', 'word_boundary' => 1,
                      'ellipsis' => 1, 'html' => 0, 'strip_tags' => 0,
                  ), 'empty' => '', 'hide_empty' => 0, 'empty_zero' => 0,
                  'hide_alter_empty' => 1, 'exclude' => 0, 'id' => 'nothing_1',
                  'table' => 'views', 'field' => 'nothing',
                  'relationship' => 'none',
              ),
          ));
  $handler
      ->override_option('header',
          '<p>Below you see the submissions for the current contest. You can go to the review page of the different submissions or create a new review (If you have the necessary rights).</p>');
  $handler
      ->override_option('empty',
          '<p>There are no submission to the current content yet.</p>');
  $handler->override_option('path', 'contest-submissions');
  $handler
      ->override_option('menu',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $handler
      ->override_option('tab_options',
          array(
              'type' => 'none', 'title' => '', 'description' => '',
              'weight' => 0, 'name' => 'navigation',
          ));
  $view->save();

  /********************************
   *            PANELS             *
   ********************************/

  /********************************
   *            PANELS             *
   ********************************/
  $display = new panels_display;
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL, 'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass;
  $pane->pid = 'new-1';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
      'nid' => '1', 'links' => 1, 'leave_node_title' => 0, 'identifier' => '',
      'build_mode' => 'full', 'link_node_title' => 0, 'override_title' => 1,
      'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-1'] = $pane;
  $display->panels['center'][0] = 'new-1';
  $pane = new stdClass;
  $pane->pid = 'new-2';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
      'nid' => '93', 'links' => 1, 'leave_node_title' => 0, 'identifier' => '',
      'build_mode' => 'full', 'link_node_title' => 0, 'override_title' => 1,
      'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $display->content['new-2'] = $pane;
  $display->panels['center'][1] = 'new-2';
  $pane = new stdClass;
  $pane->pid = 'new-3';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'tool_coverflow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
      'override_pager_settings' => 0, 'use_pager' => 0,
      'nodes_per_page' => '10', 'pager_id' => '', 'offset' => '0',
      'more_link' => 0, 'feed_icons' => 0, 'panel_args' => 0,
      'link_to_view' => 0, 'args' => '', 'url' => '', 'display' => 'default',
      'override_title' => 0, 'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $display->content['new-3'] = $pane;
  $display->panels['center'][2] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $x = panels_save_display($display);

  /********************************
   *         PAGE MANAGER          *
   ********************************/
  db_query("TRUNCATE TABLE {%s}", 'page_manager_handlers');
  db_query(
      "INSERT INTO {page_manager_handlers} (did, name, task, subtask, handler, weight, conf) VALUES ('2', 'page_home_panel_context', 'page', 'home', 'panel_context', '0', 'a:8:{s:5:\"title\";s:5:\"Panel\";s:9:\"no_blocks\";i:0;s:8:\"pipeline\";s:8:\"standard\";s:6:\"css_id\";s:0:\"\";s:3:\"css\";s:0:\"\";s:8:\"contexts\";a:0:{}s:13:\"relationships\";a:0:{}s:3:\"did\";s:1:\"2\";}')");
  db_query("TRUNCATE TABLE {%s}", 'page_manager_pages');
  db_query(
      "INSERT INTO {page_manager_pages} (pid, name, task, admin_title, admin_description, path, access, menu, arguments, conf) VALUES ('2', 'home', 'page', 'Home ', '', 'homepage', 'a:0:{}', 'a:0:{}', 'a:0:{}', 'a:0:{}')");
  db_query("TRUNCATE TABLE {%s}", 'page_manager_weights');

  /********************************
   *            MENUS             *
   ********************************/
  $mlids = array();
  /********************************
   *       MENU: CATALOGUES        *
   ********************************/
  $menu_name = install_menu_create_menu('Catalogues', 'catalogues',
      'The available catalouges.');

  $mlids["menu-catalogues_kids"] = 0;
  $mlids["menu-catalogues_kids_0"] = install_menu_create_menu_item(
      'tool_categories', 'Tools', 0, $menu_name,
      $mlids["menu-catalogues_kids"], '-50', 'menu', '0', FALSE, '0', '1', '0');
  $mlids["menu-catalogues_kids_1"] = install_menu_create_menu_item('bundles',
      'Bundles', '', $menu_name, $mlids["menu-catalogues_kids"], '-49', 'menu',
      '0', FALSE, '0', '1', '0');
  $mlids["menu-catalogues_kids_2"] = install_menu_create_menu_item('node/87',
      'Widget Contest', '', $menu_name, $mlids["menu-catalogues_kids"], '-48',
      'menu', '0', FALSE, '0', '1', '0');
  /********************************
   *       MENU: MY CONTENT        *
   ********************************/
  $menu_name = install_menu_create_menu('My Content', 'my-content',
      'The own content of a user');

  $mlids["menu-my-content_kids"] = 0;
  $mlids["menu-my-content_kids_0"] = install_menu_create_menu_item(
      'my-content/tools', 'My Tools', 0, $menu_name,
      $mlids["menu-my-content_kids"], '-50', 'menu', '0', FALSE, '0', '1', '0');
  $mlids["menu-my-content_kids_1"] = install_menu_create_menu_item(
      'my-content/contest-contributions', 'My Contest Contributions', 0,
      $menu_name, $mlids["menu-my-content_kids"], '-48', 'menu', '0', FALSE,
      '0', '1', '0');
  $mlids["menu-my-content_kids_2"] = install_menu_create_menu_item(
      'my-content/specification-reviews', 'My Contest Reviews', 0, $menu_name,
      $mlids["menu-my-content_kids"], '-47', 'menu', '0', FALSE, '0', '1', '0');
  $mlids["menu-my-content_kids_3"] = install_menu_create_menu_item(
      'my-content/bundles', 'My Bundles', '', $menu_name,
      $mlids["menu-my-content_kids"], '-49', 'system', '0', FALSE, '0', '1',
      '0');
  /********************************
   *    MENU: TOOL CATEGORIES     *
   ********************************/
  $menu_name = install_menu_create_menu('Tool Categories', 'tool-categories',
      'Displays the categories of the tools.');

  $mlids["menu-tool-categories_kids"] = 0;
  $mlids["menu-tool-categories_kids_0"] = install_menu_create_menu_item(
      'taxonomy/term/1', 'Plan & Organise',
      'These tools facilitate the planning and organisation of your learning activities, process and resources as well as the setting of your learning goals.',
      $menu_name, $mlids["menu-tool-categories_kids"], '0', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_1"] = install_menu_create_menu_item(
      'taxonomy/term/2', 'Search & get Recommendation',
      'These tools enhance the searching process for your learning resources and/ or give recommendation for suitable tools, widgets or bundles.',
      $menu_name, $mlids["menu-tool-categories_kids"], '1', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_2"] = install_menu_create_menu_item(
      'taxonomy/term/3', 'Collaborate & Communicate',
      'These tools provide the possibility to collaborate and communicate with other participants of your learning process.',
      $menu_name, $mlids["menu-tool-categories_kids"], '2', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_3"] = install_menu_create_menu_item(
      'taxonomy/term/4', 'Explore & View',
      'These tools provide access to domain specific learning content. Content may be static or interactive.',
      $menu_name, $mlids["menu-tool-categories_kids"], '3', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_4"] = install_menu_create_menu_item(
      'taxonomy/term/5', 'Train & Test',
      'These tools provide support for knowledge acquisition as well as training and testing of skills.',
      $menu_name, $mlids["menu-tool-categories_kids"], '4', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_5"] = install_menu_create_menu_item(
      'taxonomy/term/6', 'Create & Manipulate',
      'These tools facilitate the creation and manipulation of content in your learning environment.',
      $menu_name, $mlids["menu-tool-categories_kids"], '5', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_6"] = install_menu_create_menu_item(
      'taxonomy/term/7', 'Reflect & Evaluate',
      'These tools facilitate the reflection of your learning process, -progress, -result and -environment.',
      $menu_name, $mlids["menu-tool-categories_kids"], '6', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_7"] = install_menu_create_menu_item(
      'taxonomy/term/8', 'Demo Widgets',
      'Example widgets and bundles which provide demo functionality.',
      $menu_name, $mlids["menu-tool-categories_kids"], '7', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  $mlids["menu-tool-categories_kids_8"] = install_menu_create_menu_item(
      'taxonomy/term/203', 'Developer Tools',
      'Tools which are supporting developers by creating new tools',
      $menu_name, $mlids["menu-tool-categories_kids"], '8', 'taxonomy_menu',
      '0', FALSE, '1', '0', '0');
  /********************************
   *       MENU: NAVIGATION        *
   ********************************/
  $menu_name = install_menu_create_menu('Navigation', 'navigation',
      'The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.');

  $mlids["navigation_kids"] = 0;
  $mlids["navigation_kids_0"] = install_menu_create_menu_item('batch', '', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_1"] = install_menu_create_menu_item('node',
      'Content', 0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_2"] = install_menu_create_menu_item('logout',
      'Log out', 0, $menu_name, $mlids["navigation_kids"], '10', 'system', '0',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_3"] = install_menu_create_menu_item('blocks404',
      'Page not found', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_4"] = install_menu_create_menu_item('rss.xml',
      'RSS feed', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_5"] = install_menu_create_menu_item('user',
      'User account', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_6"] = install_menu_create_menu_item(
      'admin_menu/flush-cache', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_7"] = install_menu_create_menu_item(
      'admin_menu/toggle-modules', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_8"] = install_menu_create_menu_item(
      'content/js_add_more', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_9"] = install_menu_create_menu_item('node/%', '', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_10"] = install_menu_create_menu_item(
      'filefield/progress', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_11"] = install_menu_create_menu_item('filter/tips',
      'Compose tips', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_12"] = install_menu_create_menu_item(
      'fivestar/vote', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_13"] = install_menu_create_menu_item(
      'comment/delete', 'Delete comment', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_14"] = install_menu_create_menu_item('comment/edit',
      'Edit comment', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_15"] = install_menu_create_menu_item('system/files',
      'File download', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_16"] = install_menu_create_menu_item(
      'user/autocomplete', 'User autocomplete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_17"] = install_menu_create_menu_item('user/%',
      'My account', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_17_0"] = install_menu_create_menu_item(
      'user/%/delete', 'Delete', 0, $menu_name, $mlids["navigation_kids_17"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_18"] = install_menu_create_menu_item(
      'ctools/autocomplete/node', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_19"] = install_menu_create_menu_item(
      'fivestar/preview/node', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_20"] = install_menu_create_menu_item(
      'fivestar/preview/color', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_21"] = install_menu_create_menu_item(
      'search/node/%', 'Search', 0, $menu_name, $mlids["navigation_kids"],
      '-10', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_22"] = install_menu_create_menu_item(
      'node/%/delete', 'Delete', 0, $menu_name, $mlids["navigation_kids"], '1',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_23"] = install_menu_create_menu_item(
      'comment/reply/%', 'Reply to comment', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_24"] = install_menu_create_menu_item(
      'ctools/context/ajax/add', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_25"] = install_menu_create_menu_item(
      'ctools/context/ajax/delete', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_26"] = install_menu_create_menu_item(
      'ctools/context/ajax/configure', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_27"] = install_menu_create_menu_item(
      'ctools/context/ajax/access/add', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_28"] = install_menu_create_menu_item(
      'ctools/context/ajax/access/delete', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_29"] = install_menu_create_menu_item(
      'ctools/context/ajax/access/configure', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_30"] = install_menu_create_menu_item(
      'user/reset/%/%/%', 'Reset password', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_31"] = install_menu_create_menu_item(
      'filefield/ahah/%/%/%', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_32"] = install_menu_create_menu_item(
      'node/%/revisions/%/delete', 'Delete earlier revision', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_33"] = install_menu_create_menu_item(
      'node/%/revisions/%/revert', 'Revert to earlier revision', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_34"] = install_menu_create_menu_item(
      'node/%/revisions/%/view', 'Revisions', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_35"] = install_menu_create_menu_item(
      'admin/build/menu-customize/%/delete', 'Delete menu', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_36"] = install_menu_create_menu_item('search',
      'Search', 0, $menu_name, $mlids["navigation_kids"], '0', 'system', '1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_37"] = install_menu_create_menu_item('profile',
      'User list', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '1', TRUE, '0', '0', '0');
  $mlids["navigation_kids_37_0"] = install_menu_create_menu_item(
      'profile/autocomplete', 'Profile autocomplete', 0, $menu_name,
      $mlids["navigation_kids_37"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_38"] = install_menu_create_menu_item('upload/js', '',
      0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_39"] = install_menu_create_menu_item(
      'taxonomy/autocomplete', 'Autocomplete taxonomy', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_40"] = install_menu_create_menu_item('views/ajax',
      'Views', 'Ajax callback for view loading.', $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_41"] = install_menu_create_menu_item(
      'user/login/thickbox', 'Login', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_42"] = install_menu_create_menu_item(
      'taxonomy/term/%', 'Taxonomy term', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_43"] = install_menu_create_menu_item(
      'admin/content/node-type/page/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_44"] = install_menu_create_menu_item(
      'rdf_taxonomy_import', 'On this date', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_45"] = install_menu_create_menu_item('panels/ajax',
      '', 0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_46"] = install_menu_create_menu_item(
      'admin/rules/rules/%/add', 'Add', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_47"] = install_menu_create_menu_item(
      'admin/rules/rules/%/clone', 'Clone rule', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_48"] = install_menu_create_menu_item(
      'admin/rules/rule_sets/%/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_49"] = install_menu_create_menu_item(
      'admin/rules/rules/%/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_50"] = install_menu_create_menu_item(
      'admin/rules/rule_sets/%/revert', 'Revert', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_51"] = install_menu_create_menu_item(
      'admin/rules/rules/%/revert', 'Revert', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_52"] = install_menu_create_menu_item(
      'admin/rules/rules/%/delete/%', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_53"] = install_menu_create_menu_item(
      'admin/rules/rules/%/edit/%', 'Edit', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_54"] = install_menu_create_menu_item('homepage', '',
      0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_55"] = install_menu_create_menu_item(
      'autoload/flush-cache', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_56"] = install_menu_create_menu_item(
      'admin/build/services/list/%/clone', 'Clone', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_57"] = install_menu_create_menu_item(
      'admin/build/services/list/%/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_58"] = install_menu_create_menu_item(
      'admin/build/services/list/%/disable', 'Disable', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_59"] = install_menu_create_menu_item(
      'admin/build/services/list/%/enable', 'Enable', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_60"] = install_menu_create_menu_item(
      'admin/build/services/list/%/revert', 'Revert', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_61"] = install_menu_create_menu_item('rest',
      'Services endpoint', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_62"] = install_menu_create_menu_item(
      'apachesolr_autocomplete', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_63"] = install_menu_create_menu_item(
      'bundle-imageslideshow', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_64"] = install_menu_create_menu_item(
      'admin/content/node-type/page/groups/%', 'Edit group', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_65"] = install_menu_create_menu_item(
      'admin/content/node-type/page/groups/%/remove', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_66"] = install_menu_create_menu_item(
      'tool_categories', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_67"] = install_menu_create_menu_item(
      'tool-category', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_68"] = install_menu_create_menu_item('coverflow', '',
      0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_69"] = install_menu_create_menu_item(
      'my-content/tools', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_70"] = install_menu_create_menu_item(
      'jcarousel/ajax/views', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_71"] = install_menu_create_menu_item(
      'nodereference_explorer', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_71_0"] = install_menu_create_menu_item(
      'nodereference_explorer/preview_displays', '', 0, $menu_name,
      $mlids["navigation_kids_71"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_71_1"] = install_menu_create_menu_item(
      'nodereference_explorer/browse', 'Browse', 0, $menu_name,
      $mlids["navigation_kids_71"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_71_2"] = install_menu_create_menu_item(
      'nodereference_explorer/create', 'Create', 0, $menu_name,
      $mlids["navigation_kids_71"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_71_3"] = install_menu_create_menu_item(
      'nodereference_explorer/preview', 'Preview', 0, $menu_name,
      $mlids["navigation_kids_71"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_71_4"] = install_menu_create_menu_item(
      'nodereference_explorer/menu_display_preview', '', 0, $menu_name,
      $mlids["navigation_kids_71"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_71_5"] = install_menu_create_menu_item(
      'nodereference_explorer/menu_display_table', '', 0, $menu_name,
      $mlids["navigation_kids_71"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_72"] = install_menu_create_menu_item(
      'nodereference/autocomplete', 'Nodereference autocomplete', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_73"] = install_menu_create_menu_item(
      'system/files/imagecache', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_74"] = install_menu_create_menu_item(
      'sites/default/files/imagecache', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_75"] = install_menu_create_menu_item(
      'admin/build/imagecache/%/delete', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_76"] = install_menu_create_menu_item(
      'admin/build/imagecache/%/export', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_77"] = install_menu_create_menu_item(
      'admin/build/imagecache/%/flush', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_78"] = install_menu_create_menu_item(
      'admin/build/imagecache/%/override', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_79"] = install_menu_create_menu_item(
      'admin/build/imagecache/%/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_80"] = install_menu_create_menu_item(
      'admin/build/imagecache/%/add/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_81"] = install_menu_create_menu_item(
      'admin/build/imagecache/%/%/delete', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_82"] = install_menu_create_menu_item('lstool',
      'Create LSTOOL', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '0', FALSE, '0', '0', '0');
  $mlids["navigation_kids_83"] = install_menu_create_menu_item('gadgets/%', '',
      0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_84"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-w3c/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_85"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-opensocial/delete', 'Delete', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_86"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-opensocial/groups/%', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_87"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-w3c/groups/%', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_88"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-opensocial/groups/%/remove',
      'Edit group', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_89"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-w3c/groups/%/remove', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_90"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-opensocial/fields/field_rating/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_91"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-opensocial/fields/field_tool_screenshots/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_92"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-opensocial/fields/field_tool_thumbnail/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_93"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-w3c/fields/field_tool_file/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_94"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-w3c/fields/field_tool_screenshots/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_95"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-w3c/fields/field_tool_thumbnail/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_96"] = install_menu_create_menu_item(
      'contact/lightbox2', 'Contact', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_97"] = install_menu_create_menu_item(
      'system/lightbox2/filter-xss', 'Filter XSS', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_98"] = install_menu_create_menu_item(
      'user/login/lightbox2', 'Login', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_99"] = install_menu_create_menu_item(
      'taxonomy_manager/autocomplete', 'Taxonomy Manager Autocomplete', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_100"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/double-tree/edit', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_101"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/termdata/edit', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_102"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_103"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/groups/%', 'Edit group', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_104"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/groups/%/remove', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_105"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/fields/field_bundle_screenshots/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_106"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/fields/field_bundle_short_description/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_107"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/fields/field_bundle_thumbnail/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_108"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/fields/field_bundle_tools/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_109"] = install_menu_create_menu_item('bundles', '',
      0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_110"] = install_menu_create_menu_item(
      'widget-specification-reviews', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_111"] = install_menu_create_menu_item(
      'contest-submissions', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_112"] = install_menu_create_menu_item(
      'idea-imageslideshow', '', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_113"] = install_menu_create_menu_item('workflow',
      'Workflow summary', 0, $menu_name, $mlids["navigation_kids"], '0',
      'system', '0', FALSE, '0', '0', '0');
  $mlids["navigation_kids_114"] = install_menu_create_menu_item(
      'my-content/specification-reviews', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_115"] = install_menu_create_menu_item(
      'my-content/contest-contributions', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_116"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-contest/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_117"] = install_menu_create_menu_item(
      'admin/build/workflow/state/delete', 'Delete State', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_118"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-contest/groups/%', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_119"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-contest/groups/%/remove', 'Edit group',
      0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_120"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification/delete', 'Delete', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_121"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification/groups/%', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_122"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification/groups/%/remove',
      'Edit group', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_123"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification/fields/field_implementation_reference/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_124"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification/fields/field_screenshot_mockups/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_125"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification/fields/field_use_case/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_126"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification/fields/field_widget_contest/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_127"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/delete', 'Delete',
      0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_128"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/groups/%',
      'Edit group', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_129"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/groups/%/remove',
      'Edit group', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_130"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/fields/field_creativity_rating/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_131"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/fields/field_didactic_value_rating/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_132"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/fields/field_impact_rating/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_133"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/fields/field_originality_rating/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_134"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/fields/field_user_experience_rating/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_135"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review/fields/field_widget_specification/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_136"] = install_menu_create_menu_item(
      'admin/build/panels/layouts/list/%/clone', 'Clone', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_137"] = install_menu_create_menu_item(
      'admin/build/panels/layouts/list/%/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_138"] = install_menu_create_menu_item(
      'admin/build/panels/layouts/list/%/disable', 'Disable', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_139"] = install_menu_create_menu_item(
      'admin/build/panels/layouts/list/%/enable', 'Enable', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_140"] = install_menu_create_menu_item(
      'admin/build/panels/layouts/list/%/revert', 'Revert', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_141"] = install_menu_create_menu_item('wysiwyg/%',
      '', 0, $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_142"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle/fields/field_use_case/remove',
      'Remove field', 0, $menu_name, $mlids["navigation_kids"], '0', 'system',
      '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_143"] = install_menu_create_menu_item(
      'views_ui_basic', 'Edit basic settings', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_144"] = install_menu_create_menu_item(
      'wysiwyg_imageupload/list', '', 0, $menu_name, $mlids["navigation_kids"],
      '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_145"] = install_menu_create_menu_item(
      'wysiwyg_imageupload/edit/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_146"] = install_menu_create_menu_item(
      'wysiwyg_imageupload/upload/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_147"] = install_menu_create_menu_item(
      'wysiwyg_imageupload/reuse/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_148"] = install_menu_create_menu_item(
      'ajax/wysiwyg_imageupload_browser/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_149"] = install_menu_create_menu_item(
      'ajax/wysiwyg_imgupl/render_wysiwyg/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_150"] = install_menu_create_menu_item(
      'ajax/wysiwyg_imgupl/render_wysiwyg_images/%', '', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_151"] = install_menu_create_menu_item('faq_ask',
      'Ask a question', 0, $menu_name, $mlids["navigation_kids"], '1',
      'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_151_0"] = install_menu_create_menu_item(
      'faq_ask/unanswered', 'List more unanswered questions', 0, $menu_name,
      $mlids["navigation_kids_151"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_151_1"] = install_menu_create_menu_item('faq_ask/%',
      '', 0, $menu_name, $mlids["navigation_kids_151"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_151_2"] = install_menu_create_menu_item(
      'faq_ask/edit/%', 'Edit a question', 0, $menu_name,
      $mlids["navigation_kids_151"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_151_3"] = install_menu_create_menu_item(
      'faq_ask/answer/%', 'Answer a question', 0, $menu_name,
      $mlids["navigation_kids_151"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_152"] = install_menu_create_menu_item('faq',
      'Frequently Asked Questions', 0, $menu_name, $mlids["navigation_kids"],
      '1', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_152_0"] = install_menu_create_menu_item('faq/%',
      'Frequently Asked Questions', 0, $menu_name,
      $mlids["navigation_kids_152"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_153"] = install_menu_create_menu_item(
      'admin/content/node-type/faq/delete', 'Delete', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_154"] = install_menu_create_menu_item(
      'admin/content/node-type/faq/groups/%', 'Edit group', 0, $menu_name,
      $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_155"] = install_menu_create_menu_item(
      'admin/content/node-type/faq/groups/%/remove', 'Edit group', 0,
      $menu_name, $mlids["navigation_kids"], '0', 'system', '-1', FALSE, '0',
      '0', '0');
  $mlids["navigation_kids_156"] = install_menu_create_menu_item('admin',
      'Administer', 0, $menu_name, $mlids["navigation_kids"], '9', 'system',
      '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_0"] = install_menu_create_menu_item(
      'admin/compact', 'Compact mode', 0, $menu_name,
      $mlids["navigation_kids_156"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_1"] = install_menu_create_menu_item(
      'admin/views/ajax/autocomplete/user', '', 0, $menu_name,
      $mlids["navigation_kids_156"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_2"] = install_menu_create_menu_item(
      'admin/views/ajax/autocomplete/tag', '', 0, $menu_name,
      $mlids["navigation_kids_156"], '0', 'system', '-1', FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_3"] = install_menu_create_menu_item(
      'admin/content', 'Content management', 'Manage your site\'s content.',
      $menu_name, $mlids["navigation_kids_156"], '-10', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_3_0"] = install_menu_create_menu_item(
      'admin/content/comment', 'Comments',
      'List and edit site comments and the comment moderation queue.',
      $menu_name, $mlids["navigation_kids_156_3"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_3_1"] = install_menu_create_menu_item(
      'admin/content/node', 'Content',
      'View, edit, and delete your site\'s content.', $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_2"] = install_menu_create_menu_item(
      'admin/content/types', 'Content types',
      'Manage posts by content type, including default status, front page promotion, etc.',
      $menu_name, $mlids["navigation_kids_156_3"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_3_3"] = install_menu_create_menu_item(
      'admin/content/node-settings', 'Post settings',
      'Control posting behavior, such as teaser length, requiring previews before posting, and the number of posts on the front page.',
      $menu_name, $mlids["navigation_kids_156_3"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_3_3_0"] = install_menu_create_menu_item(
      'admin/content/node-settings/rebuild', 'Rebuild permissions', 0,
      $menu_name, $mlids["navigation_kids_156_3_3"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_3_4"] = install_menu_create_menu_item(
      'admin/content/rss-publishing', 'RSS publishing',
      'Configure the number of items per feed and whether feeds should be titles/teasers/full-text.',
      $menu_name, $mlids["navigation_kids_156_3"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_3_5"] = install_menu_create_menu_item(
      'admin/content/import', 'Node Export: Import',
      'Import nodes that were exported with <em>Node Export</em>.', $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_6"] = install_menu_create_menu_item(
      'admin/content/node-type/page', 'Page', 0, $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_7"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-opensocial', 'OpenSocial', 0, $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_8"] = install_menu_create_menu_item(
      'admin/content/node-type/lstool-w3c', 'W3C', 0, $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_9"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager', 'Taxonomy Manager',
      'Administer vocabularies with the Taxonomy Manager', $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_3_9_0"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/export', '', 0, $menu_name,
      $mlids["navigation_kids_156_3_9"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_9_1"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/childform', '', 0, $menu_name,
      $mlids["navigation_kids_156_3_9"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_9_2"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/siblingsform', '', 0, $menu_name,
      $mlids["navigation_kids_156_3_9"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_9_3"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/termdata', '', 0, $menu_name,
      $mlids["navigation_kids_156_3_9"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_9_4"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/double-tree', 'Taxonomy Manager', 0,
      $menu_name, $mlids["navigation_kids_156_3_9"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_3_9_5"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/voc', 'Taxonomy Manager', 0, $menu_name,
      $mlids["navigation_kids_156_3_9"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_9_6"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/weight', '', 0, $menu_name,
      $mlids["navigation_kids_156_3_9"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_9_7"] = install_menu_create_menu_item(
      'admin/content/taxonomy_manager/toolbar/form', '', 0, $menu_name,
      $mlids["navigation_kids_156_3_9"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_10"] = install_menu_create_menu_item(
      'admin/content/node-type/bundle', 'Bundle', 0, $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_11"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-contest', 'Widget Contest', 0,
      $menu_name, $mlids["navigation_kids_156_3"], '0', 'system', '-1', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_3_12"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification', 'Widget Specification',
      0, $menu_name, $mlids["navigation_kids_156_3"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_3_13"] = install_menu_create_menu_item(
      'admin/content/node-type/widget-specification-review',
      'Widget Specification Review', 0, $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_14"] = install_menu_create_menu_item(
      'admin/content/views_ui_basic', 'Edit views', 0, $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_15"] = install_menu_create_menu_item(
      'admin/content/node-type/faq', 'FAQ', 0, $menu_name,
      $mlids["navigation_kids_156_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_16"] = install_menu_create_menu_item(
      'admin/content/taxonomy', 'Taxonomy',
      'Manage tagging, categorization, and classification of your content.',
      $menu_name, $mlids["navigation_kids_156_3"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_3_16_0"] = install_menu_create_menu_item(
      'admin/content/taxonomy/%', 'List terms', 0, $menu_name,
      $mlids["navigation_kids_156_3_16"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_16_1"] = install_menu_create_menu_item(
      'admin/content/taxonomy/edit/term', 'Edit term', 0, $menu_name,
      $mlids["navigation_kids_156_3_16"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_3_16_2"] = install_menu_create_menu_item(
      'admin/content/taxonomy/edit/vocabulary/%', 'Edit vocabulary', 0,
      $menu_name, $mlids["navigation_kids_156_3_16"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_3_16_3"] = install_menu_create_menu_item(
      'admin/content/taxonomy/import/rdf_taxonomy_import',
      'RDF Taxonomy Import', 0, $menu_name, $mlids["navigation_kids_156_3_16"],
      '0', 'system', '0', FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_4"] = install_menu_create_menu_item(
      'admin/reports', 'Reports',
      'View reports from system logs and other status information.',
      $menu_name, $mlids["navigation_kids_156"], '5', 'system', '0', TRUE, '0',
      '0', '0');
  $mlids["navigation_kids_156_4_0"] = install_menu_create_menu_item(
      'admin/reports/status', 'Status report',
      'Get a status report about your site\'s operation and any detected problems.',
      $menu_name, $mlids["navigation_kids_156_4"], '10', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_4_0_0"] = install_menu_create_menu_item(
      'admin/reports/status/php', 'PHP', 0, $menu_name,
      $mlids["navigation_kids_156_4_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_0_1"] = install_menu_create_menu_item(
      'admin/reports/status/run-cron', 'Run cron', 0, $menu_name,
      $mlids["navigation_kids_156_4_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_0_2"] = install_menu_create_menu_item(
      'admin/reports/status/sql', 'SQL', 0, $menu_name,
      $mlids["navigation_kids_156_4_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_1"] = install_menu_create_menu_item(
      'admin/reports/updates', 'Available updates',
      'Get a status report about available updates for your installed modules and themes.',
      $menu_name, $mlids["navigation_kids_156_4"], '10', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_4_1_0"] = install_menu_create_menu_item(
      'admin/reports/updates/check', 'Manual update check', 0, $menu_name,
      $mlids["navigation_kids_156_4_1"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_2"] = install_menu_create_menu_item(
      'admin/reports/search', 'Top search phrases',
      'View most popular search phrases.', $menu_name,
      $mlids["navigation_kids_156_4"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_3"] = install_menu_create_menu_item(
      'admin/reports/apachesolr', 'Apache Solr search index', 0, $menu_name,
      $mlids["navigation_kids_156_4"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_4_3_0"] = install_menu_create_menu_item(
      'admin/reports/apachesolr/conf/%', 'Configuration file', 0, $menu_name,
      $mlids["navigation_kids_156_4_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_4"] = install_menu_create_menu_item(
      'admin/reports/dblog', 'Recent log entries',
      'View events that have recently been logged.', $menu_name,
      $mlids["navigation_kids_156_4"], '-1', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_5"] = install_menu_create_menu_item(
      'admin/reports/access-denied', 'Top \'access denied\' errors',
      'View \'access denied\' errors (403s).', $menu_name,
      $mlids["navigation_kids_156_4"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_6"] = install_menu_create_menu_item(
      'admin/reports/page-not-found', 'Top \'page not found\' errors',
      'View \'page not found\' errors (404s).', $menu_name,
      $mlids["navigation_kids_156_4"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_4_7"] = install_menu_create_menu_item(
      'admin/reports/event/%', 'Details', 0, $menu_name,
      $mlids["navigation_kids_156_4"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5"] = install_menu_create_menu_item(
      'admin/build', 'Site building', 'Control how your site looks and feels.',
      $menu_name, $mlids["navigation_kids_156"], '-10', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_0"] = install_menu_create_menu_item(
      'admin/build/block', 'Blocks',
      'Configure what block content appears in your site\'s sidebars and other regions.',
      $menu_name, $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_0_0"] = install_menu_create_menu_item(
      'admin/build/block/configure', 'Configure block', 0, $menu_name,
      $mlids["navigation_kids_156_5_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_0_1"] = install_menu_create_menu_item(
      'admin/build/block/delete', 'Delete block', 0, $menu_name,
      $mlids["navigation_kids_156_5_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_0_2"] = install_menu_create_menu_item(
      'admin/build/block/list/js', 'JavaScript List Form', 0, $menu_name,
      $mlids["navigation_kids_156_5_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_1"] = install_menu_create_menu_item(
      'admin/build/modules', 'Modules',
      'Enable or disable add-on modules for your site.', $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_5_1_0"] = install_menu_create_menu_item(
      'admin/build/modules/list/confirm', 'List', 0, $menu_name,
      $mlids["navigation_kids_156_5_1"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_1_1"] = install_menu_create_menu_item(
      'admin/build/modules/uninstall/confirm', 'Uninstall', 0, $menu_name,
      $mlids["navigation_kids_156_5_1"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_2"] = install_menu_create_menu_item(
      'admin/build/themes', 'Themes',
      'Change which theme your site uses or allows users to set.', $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_3"] = install_menu_create_menu_item(
      'admin/build/menu-customize/%', 'Customize menu', 0, $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_4"] = install_menu_create_menu_item(
      'admin/build/path', 'URL aliases',
      'Change your site\'s URL paths by aliasing them.', $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_5_4_0"] = install_menu_create_menu_item(
      'admin/build/path/delete', 'Delete alias', 0, $menu_name,
      $mlids["navigation_kids_156_5_4"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_4_1"] = install_menu_create_menu_item(
      'admin/build/path/edit', 'Edit alias', 0, $menu_name,
      $mlids["navigation_kids_156_5_4"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_5"] = install_menu_create_menu_item(
      'admin/build/panels', 'Panels',
      'Get a bird\'s eye view of items related to Panels.', $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_5_5_0"] = install_menu_create_menu_item(
      'admin/build/panels/layouts/list/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_6"] = install_menu_create_menu_item(
      'admin/build/pages', 'Pages',
      'Add, edit and remove overridden system pages and user defined pages from the system.',
      $menu_name, $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_6_0"] = install_menu_create_menu_item(
      'admin/build/pages/argument', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_6"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_6_1"] = install_menu_create_menu_item(
      'admin/build/pages/edit/%', 'Edit', 0, $menu_name,
      $mlids["navigation_kids_156_5_6"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_6_2"] = install_menu_create_menu_item(
      'admin/build/pages/wizard/%', 'Wizard', 0, $menu_name,
      $mlids["navigation_kids_156_5_6"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_6_3"] = install_menu_create_menu_item(
      'admin/build/pages/%/operation/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_6"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_6_4"] = install_menu_create_menu_item(
      'admin/build/pages/%/enable/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_6"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_6_5"] = install_menu_create_menu_item(
      'admin/build/pages/%/disable/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_6"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_7"] = install_menu_create_menu_item(
      'admin/build/services', 'Services', 'Manage Services', $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_5_7_0"] = install_menu_create_menu_item(
      'admin/build/services/list/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_7"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8"] = install_menu_create_menu_item(
      'admin/build/views', 'Views',
      'Views are customized lists of content on your system; they are highly configurable and give you control over how lists of content are presented.',
      $menu_name, $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_8_0"] = install_menu_create_menu_item(
      'admin/build/views/export/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_1"] = install_menu_create_menu_item(
      'admin/build/views/break-lock/%', 'Delete view', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_2"] = install_menu_create_menu_item(
      'admin/build/views/delete/%', 'Delete view', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_3"] = install_menu_create_menu_item(
      'admin/build/views/clone/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_4"] = install_menu_create_menu_item(
      'admin/build/views/disable/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_5"] = install_menu_create_menu_item(
      'admin/build/views/enable/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_6"] = install_menu_create_menu_item(
      'admin/build/views/%/analyze/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_7"] = install_menu_create_menu_item(
      'admin/build/views/%/details/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_8"] = install_menu_create_menu_item(
      'admin/build/views/%/preview/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_9"] = install_menu_create_menu_item(
      'admin/build/views/%/clone-display/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_10"] = install_menu_create_menu_item(
      'admin/build/views/%/add-display/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_8_11"] = install_menu_create_menu_item(
      'admin/build/views/%/%/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_9"] = install_menu_create_menu_item(
      'admin/build/views1/convert', 'Convert view', 0, $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_10"] = install_menu_create_menu_item(
      'admin/build/views1/delete', 'Delete view', 0, $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_11"] = install_menu_create_menu_item(
      'admin/build/imagecache', 'ImageCache',
      'Administer imagecache presets and actions.', $menu_name,
      $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_5_11_0"] = install_menu_create_menu_item(
      'admin/build/imagecache/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_5_11"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_12"] = install_menu_create_menu_item(
      'admin/build/workflow', 'Workflow',
      'Allows the creation and assignment of arbitrary workflows to node types.',
      $menu_name, $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_12_0"] = install_menu_create_menu_item(
      'admin/build/workflow/state', 'Add state', 0, $menu_name,
      $mlids["navigation_kids_156_5_12"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_12_1"] = install_menu_create_menu_item(
      'admin/build/workflow/delete', 'Delete workflow', 0, $menu_name,
      $mlids["navigation_kids_156_5_12"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_12_2"] = install_menu_create_menu_item(
      'admin/build/workflow/edit/%', 'Edit workflow', 0, $menu_name,
      $mlids["navigation_kids_156_5_12"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_13"] = install_menu_create_menu_item(
      'admin/build/menu', 'Menus',
      'Control your site\'s navigation menu, primary links and secondary links, as well as rename and reorganize menu items.',
      $menu_name, $mlids["navigation_kids_156_5"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_13_0"] = install_menu_create_menu_item(
      'admin/build/menu/item/%/delete', 'Delete menu item', 0, $menu_name,
      $mlids["navigation_kids_156_5_13"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_13_1"] = install_menu_create_menu_item(
      'admin/build/menu/item/%/edit', 'Edit menu item', 0, $menu_name,
      $mlids["navigation_kids_156_5_13"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_13_2"] = install_menu_create_menu_item(
      'admin/build/menu/item/%/reset', 'Reset menu item', 0, $menu_name,
      $mlids["navigation_kids_156_5_13"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_13_3"] = install_menu_create_menu_item(
      'admin/build/menu-customize/navigation', 'Navigation', 0, $menu_name,
      $mlids["navigation_kids_156_5_13"], '0', 'menu', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_5_13_4"] = install_menu_create_menu_item(
      'admin/build/menu-customize/primary-links', 'Primary links', 0,
      $menu_name, $mlids["navigation_kids_156_5_13"], '0', 'menu', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_13_5"] = install_menu_create_menu_item(
      'admin/build/menu-customize/secondary-links', 'Secondary links', 0,
      $menu_name, $mlids["navigation_kids_156_5_13"], '0', 'menu', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_13_6"] = install_menu_create_menu_item(
      'admin/build/menu-customize/menu-catalogues', 'Catalogues', 0,
      $menu_name, $mlids["navigation_kids_156_5_13"], '0', 'menu', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_13_7"] = install_menu_create_menu_item(
      'admin/build/menu-customize/menu-tool-categories', 'Tool Categories', 0,
      $menu_name, $mlids["navigation_kids_156_5_13"], '0', 'menu', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_5_13_8"] = install_menu_create_menu_item(
      'admin/build/menu-customize/menu-my-content', 'My Content', 0,
      $menu_name, $mlids["navigation_kids_156_5_13"], '0', 'menu', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6"] = install_menu_create_menu_item(
      'admin/settings', 'Site configuration',
      'Adjust basic site configuration options.', $menu_name,
      $mlids["navigation_kids_156"], '-5', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_6_0"] = install_menu_create_menu_item(
      'admin/settings/actions', 'Actions',
      'Manage the actions defined for your site.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_6_0_0"] = install_menu_create_menu_item(
      'admin/settings/actions/configure', 'Configure an advanced action', 0,
      $menu_name, $mlids["navigation_kids_156_6_0"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_6_0_1"] = install_menu_create_menu_item(
      'admin/settings/actions/orphan', 'Remove orphans', 0, $menu_name,
      $mlids["navigation_kids_156_6_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_0_2"] = install_menu_create_menu_item(
      'admin/settings/actions/delete/%', 'Delete action', 'Delete an action.',
      $menu_name, $mlids["navigation_kids_156_6_0"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_6_1"] = install_menu_create_menu_item(
      'admin/settings/admin_menu', 'Administration menu',
      'Adjust administration menu settings.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_2"] = install_menu_create_menu_item(
      'admin/settings/admin', 'Administration theme',
      'Settings for how your administrative pages should look.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_3"] = install_menu_create_menu_item(
      'admin/settings/clean-urls', 'Clean URLs',
      'Enable or disable clean URLs for your site.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_6_3_0"] = install_menu_create_menu_item(
      'admin/settings/clean-urls/check', 'Clean URL check', 0, $menu_name,
      $mlids["navigation_kids_156_6_3"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_4"] = install_menu_create_menu_item(
      'admin/settings/custom_search', 'Custom Search',
      'Customize the default search, change labels, default texts, ordering, and display content types and taxonomy selectors.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_5"] = install_menu_create_menu_item(
      'admin/settings/date-time', 'Date and time',
      'Settings for how Drupal displays date and time, as well as the system\'s default timezone.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_5_0"] = install_menu_create_menu_item(
      'admin/settings/date-time/lookup', 'Date and time lookup', 0, $menu_name,
      $mlids["navigation_kids_156_6_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_6"] = install_menu_create_menu_item(
      'admin/settings/error-reporting', 'Error reporting',
      'Control how Drupal deals with errors including 403/404 errors as well as PHP error reporting.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_7"] = install_menu_create_menu_item(
      'admin/settings/file-system', 'File system',
      'Tell Drupal where to store uploaded files and how they are accessed.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_8"] = install_menu_create_menu_item(
      'admin/settings/fivestar', 'Fivestar',
      'Configure site-wide widgets used for Fivestar rating.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_9"] = install_menu_create_menu_item(
      'admin/settings/image-toolkit', 'Image toolkit',
      'Choose which image toolkit to use if you have installed optional toolkits.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_10"] = install_menu_create_menu_item(
      'admin/settings/filters', 'Input formats',
      'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_10_0"] = install_menu_create_menu_item(
      'admin/settings/filters/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_6_10"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_10_1"] = install_menu_create_menu_item(
      'admin/settings/filters/delete', 'Delete input format', 0, $menu_name,
      $mlids["navigation_kids_156_6_10"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_11"] = install_menu_create_menu_item(
      'admin/settings/performance', 'Performance',
      'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_12"] = install_menu_create_menu_item(
      'admin/settings/site-information', 'Site information',
      'Change basic site information, such as the site name, slogan, e-mail address, mission, front page and more.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_13"] = install_menu_create_menu_item(
      'admin/settings/site-maintenance', 'Site maintenance',
      'Take the site off-line for maintenance or bring it back online.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_14"] = install_menu_create_menu_item(
      'admin/settings/me', '\'Me\' Aliases',
      'Configure the \'me\' aliases, and how they\'re matched.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_15"] = install_menu_create_menu_item(
      'admin/settings/node_export', 'Node Export',
      'Configure the settings for Node Export.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_16"] = install_menu_create_menu_item(
      'admin/settings/uploads', 'File uploads',
      'Control how files may be attached to content.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_17"] = install_menu_create_menu_item(
      'admin/settings/profile-generator', 'Generate installation profile',
      'Generate a Drupal installation profile', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_18"] = install_menu_create_menu_item(
      'admin/settings/search', 'Search settings',
      'Configure relevance settings for search and other indexing options',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_18_0"] = install_menu_create_menu_item(
      'admin/settings/search/wipe', 'Clear index', 0, $menu_name,
      $mlids["navigation_kids_156_6_18"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_19"] = install_menu_create_menu_item(
      'admin/settings/skinr', 'Skinr', 0, $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_20"] = install_menu_create_menu_item(
      'admin/settings/tabs', 'Tabs', 'Configuration for tabs', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_21"] = install_menu_create_menu_item(
      'admin/settings/taxonomy_image', 'Taxonomy Image',
      'Configure Taxonomy_image functionality.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_22"] = install_menu_create_menu_item(
      'admin/settings/thickbox', 'Thickbox',
      'Allows the user to configure the Thickbox settings.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_23"] = install_menu_create_menu_item(
      'admin/settings/votingapi', 'Voting API',
      'Global settings for the Voting API.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_24"] = install_menu_create_menu_item(
      'admin/settings/switchtheme', 'Switchtheme',
      'Configure settings for the Switchtheme block, as well as change how a visitor\'s user agent affects which theme is used.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_25"] = install_menu_create_menu_item(
      'admin/settings/googleanalytics', 'Google Analytics',
      'Configure the settings used to generate your Google Analytics tracking code.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_26"] = install_menu_create_menu_item(
      'admin/settings/jquery_update', 'jQuery Update',
      'Configure settings for jQuery Update module.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_27"] = install_menu_create_menu_item(
      'admin/settings/apachesolr', 'Apache Solr', 'Administer Apache Solr.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_27_0"] = install_menu_create_menu_item(
      'admin/settings/apachesolr/mlt/add_block', '', 0, $menu_name,
      $mlids["navigation_kids_156_6_27"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_27_1"] = install_menu_create_menu_item(
      'admin/settings/apachesolr/index/delete/confirm',
      'Confirm index deletion', 0, $menu_name,
      $mlids["navigation_kids_156_6_27"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_27_2"] = install_menu_create_menu_item(
      'admin/settings/apachesolr/mlt/delete_block/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_6_27"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_27_3"] = install_menu_create_menu_item(
      'admin/settings/apachesolr/index/clear/confirm',
      'Confirm the re-indexing of all content', 0, $menu_name,
      $mlids["navigation_kids_156_6_27"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_28"] = install_menu_create_menu_item(
      'admin/settings/devel', 'Devel settings',
      'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/build/block">block administration</a> page.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_29"] = install_menu_create_menu_item(
      'admin/settings/imageapi', 'ImageAPI', 'Configure ImageAPI.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_30"] = install_menu_create_menu_item(
      'admin/settings/opensocial_tools', 'Opensocial Tools', 0, $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_31"] = install_menu_create_menu_item(
      'admin/settings/lightbox2', 'Lightbox2',
      'Allows the user to configure the lightbox2 settings', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_32"] = install_menu_create_menu_item(
      'admin/settings/taxonomy_manager', 'Taxonomy Manager',
      'Advanced settings for the Taxonomy Manager', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_33"] = install_menu_create_menu_item(
      'admin/settings/wysiwyg', 'Wysiwyg profiles',
      'Configure client-side editors.', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_34"] = install_menu_create_menu_item(
      'admin/settings/jquery_ui_dialog', 'JQuery UI Dialog',
      'Configuration options for the JQuery UI Dialog module', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_35"] = install_menu_create_menu_item(
      'admin/settings/wysiwyg_imageupload', 'WYSIWYG Image upload',
      'Configuration options for the WYSIWYG Image upload module', $menu_name,
      $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_6_36"] = install_menu_create_menu_item(
      'admin/settings/faq', 'Frequently Asked Questions',
      'Allows the user to configure the layout of questions and answers on a FAQ page.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_37"] = install_menu_create_menu_item(
      'admin/settings/logging', 'Logging and alerts',
      'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destination, such as syslog, database, email, ...etc.',
      $menu_name, $mlids["navigation_kids_156_6"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_6_37_0"] = install_menu_create_menu_item(
      'admin/settings/logging/dblog', 'Database logging',
      'Settings for logging to the Drupal database logs. This is the most common method for small to medium sites on shared hosting. The logs are viewable from the admin pages.',
      $menu_name, $mlids["navigation_kids_156_6_37"], '0', 'system', '0',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_7"] = install_menu_create_menu_item(
      'admin/user', 'User management',
      'Manage your site\'s users, groups and access to site features.',
      $menu_name, $mlids["navigation_kids_156"], '0', 'system', '0', TRUE, '0',
      '0', '0');
  $mlids["navigation_kids_156_7_0"] = install_menu_create_menu_item(
      'admin/user/rules', 'Access rules',
      'List and create rules to disallow usernames, e-mail addresses, and IP addresses.',
      $menu_name, $mlids["navigation_kids_156_7"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_7_0_0"] = install_menu_create_menu_item(
      'admin/user/rules/delete', 'Delete rule', 0, $menu_name,
      $mlids["navigation_kids_156_7_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_0_1"] = install_menu_create_menu_item(
      'admin/user/rules/edit', 'Edit rule', 0, $menu_name,
      $mlids["navigation_kids_156_7_0"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_1"] = install_menu_create_menu_item(
      'admin/user/permissions', 'Permissions',
      'Determine access to features by selecting permissions for roles.',
      $menu_name, $mlids["navigation_kids_156_7"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_7_2"] = install_menu_create_menu_item(
      'admin/user/roles', 'Roles', 'List, edit, or add user roles.',
      $menu_name, $mlids["navigation_kids_156_7"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_7_2_0"] = install_menu_create_menu_item(
      'admin/user/roles/edit', 'Edit role', 0, $menu_name,
      $mlids["navigation_kids_156_7_2"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_3"] = install_menu_create_menu_item(
      'admin/user/settings', 'User settings',
      'Configure default behavior of users, including registration requirements, e-mails, and user pictures.',
      $menu_name, $mlids["navigation_kids_156_7"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_7_4"] = install_menu_create_menu_item(
      'admin/user/user', 'Users', 'List, add, and edit users.', $menu_name,
      $mlids["navigation_kids_156_7"], '0', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_5"] = install_menu_create_menu_item(
      'admin/user/profile', 'Profiles',
      'Create customizable fields for your users.', $menu_name,
      $mlids["navigation_kids_156_7"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_7_5_0"] = install_menu_create_menu_item(
      'admin/user/profile/add', 'Add field', 0, $menu_name,
      $mlids["navigation_kids_156_7_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_5_1"] = install_menu_create_menu_item(
      'admin/user/profile/delete', 'Delete field', 0, $menu_name,
      $mlids["navigation_kids_156_7_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_5_2"] = install_menu_create_menu_item(
      'admin/user/profile/edit', 'Edit field', 0, $menu_name,
      $mlids["navigation_kids_156_7_5"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_5_3"] = install_menu_create_menu_item(
      'admin/user/profile/autocomplete', 'Profile category autocomplete', 0,
      $menu_name, $mlids["navigation_kids_156_7_5"], '0', 'system', '-1',
      FALSE, '0', '0', '0');
  $mlids["navigation_kids_156_7_6"] = install_menu_create_menu_item(
      'admin/user/captcha', 'CAPTCHA',
      'Administer how and where CAPTCHAs are used.', $menu_name,
      $mlids["navigation_kids_156_7"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_7_6_0"] = install_menu_create_menu_item(
      'admin/user/captcha/captcha/captcha_point',
      'CAPTCHA point administration', 0, $menu_name,
      $mlids["navigation_kids_156_7_6"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_7"] = install_menu_create_menu_item(
      'admin/user/taxonomy_access', 'Taxonomy access permissions',
      'Taxonomy-based access control for content', $menu_name,
      $mlids["navigation_kids_156_7"], '0', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_7_7_0"] = install_menu_create_menu_item(
      'admin/user/taxonomy_access/delete', '', 0, $menu_name,
      $mlids["navigation_kids_156_7_7"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_7_7_1"] = install_menu_create_menu_item(
      'admin/user/taxonomy_access/edit', '', 0, $menu_name,
      $mlids["navigation_kids_156_7_7"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_8"] = install_menu_create_menu_item(
      'admin/rules', 'Rules', 'Rules administration links.', $menu_name,
      $mlids["navigation_kids_156"], '5', 'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_156_8_0"] = install_menu_create_menu_item(
      'admin/rules/autocomplete', '', 0, $menu_name,
      $mlids["navigation_kids_156_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_8_1"] = install_menu_create_menu_item(
      'admin/rules/ie', 'Import / Export',
      'Export your rules as text or import rules.', $menu_name,
      $mlids["navigation_kids_156_8"], '5', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_8_2"] = install_menu_create_menu_item(
      'admin/rules/rule_sets', 'Rule sets', 'Create and manage rule sets.',
      $menu_name, $mlids["navigation_kids_156_8"], '0', 'system', '0', TRUE,
      '0', '0', '0');
  $mlids["navigation_kids_156_8_2_0"] = install_menu_create_menu_item(
      'admin/rules/rule_sets/js', '', 0, $menu_name,
      $mlids["navigation_kids_156_8_2"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_8_2_1"] = install_menu_create_menu_item(
      'admin/rules/rule_sets/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_8_2"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_8_3"] = install_menu_create_menu_item(
      'admin/rules/settings', 'Settings',
      'Set display options, show/hide Rules messages.', $menu_name,
      $mlids["navigation_kids_156_8"], '7', 'system', '0', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_156_8_4"] = install_menu_create_menu_item(
      'admin/rules/trigger', 'Triggered rules',
      'Customize your site by configuring rules that are evaluated on events.',
      $menu_name, $mlids["navigation_kids_156_8"], '-2', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_156_8_5"] = install_menu_create_menu_item(
      'admin/rules/rules/%', '', 0, $menu_name,
      $mlids["navigation_kids_156_8"], '0', 'system', '-1', FALSE, '0', '0',
      '0');
  $mlids["navigation_kids_157"] = install_menu_create_menu_item('node/add',
      'Create content', 0, $menu_name, $mlids["navigation_kids"], '1',
      'system', '0', TRUE, '0', '0', '0');
  $mlids["navigation_kids_157_0"] = install_menu_create_menu_item(
      'node/add/page', 'Page',
      'A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.',
      $menu_name, $mlids["navigation_kids_157"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_157_1"] = install_menu_create_menu_item(
      'node/add/lstool-opensocial', 'OpenSocial',
      'This module adds the OpenSocial tool type', $menu_name,
      $mlids["navigation_kids_157"], '0', 'system', '0', FALSE, '0', '0', '0');
  $mlids["navigation_kids_157_2"] = install_menu_create_menu_item(
      'node/add/lstool-w3c', 'W3C', 'This module adds the W3C tool type',
      $menu_name, $mlids["navigation_kids_157"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_157_3"] = install_menu_create_menu_item(
      'node/add/bundle', 'Bundle', 'A bundle node type', $menu_name,
      $mlids["navigation_kids_157"], '0', 'system', '0', FALSE, '0', '0', '0');
  $mlids["navigation_kids_157_4"] = install_menu_create_menu_item(
      'node/add/widget-contest', 'Widget Contest',
      'A page which describes a widget contest', $menu_name,
      $mlids["navigation_kids_157"], '0', 'system', '0', FALSE, '0', '0', '0');
  $mlids["navigation_kids_157_5"] = install_menu_create_menu_item(
      'node/add/widget-specification', 'Widget Specification',
      'This type describes the specification of an widget including screenshot mock-ups, use case and an optional URL to a possible implementation',
      $menu_name, $mlids["navigation_kids_157"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_157_6"] = install_menu_create_menu_item(
      'node/add/widget-specification-review', 'Widget Specification Review',
      'Widget specification review is a textual themed reviewed delivered by selected reviewers. The reviews are invisible for users and their goal is to internally assess the value of specification.',
      $menu_name, $mlids["navigation_kids_157"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  $mlids["navigation_kids_157_7"] = install_menu_create_menu_item(
      'node/add/faq', 'FAQ', 'A frequently asked question and its answer.',
      $menu_name, $mlids["navigation_kids_157"], '0', 'system', '0', FALSE,
      '0', '0', '0');
  /********************************
   *     MENU: PRIMARY LINKS      *
   ********************************/
  $menu_name = install_menu_create_menu('Primary links', 'primary-links',
      'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');

  $mlids["primary-links_kids"] = 0;
  $mlids["primary-links_kids_0"] = install_menu_create_menu_item(
      'contest-tools', 'Contest Tools', 0, $menu_name,
      $mlids["primary-links_kids"], '-50', 'menu', '0', FALSE, '0', '1', '0');
  $mlids["primary-links_kids_1"] = install_menu_create_menu_item(
      'my-content/tools', 'My Content', 0, $menu_name,
      $mlids["primary-links_kids"], '0', 'menu', '0', FALSE, '0', '0', '0');
  $mlids["primary-links_kids_2"] = install_menu_create_menu_item('user/%',
      'My account', 0, $menu_name, $mlids["primary-links_kids"], '2', 'menu',
      '0', FALSE, '0', '0', '0');
  $mlids["primary-links_kids_3"] = install_menu_create_menu_item(
      'contest-submissions', 'Contest Results', 0, $menu_name,
      $mlids["primary-links_kids"], '0', 'menu', '0', FALSE, '0', '0', '0');
  /********************************
   *    MENU: SECONDARY LINKS     *
   ********************************/
  $menu_name = install_menu_create_menu('Secondary links', 'secondary-links',
      'Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links');

  $mlids["secondary-links_kids"] = 0;
  $mlids["secondary-links_kids_0"] = install_menu_create_menu_item('node/2',
      'About', 'About', $menu_name, $mlids["secondary-links_kids"], '-50',
      'menu', '0', FALSE, '0', '0', '0');
  $mlids["secondary-links_kids_1"] = install_menu_create_menu_item('node/4',
      'Developer', 'Developer', $menu_name, $mlids["secondary-links_kids"],
      '-48', 'menu', '0', FALSE, '0', '0', '0');
  $mlids["secondary-links_kids_2"] = install_menu_create_menu_item('node/7',
      'Contact', 'Contact', $menu_name, $mlids["secondary-links_kids"], '-24',
      'menu', '0', FALSE, '0', '1', '0');
  $mlids["secondary-links_kids_3"] = install_menu_create_menu_item('node/8',
      'Partner', 'Partner', $menu_name, $mlids["secondary-links_kids"], '-48',
      'menu', '0', FALSE, '0', '1', '0');
  $mlids["secondary-links_kids_4"] = install_menu_create_menu_item('node/9',
      'FAQ', 'FAQ', $menu_name, $mlids["secondary-links_kids"], '0', 'menu',
      '1', FALSE, '0', '1', '0');

  /********************************
   *       BLOCKS AND BOXES        *
   ********************************/
  $block = (object) array(
      'module' => 'user', 'delta' => '0', 'theme' => 'garland',
      'status' => '1', 'weight' => '0', 'region' => 'left', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[1] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '1', 'theme' => 'garland',
      'status' => '1', 'weight' => '0', 'region' => 'left', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[2] = install_create_block($block);
  $block = (object) array(
      'module' => 'system', 'delta' => '0', 'theme' => 'garland',
      'status' => '1', 'weight' => '10', 'region' => 'footer', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[3] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '0', 'theme' => 'fusion_core',
      'status' => '1', 'weight' => '0', 'region' => 'sidebar_first',
      'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
      'title' => '', 'cache' => '1',
  );
  $block_map[4] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '1', 'theme' => 'fusion_core',
      'status' => '1', 'weight' => '0', 'region' => 'sidebar_first',
      'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
      'title' => '', 'cache' => '1',
  );
  $block_map[5] = install_create_block($block);
  $block = (object) array(
      'module' => 'system', 'delta' => '0', 'theme' => 'fusion_core',
      'status' => '1', 'weight' => '10', 'region' => 'footer', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[6] = install_create_block($block);
  $block = (object) array(
      'module' => 'system', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '1', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '1', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[7] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '1', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '1', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[8] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '1', 'theme' => 'role_widget_store',
      'status' => '1', 'weight' => '-16', 'region' => 'sidebar_first',
      'custom' => '0', 'throttle' => '0', 'visibility' => '1',
      'pages' => 'admin/*', 'title' => '', 'cache' => '-1',
  );
  $block_map[9] = install_create_block($block);
  $block = (object) array(
      'module' => 'node', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '-14', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[10] = install_create_block($block);
  $block = (object) array(
      'module' => 'profile', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '-17', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '5',
  );
  $block_map[11] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '2', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '5', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[12] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '3', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '6', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[13] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'primary-links',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-16',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[14] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'secondary-links',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-15',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[15] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-tool-categories',
      'theme' => 'role_widget_store', 'status' => '1', 'weight' => '-18',
      'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
      'visibility' => '1', 'pages' => 'homepage', 'title' => '',
      'cache' => '-1',
  );
  $block_map[16] = install_create_block($block);
  $block = (object) array(
      'module' => 'profile', 'delta' => '0',
      'theme' => 'role_widget_store_backend', 'status' => '0',
      'weight' => '-6', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[19] = install_create_block($block);
  $block = (object) array(
      'module' => 'system', 'delta' => '0',
      'theme' => 'role_widget_store_backend', 'status' => '0',
      'weight' => '-6', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[20] = install_create_block($block);
  $block = (object) array(
      'module' => 'devel', 'delta' => '2',
      'theme' => 'role_widget_store_backend', 'status' => '0',
      'weight' => '-5', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => 'devel/php', 'title' => '',
      'cache' => '1',
  );
  $block_map[21] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'primary-links',
      'theme' => 'role_widget_store_backend', 'status' => '0',
      'weight' => '-4', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[22] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'secondary-links',
      'theme' => 'role_widget_store_backend', 'status' => '0',
      'weight' => '-3', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[23] = install_create_block($block);
  $block = (object) array(
      'module' => 'devel', 'delta' => '0',
      'theme' => 'role_widget_store_backend', 'status' => '0',
      'weight' => '-2', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[24] = install_create_block($block);
  $block = (object) array(
      'module' => 'node', 'delta' => '0',
      'theme' => 'role_widget_store_backend', 'status' => '0',
      'weight' => '-1', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[25] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '2',
      'theme' => 'role_widget_store_backend', 'status' => '0', 'weight' => '0',
      'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[26] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '3',
      'theme' => 'role_widget_store_backend', 'status' => '0', 'weight' => '1',
      'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[27] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '1',
      'theme' => 'role_widget_store_backend', 'status' => '1',
      'weight' => '-6', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[28] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '0',
      'theme' => 'role_widget_store_backend', 'status' => '1',
      'weight' => '-5', 'region' => 'left', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[29] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-catalogues',
      'theme' => 'role_widget_store', 'status' => '1', 'weight' => '-3',
      'region' => 'main_navi_bar_top', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '<none>', 'cache' => '-1',
  );
  $block_map[30] = install_create_block($block);
  $block = (object) array(
      'module' => 'search', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '-11', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '-1',
  );
  $block_map[31] = install_create_block($block);
  $block = (object) array(
      'module' => 'fivestar', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '-13', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[32] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-catalogues',
      'theme' => 'role_widget_store_backend', 'status' => '0', 'weight' => '0',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[33] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-tool-categories',
      'theme' => 'role_widget_store_backend', 'status' => '0', 'weight' => '0',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '1',
      'pages' => 'homepage', 'title' => '', 'cache' => '1',
  );
  $block_map[34] = install_create_block($block);
  $block = (object) array(
      'module' => 'search', 'delta' => '0',
      'theme' => 'role_widget_store_backend', 'status' => '0', 'weight' => '0',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[35] = install_create_block($block);
  $block = (object) array(
      'module' => 'fivestar', 'delta' => '0',
      'theme' => 'role_widget_store_backend', 'status' => '0', 'weight' => '0',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[36] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-catalogues', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[37] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'primary-links', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[38] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'secondary-links', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[39] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-tool-categories',
      'theme' => 'garland', 'status' => '0', 'weight' => '0', 'region' => '',
      'custom' => '0', 'throttle' => '0', 'visibility' => '1',
      'pages' => 'homepage', 'title' => '', 'cache' => '1',
  );
  $block_map[40] = install_create_block($block);
  $block = (object) array(
      'module' => 'node', 'delta' => '0', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[41] = install_create_block($block);
  $block = (object) array(
      'module' => 'profile', 'delta' => '0', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[42] = install_create_block($block);
  $block = (object) array(
      'module' => 'search', 'delta' => '0', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[43] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '2', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[44] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '3', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[45] = install_create_block($block);
  $block = (object) array(
      'module' => 'fivestar', 'delta' => '0', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[46] = install_create_block($block);
  $block = (object) array(
      'module' => 'devel', 'delta' => '0', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[47] = install_create_block($block);
  $block = (object) array(
      'module' => 'devel', 'delta' => '2', 'theme' => 'garland',
      'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => 'devel/php',
      'title' => '', 'cache' => '1',
  );
  $block_map[48] = install_create_block($block);
  $block = (object) array(
      'module' => 'fivestar', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-1', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[51] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-catalogues',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-2', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[52] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-tool-categories',
      'theme' => 'role_widget_store_embedded', 'status' => '1',
      'weight' => '-8', 'region' => 'sidebar_first', 'custom' => '0',
      'throttle' => '0', 'visibility' => '1', 'pages' => 'homepage',
      'title' => '', 'cache' => '-1',
  );
  $block_map[53] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'primary-links',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-5', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[54] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'secondary-links',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-4', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[55] = install_create_block($block);
  $block = (object) array(
      'module' => 'node', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-3', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[56] = install_create_block($block);
  $block = (object) array(
      'module' => 'profile', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-8', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '5',
  );
  $block_map[57] = install_create_block($block);
  $block = (object) array(
      'module' => 'search', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '0', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[58] = install_create_block($block);
  $block = (object) array(
      'module' => 'system', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-7', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[59] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-9', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[60] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '1',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '-6', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[61] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '2',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '4', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[62] = install_create_block($block);
  $block = (object) array(
      'module' => 'user', 'delta' => '3',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '5', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[63] = install_create_block($block);
  $block = (object) array(
      'module' => 'comment', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '1', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[64] = install_create_block($block);
  $block = (object) array(
      'module' => 'switchtheme', 'delta' => '0',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '4',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[65] = install_create_block($block);
  $block = (object) array(
      'module' => 'switchtheme', 'delta' => '1',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-10',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[66] = install_create_block($block);
  $block = (object) array(
      'module' => 'comment', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '2', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[67] = install_create_block($block);
  $block = (object) array(
      'module' => 'switchtheme', 'delta' => '0',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '3', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[68] = install_create_block($block);
  $block = (object) array(
      'module' => 'switchtheme', 'delta' => '1',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '1', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '1',
  );
  $block_map[69] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr', 'delta' => 'mlt-001',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-12',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '4',
  );
  $block_map[70] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr', 'delta' => 'sort',
      'theme' => 'role_widget_store', 'status' => '1', 'weight' => '-17',
      'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '4',
  );
  $block_map[71] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'currentsearch',
      'theme' => 'role_widget_store', 'status' => '1', 'weight' => '-15',
      'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '4',
  );
  $block_map[72] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr', 'delta' => 'mlt-001',
      'theme' => 'role_widget_store_embedded', 'status' => '0',
      'weight' => '0', 'region' => '', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '4',
  );
  $block_map[73] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr', 'delta' => 'sort',
      'theme' => 'role_widget_store_embedded', 'status' => '1',
      'weight' => '0', 'region' => 'sidebar_first', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '4',
  );
  $block_map[74] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'currentsearch',
      'theme' => 'role_widget_store_embedded', 'status' => '1',
      'weight' => '5', 'region' => 'sidebar_first', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '4',
  );
  $block_map[75] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'type',
      'theme' => 'role_widget_store', 'status' => '1', 'weight' => '-12',
      'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '5',
  );
  $block_map[76] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'im_vid_1',
      'theme' => 'role_widget_store', 'status' => '1', 'weight' => '-14',
      'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => 'Category Filter',
      'cache' => '5',
  );
  $block_map[78] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'type',
      'theme' => 'role_widget_store_embedded', 'status' => '1',
      'weight' => '25', 'region' => 'sidebar_first', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '5',
  );
  $block_map[79] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'im_vid_2',
      'theme' => 'role_widget_store_embedded', 'status' => '1',
      'weight' => '15', 'region' => 'sidebar_first', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '',
      'title' => 'Functionality Filter', 'cache' => '5',
  );
  $block_map[80] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'im_vid_1',
      'theme' => 'role_widget_store_embedded', 'status' => '1',
      'weight' => '10', 'region' => 'sidebar_first', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '',
      'title' => 'Category Filter', 'cache' => '5',
  );
  $block_map[81] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'im_vid_2',
      'theme' => 'role_widget_store', 'status' => '1', 'weight' => '-13',
      'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
      'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '5',
  );
  $block_map[98] = install_create_block($block);
  $block = (object) array(
      'module' => 'menu', 'delta' => 'menu-my-content',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-2',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[99] = install_create_block($block);
  $block = (object) array(
      'module' => 'apachesolr_search', 'delta' => 'im_vid_3',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-9',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '5',
  );
  $block_map[100] = install_create_block($block);
  $block = (object) array(
      'module' => 'views', 'delta' => '231b0ab61fc595f943f1ad1723ca3d90',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-7',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[101] = install_create_block($block);
  $block = (object) array(
      'module' => 'views', 'delta' => '2a1e1fd05732d4828431bb53712d6648',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-4',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[102] = install_create_block($block);
  $block = (object) array(
      'module' => 'views', 'delta' => '6c7fd6164525b40e5518abb946d56c6b',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-5',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[103] = install_create_block($block);
  $block = (object) array(
      'module' => 'views', 'delta' => 'e65e15770a0d49a9aef7a6fc30da3d03',
      'theme' => 'role_widget_store', 'status' => '0', 'weight' => '-6',
      'region' => '', 'custom' => '0', 'throttle' => '0', 'visibility' => '0',
      'pages' => '', 'title' => '', 'cache' => '-1',
  );
  $block_map[104] = install_create_block($block);
  $block = (object) array(
      'module' => 'devel', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '2', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[105] = install_create_block($block);
  $block = (object) array(
      'module' => 'devel', 'delta' => '2', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '-8', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => 'devel/php',
      'title' => '', 'cache' => '1',
  );
  $block_map[106] = install_create_block($block);
  $block = (object) array(
      'module' => 'faq', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '1', 'weight' => '-11', 'region' => 'sidebar_first',
      'custom' => '0', 'throttle' => '0', 'visibility' => '1',
      'pages' => 'faq/*', 'title' => '', 'cache' => '1',
  );
  $block_map[107] = install_create_block($block);
  $block = (object) array(
      'module' => 'faq', 'delta' => '1', 'theme' => 'role_widget_store',
      'status' => '1', 'weight' => '-10', 'region' => 'sidebar_first',
      'custom' => '0', 'throttle' => '0', 'visibility' => '1',
      'pages' => 'faq/*', 'title' => '', 'cache' => '1',
  );
  $block_map[108] = install_create_block($block);
  $block = (object) array(
      'module' => 'faq', 'delta' => '2', 'theme' => 'role_widget_store',
      'status' => '0', 'weight' => '-1', 'region' => '', 'custom' => '0',
      'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
      'cache' => '1',
  );
  $block_map[109] = install_create_block($block);
  $block = (object) array(
      'module' => 'faq_ask', 'delta' => '0', 'theme' => 'role_widget_store',
      'status' => '1', 'weight' => '-17', 'region' => 'sidebar_last',
      'custom' => '0', 'throttle' => '0', 'visibility' => '1',
      'pages' => 'faq', 'title' => '', 'cache' => '1',
  );
  $block_map[110] = install_create_block($block);
  $block = (object) array(
      'module' => 'faq_ask', 'delta' => '1', 'theme' => 'role_widget_store',
      'status' => '1', 'weight' => '-18', 'region' => 'sidebar_last',
      'custom' => '0', 'throttle' => '0', 'visibility' => '1',
      'pages' => 'faq', 'title' => '', 'cache' => '1',
  );
  $block_map[111] = install_create_block($block);

}
