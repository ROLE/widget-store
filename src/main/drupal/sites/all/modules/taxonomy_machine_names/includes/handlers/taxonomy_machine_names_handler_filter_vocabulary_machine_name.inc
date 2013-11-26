<?php

/**
 * Filter for vocabulary machine name
 *
 */
class taxonomy_machine_names_handler_filter_vocabulary_machine_name extends views_handler_filter_in_operator {

  function get_value_options() {

    if (isset($this->value_options) ) {
      return;
    }

    $this->value_options = array();
    $vocabularies = taxonomy_get_vocabularies();

    foreach($vocabularies as $vocabulary) {
      $this->value_options[$vocabulary->machine_name] = check_plain($vocabulary->name);
    }

  }

}