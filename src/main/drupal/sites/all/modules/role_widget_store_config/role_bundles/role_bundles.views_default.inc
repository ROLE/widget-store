<?php

/**
 * Implementation of hook_views_default_views().
 */
function role_bundles_views_default_views() {
  $views = array();

  // Exported view: bundle_tag_cloud
  $view = new view;
  $view->name = 'bundle_tag_cloud';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('arguments', array(
    'tid' => array(
      'default_action' => 'summary asc',
      'style_plugin' => 'cloud_summary',
      'style_options' => array(
        'base_path' => 'taxonomy/term',
        'count' => 0,
        'override' => 0,
        'items_per_page' => '25',
        'sort' => 'random',
        'randomize' => 1,
        'sizes' => '7',
        'font_size' => '',
        'algorithm' => 'log',
      ),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'add_table' => 0,
      'require_value' => 0,
      'reduce_duplicates' => 0,
      'set_breadcrumb' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'me_redirect' => 0,
      'me_validate_user_argument_type' => 'uid',
      'me_validate_user_roles' => array(
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        3 => 0,
        4 => 0,
        5 => 0,
        2 => 0,
        1 => 0,
        6 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'faq' => 0,
        'lstool_opensocial' => 0,
        'lstool_w3c' => 0,
        'bundle' => 0,
        'frontpage_slider_content' => 0,
        'page' => 0,
        'user_report' => 0,
        'widget_contest' => 0,
        'widget_specification' => 0,
        'widget_specification_review' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        3 => 0,
        4 => 0,
        5 => 0,
        2 => 0,
        1 => 0,
        6 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_vocabulary_machine_name' => array(
        '' => 0,
      ),
      'validate_argument_php' => '',
      'me_validate_user_restrict_roles' => 0,
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'bundle' => 'bundle',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header', 'Please select a category');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 30);
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 1,
    'comments' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
