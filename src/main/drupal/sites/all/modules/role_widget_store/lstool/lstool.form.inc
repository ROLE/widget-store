<?php


/**
 * Implementation of hook_content_extra_fields.
 */
function lstool_content_extra_fields() {
	$extras['lstool'] = array(
			'label' => t('Tool Details'),
			'description' => t('Tool Details'),
			'weight' => 4
	);
	$extras['lstool']['author'] = array(
			'label' => t('The tool author'),
			'description' => t('The tool author'),
			'weight' => 100
	);
	//set update button for the tool xml url
	$extras['lstool']['author_email'] = array(
			'label' => t('Tool Author\'s eMail address'),
			'description' => t('The email address of the tool\'s Author'),
			'weight' => 6
	);
	$extras['lstool']['license'] = array(
			'label' => t('License Type'),
			'description' => t('The short-name of the license, if common type.'),
			'weight' => 7
	);
	$extras['lstool']['license_details'] = array(
			'label' => t('License Details'),
			'description' => t('The text of the tool\'s license, if not a common type.'),
			'weight' => 8
	);

	return $extras;
}

/**
 * Form Definition
 *
 * @author Andreas Diehl
 * @package Role-Widgetstore
 * @subpackage Drupal-Module
 */

/**
 * preparation of the basic form, to be called by inherited modules
 * 
 * @param node $node
 * @param array $form_state
 * @return array
 */
function lstool_basic_form(&$node, $form_state) {

  $type = node_get_types('type', $node);

  //set submit function
  $form['#submit'][] = $node->type . '_form_submit';

  //defines title field
  if (isset($form_state['storage']['title'])) {
    $title_field_value = $form_state['storage']['title'];
  } else if (!empty($node->title)) {
    $title_field_value = check_plain($node->title);
  } else {
    $title_field_value = '';
  }

 
  if ($type->has_title) {
    $form['title'] = array(
        '#type' => 'textfield',
        '#title' => 'Tool Name',
        '#required' => TRUE,
        '#default_value' => $title_field_value,
        '#maxlength' => 255,
        '#weight' => 0,
    );
  }
  if (isset($form_state['storage']['description'])) {
    $body_field_value = $form_state['storage']['description'];
  } else if (!empty($node->body)) {
    $body_field_value = $node->body;
  } else {
    $body_field_value = '';
  }

  //get short description
  if (isset($form_state['storage']['short_description'])) {
  	$short_description = $form_state['storage']['short_description'];
  } else if (isset($node->short_description)) {
  	$short_description = $node->short_description;
  } else {
  	$short_description = '';
  }
  
  //defines body field
 
  if ($type->has_body) {
    $form['body_field'] = node_body_field(
            $node, $type->body_label, $type->min_word_count
    );
    $form['body_field']['body']['#default_value'] = $body_field_value;
    $form['body_field']['body']['#description'] = t('Enter the tool description used for teasers and pages.');
    $form['body_field']['body']['#rows'] = 6;
    $form['body_field']['body']['#title'] = 'Tool Description';
    $form['body_field']['#weight'] = 20;
    $form['body_field']['body']['#rows'] = 20;
  }
 
  //defines the field set for lstool data
  $form['lstool'] = array(
      '#type' => 'fieldset',
      '#title' => t('Tool Details'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#weight' => 4,
  );
  $form['format']['#weight'] = 100;
  
  //store the widget specification id
  $specification_id = $node->type;
  $form['lstool']['specification_id'] = array(
  			'#type' => 'hidden',
  			'#value' => $specification_id,
  );  

  //get author
  if (isset($form_state['storage']['author'])) {
    $author = $form_state['storage']['author'];
  } else if (isset($node->author)) {
    $author = $node->author;
  } else {
    $author = '';
  }

  // define author field
  $form['lstool']['author'] = array(
      '#type' => 'textfield',
      '#title' => t('Tool Author'),
      '#required' => FALSE,
      '#default_value' => $author,
      '#description' => t('The tool author'),
      '#maxlength' => 255,
      '#weight' => 5
  );

  // get author email
  if (isset($form_state['storage']['author_email'])) {
    $author_email = $form_state['storage']['author_email'];
  } else if (isset($node->author_email)) {
    $author_email = $node->author_email;
  } else {
    $author_email = '';
  }

  //define author email field
  $form['lstool']['author_email'] = array(
      '#type' => 'textfield',
      '#title' => t('Tool Author\'s eMail address'),
      '#required' => FALSE,
      '#default_value' => $author_email,
      '#description' => t('The email address of the tool\'s Author'),
      '#maxlength' => 255,
      '#weight' => 6
  );
  

  // get license
  if (isset($form_state['storage']['license'])) {
    $license = $form_state['storage']['license'];
  } else if (isset($node->license)) {
    $license = $node->license;
  } else {
    $license = '';
  }
  
  $form['lstool']['license'] = array(
      '#type' => 'textfield',
      '#title' => t('License Type'),
      '#required' => FALSE,
      '#default_value' => $license,
      '#description' => t('The short-name of the license, if common type.'),
      '#maxlength' => 255,
      '#weight' => 7
  );

  // get license details
  if (isset($form_state['storage']['license_details'])) {
    $license_details = $form_state['storage']['license_details'];
  } else if (isset($node->license_details)) {
    $license_details = $node->license_details;
  } else {
    $license_details = '';
  }

  $form['lstool']['license_details'] = array(
      '#type' => 'textarea',
      '#title' => t('License Details'),
      '#required' => FALSE,
      '#default_value' => $license_details,
      '#description' => t('The text of the tool\'s license, if not a common type.'),
      '#weight' => 8
  );
  

  $form['#attributes']['enctype'] = 'multipart/form-data';

  return $form;
}


/**
 * Generates the button for "add to my tool"
 * @param array $form_state
 * @param node $node
 * @return array $form 
 */
function lstool_obtain_form($form_state, $node) {
  $form = array();
  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Add to "MY TOOLS"'),
      '#disabled' => true,
  );
  return $form;
}
