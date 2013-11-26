<?php

/**
 * @file
 * Contains the 'taxonomy term' argument validator plugin.
 */

/**
 * Validate whether an argument is an acceptable node.
 */
class taxonomy_machine_names_plugin_argument_validate_taxonomy_term extends views_plugin_argument_validate {
  function validate_form(&$form, &$form_state) {
    $vocabularies = taxonomy_get_vocabularies();
    $options = array();
    foreach ($vocabularies as $voc) {
      $options[$voc->machine_name] = check_plain($voc->name);
    }
    $form['validate_argument_vocabulary_machine_name'] = array(
      '#type' => 'checkboxes',
      '#prefix' => '<div id="edit-options-validate-argument-vocabulary-_machine-name-wrapper">',
      '#suffix' => '</div>',
      '#title' => t('Vocabularies'),
      '#options' => $options,
      '#default_value' => isset($this->argument->options['validate_argument_vocabulary_machine_name']) ? $this->argument->options['validate_argument_vocabulary_machine_name'] : array(),
      '#description' => t('Validate for specific vocabularies, check them; if none are checked, all terms will pass.'),
      '#process' => array('expand_checkboxes', 'views_process_dependency'),
    );
  }

  function validate_argument($argument) {
    $vocs = isset($this->argument->options['validate_argument_vocabulary_machine_name']) ? array_filter($this->argument->options['validate_argument_vocabulary_machine_name']) : array();
    $vids = array();
    foreach ($vocs as $voc) {
      $vid = db_result(db_query("SELECT vid FROM {vocabulary} WHERE machine_name = '%s'", $voc));
      $vids[$vid] = $vid;
    }
    if (!is_numeric($argument)) {
      return FALSE;
    }

    $result = db_fetch_object(db_query("SELECT * FROM {term_data} WHERE tid = %d", $argument));
    if (!$result) {
      return FALSE;
    }

    return empty($vids) || !empty($vids[$result->vid]);
  }
}
