<?php
/**
 * Form Definition
 *
 * @author Andreas Diehl
 * @package Role-Widgetstore
 * @subpackage Drupal-Module
 */

/**
 * Function to create the form for step 2 of the creation from
 *
 * @param &$node
 *  Reference to the node
 *  @param $form_state
 *  The form state
 * @return
 *  The form for step 2
 */
function lstool_w3c_form(&$node, $form_state){
  // First, passthrough the function to the lstool-module
  $form = lstool_basic_form($node, $form_state);
  // Next, extend it
  //get tool height
  if (isset($form_state['storage']['height'])) {
    $height = $form_state['storage']['height'];
  } else if (isset($node->height)) {
    $height = $node->height;
  } else {
    $height = 0;
  }
  //define lstool height
  $form['lstool']['height'] = array(
      '#type' => 'textfield',
      '#title' => t('Height of the tool'),
      '#description' => t('The height of the tool (will be set initially, may be changed by the tool).'),
      '#required' => TRUE,
      '#default_value' => $height,
      '#maxlength' => 255,
      '#weight' => 100
  );
  
  return $form;
}



/**
 * Validates the form values; In our case: Checks if the URL is valid and
 * really contains a tool
 * @param type $node
 * @param type $form 
 */
function lstool_w3c_validate($node, &$form) {
  

  
}


?>
