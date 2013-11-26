<?php

/**
 * @file    taxonomy_machine_names.views.inc
 * @desc    Provides data handlers for vocabulary machine names
 *
 */


/**
 * Implementation of hook_views_data_alter()
 *
 */
function taxonomy_machine_names_views_data_alter(&$data) {

  // expose the "machine_name" field for fun and profit
  $data['vocabulary']['machine_name'] = array(
    'title' => t('Vocabulary machine name'),
    'help'  => t('The machine name for the vocabulary.'),
    // allows our machine name to be sortable
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // allows our machine name to be used in an argument
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    // allows our machine name to be used in filters
    'filter' => array(
      'handler' => 'taxonomy_machine_names_handler_filter_vocabulary_machine_name',
    ),
  );
  // tid field
  $data['term_node']['tidvoc'] = array(
    'title' => t('Vocabulary Term'),
    'help' => t('The taxonomy term ID'),
    'field' => array(
      'title' => t('Terms from vocabulary'),
      'help' => t('Display all taxonomy terms associated with a node from a specified vocabulary machine name.'),
      'handler' => 'taxonomy_machine_names_handler_field_term_node_machine_name_tid',
      'skip base' => 'term_data',
    ),
  );

  $data['term_data']['tid']['filter']['handler'] = 'taxonomy_machine_names_handler_filter_term_node_tid';
  $data['term_node']['tid']['filter']['handler'] = 'taxonomy_machine_names_handler_filter_term_node_tid';

}


/**
 * Implementation of hook_views_handlers()
 *
 */
function taxonomy_machine_names_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'taxonomy_machine_names') . '/includes/handlers',
    ),
    'handlers' => array(
      'taxonomy_machine_names_handler_filter_vocabulary_machine_name' => array(
        'parent' => 'views_handler_filter_in_operator',
      ),
      'taxonomy_machine_names_handler_field_term_node_machine_name_tid' => array(
        'parent' => 'views_handler_field_prerender_list',
      ),
      'taxonomy_machine_names_handler_filter_term_node_tid' => array(
        'parent' => 'views_handler_filter_many_to_one',
      ),
    ),
  );
}


/**
 * Implementation of hook_views_plugins()
 *
 */
function taxonomy_machine_names_views_plugins() {
  return array(
    'module' => 'taxonomy_machine_names',
    'argument validator' => array(
      'taxonomy_term_machine_name' => array(
        'title' => t('Tid restricted by Vocabulary Machine Name'),
        'handler' => 'taxonomy_machine_names_plugin_argument_validate_taxonomy_term',
        'path' => drupal_get_path('module', 'taxonomy_machine_names') . '/includes/plugins',
      ),
    ),
  );
}