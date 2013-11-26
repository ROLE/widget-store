<?php

/**
 * Field handler for terms.
 */
class taxonomy_machine_names_handler_field_term_node_machine_name_tid extends views_handler_field_prerender_list {
  function init(&$view, $options) {
    parent::init($view, $options);
    if ($view->base_table == 'node_revisions') {
      $this->additional_fields['vid'] = array('table' => 'node_revisions', 'field' => 'vid');
    }
    else {
      $this->additional_fields['vid'] = array('table' => 'node', 'field' => 'vid');
    }
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['link_to_taxonomy'] = array('default' => TRUE);
    $options['limit'] = array('default' => FALSE);
    $options['vids'] = array('default' => array());

    return $options;
  }

  /**
   * Provide "link to term" option.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_to_taxonomy'] = array(
      '#title' => t('Link this field to its term page'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_to_taxonomy']),
    );

    $form['limit'] = array(
      '#type' => 'checkbox',
      '#title' => t('Limit terms by vocabulary'),
      '#default_value'=> $this->options['limit'],
    );

    $options = array();
    $vocabularies = taxonomy_get_vocabularies();
    foreach ($vocabularies as $voc) {
      $options[$voc->machine_name] = check_plain($voc->name);
    }

    $form['vids'] = array(
      '#prefix' => '<div><div id="edit-options-vids">',
      '#suffix' => '</div></div>',
      '#type' => 'checkboxes',
      '#title' => t('Vocabularies'),
      '#options' => $options,
      '#default_value' => $this->options['vids'],
      '#process' => array('expand_checkboxes', 'views_process_dependency'),
      '#dependency' => array('edit-options-limit' => array(TRUE)),
    );
  }

  /**
   * Add this term to the query
   */
  function query() {
    $this->add_additional_fields();
  }

  function pre_render($values) {
    $this->field_alias = $this->aliases['vid'];
    $vids = array();
    foreach ($values as $result) {
      if (!empty($result->{$this->aliases['vid']})) {
        $vids[] = $result->{$this->aliases['vid']};
      }
    }

    if ($vids) {
      $voc = '';
      if (!empty($this->options['limit']) && !empty($this->options['vids'])) {
        $voc_vids = array();
        $machine_names = array_keys(array_filter($this->options['vids']));
        $voc = " AND td.vid IN (SELECT vid FROM {vocabulary} WHERE machine_name IN ('" . implode('\', \'', $machine_names) . "'))";
      }

      $result = db_query("SELECT tn.vid AS node_vid, td.*, v.name as vocabulary, v.machine_name FROM {term_data} td INNER JOIN {term_node} tn ON td.tid = tn.tid INNER JOIN {vocabulary} v ON v.vid = td.vid WHERE tn.vid IN (" . implode(', ', $vids) . ")$voc ORDER BY td.weight, td.name");

      while ($term = db_fetch_object($result)) {
        $this->items[$term->node_vid][$term->tid]['name'] = check_plain($term->name);
        $this->items[$term->node_vid][$term->tid]['tid'] = $term->tid;
        $this->items[$term->node_vid][$term->tid]['vid'] = $term->vid;
        $this->items[$term->node_vid][$term->tid]['vocabulary'] = check_plain($term->vocabulary);
        $this->items[$term->node_vid][$term->tid]['machine_name'] = $term->machine_name;
        
        if (!empty($this->options['link_to_taxonomy'])) {
          $this->items[$term->node_vid][$term->tid]['make_link'] = TRUE;
          $this->items[$term->node_vid][$term->tid]['path'] = taxonomy_term_path($term);
        }
      }
    }
  }

  function render_item($count, $item) {
    return $item['name'];
  }
}

