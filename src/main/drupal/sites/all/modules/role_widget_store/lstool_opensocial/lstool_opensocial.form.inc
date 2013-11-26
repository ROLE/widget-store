<?php
/**
 * Form Definition
 *
 * @author Andreas Diehl
 * @package Role-Widgetstore
 * @subpackage Drupal-Module
 */

function lstool_opensocial_voc_name(){return 'Required Widget Features';}

function lstool_opensocial_alter_form(&$node, $form_state){
}





/**
 * Implementation of hook_content_extra_fields.
 */
function lstool_opensocial_content_extra_fields() {
	$extras['source'] = array(
			'label' => t('Tool source URI textfield'),
			'description' => t('Enter the source URI of the Tool'),
			'weight' => 100,
	);
	//set update button for the tool xml url
	$extras['get_information_from_lstool_xml'] = array(
			'label' => t('Tool source URI Submit button'),
			'description' => t('Submit button for source URI of the Tool'),
			'weight' => 200
	);
	$extras['lstool']['height'] = array(
			'label' => t('Height of the tool'),
			'description' => t('The height of the tool (will be set initially, may be changed by the tool).'),
			'parents' => array ('lstool'),
			'weight' => 100
	);
	
	$extras['get_information_from_lstool_xml_warning'] = array(
				'label' => t('Update Warning'),
				'description' => t('By using the update from URI feature you will overwrite existing and delete non saved data'),
				'parents' => array ('lstool'),
				'weight' => 300
	);
		
	return $extras;
}




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
function lstool_opensocial_form(&$node, $form_state){
	drupal_add_css(drupal_get_path('module', 'lstool_opensocial') .'/lstool_opensocial.css');
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

  $default_lstool_url = '';
  
  //get lstool url
  if (isset($form_state['storage']['source'])) {
  	$source = $form_state['storage']['source'];
  } else if (isset($node->source)) {
  	$source = $node->source;
  } else {
  	$source = '';
  }
  
  //define lstool URL field
  $form['source'] = array(
        '#type' => 'textfield',
        '#maxlength' => 2083,
        '#title' => t('Tool source URI'),
        '#required' => TRUE,
        '#description' => t('Enter the source URI of the Tool'),
        '#default_value' => $source,
        '#weight' => 1
  );
  //set update button for the tool xml url
  $form['get_information_from_lstool_xml'] = array(
        '#type' => 'submit',
        '#value' => 'Update Tool information from URI',
        '#id' => 'update_information_from_opensocial_xml_button',
        '#skip_required_validation' => TRUE,
        '#weight' => 2
  //'#validate' => array('opensocial_validate'),
  );
  $form['get_information_from_lstool_xml_warning'] = array(
        '#type' => 'item',
        '#value' => t('By using the update from URI feature you will overwrite existing and delete non saved data'),
        '#weight' => 3
  );
  
  
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
 
    $form['lstool']['field_tool_thumbnail_tmp'] = array(
        '#type' => 'hidden',
    	'#value' => $form_state['storage']['field_tool_thumbnail_tmp']
    );
    
    $form['lstool']['field_tool_screenshot_tmp'] = array(
        '#type' => 'hidden',
    	'#value' => $form_state['storage']['field_tool_screenshot_tmp']
    );    

    $voc = lstool_opensocial_get_vocabulary_by_name(lstool_opensocial_voc_name());
    if (isset($voc)) {
    	$terms=taxonomy_get_tree($voc->vid,0);
    	$weight=101;
    	$form['lstool']['features'] = array(
    			'#type' => 'fieldset',
    			'#title' => t('Required Widget Features'),
    			'#weight' => $weight,
    			'#collapsible' =>  True,
    			'#prefix' => '<div class="lstool_opensocial-checkboxes">',
    			'#suffix' => '</div>',
    	);
    
    	$termlist = array();
    	$nodeterms=taxonomy_node_get_terms_by_vocabulary($node,$voc->vid);
    	$nterms= array();
    	foreach($nodeterms as $nt) {
    		$nterms[] = $nt->tid;
    	}
    	foreach($terms as $term) {
			$default_value = isset($form_state['storage']['taxonomy'][$voc->vid][$term->tid]);
			if (! $default_value) $default_value = in_array($term->tid,$nterms);
			$form['lstool']['features'][$term->name] = array(
	    			'#type' => 'checkbox',
	    			'#title' => $term->name,
	    			'#default_value' => $default_value
	    	);
    	}
    	
    }
  return $form;
}



/**
 * Handles the submitted form when the button is pressed, then fills in the
 * default values.
 * This is just an intermediate step and has NOTHING to do with saving
 * the node.
 * 
 * @param array $form
 * @param array $form_state 
 */
function lstool_opensocial_form_submit($form, &$form_state) {
  //check if we want to update the from from an opensocial xml
  if ($form_state['clicked_button']['#id'] == 'update_information_from_opensocial_xml_button') {  	
  	
    //as we are checked in the step validation already that the repsonse is error free

  	// TODO: Is the response really valid?
    $response = lstool_opensocial_fetch_metadata($form_state['values']['source']);
    
    if(!isset($response)){
    	drupal_set_message(t('It was not possible to parse the given URL'),'warning');
    	
    	//save old values
    	$form_state['storage']['source'] = $form_state['values']['source'];
    	$form_state['storage']['title'] = $form_state['values']['title'];
    	$form_state['storage']['directory_title'] = $form_state['values']['directory_title'];
    	$form_state['storage']['height'] = $form_state['values']['height'];
    	$form_state['storage']['screenshot_url'] = $form_state['values']['screenshot_url'];
    	$form_state['storage']['thumbnail_url'] = $form_state['values']['thumbnail_url'];
    	$form_state['storage']['author'] = $form_state['values']['author'];
    	$form_state['storage']['author_email'] = $form_state['values']['author_email'];
    	$form_state['storage']['description'] = $form_state['values']['body'];
    	$form_state['storage']['short_description'] = $form_state['values']['short_description'];
    	$form_state['storage']['license'] = $form_state['values']['license'];
    	$form_state['storage']['license_details'] = $form_state['values']['license_details'];
    	
    	$voc = lstool_opensocial_get_vocabulary_by_name(lstool_opensocial_voc_name());
    	$form_state['storage']['taxonomy'][$voc->vid] = $form_state['storage']['taxonomy'][$voc->vid];
    	
    	//tell Drupal we are redrawing the same form
    	$form_state['rebuild'] = TRUE;
    	
    	return;
    }
   
    // Valid response, process it
    $lstool = $response->gadgets[0];

    //save values from the response
    $form_state['storage']['source'] = $form_state['values']['source'];
    $form_state['storage']['title'] = isset($lstool->title) ? $lstool->title : '';
    $form_state['storage']['directory_title'] = isset($lstool->directoryTitle) ? $lstool->directoryTitle : '';
    $form_state['storage']['height'] = !empty($lstool->height) ? $lstool->height : '0';
    $form_state['storage']['author'] = isset($lstool->author) ? $lstool->author : '';
    $form_state['storage']['author_email'] = isset($lstool->authorEmail) ? $lstool->authorEmail : '';
    $form_state['storage']['description'] = isset($lstool->description) ? $lstool->description : '';
    
    $form_state['storage']['screenshot_url'] = isset($lstool->screenshot) ? $lstool->screenshot : '';
    
    //set dcterm:requierements
    $voc = lstool_opensocial_get_vocabulary_by_name(lstool_opensocial_voc_name());
    $form_state['storage']['taxonomy'][$voc->vid] = array();
    $featureIsSet=false;
    foreach ($lstool->features as $key => $feature){
      		$tid =  _lstool_opensocial_get_termid_by_name($feature,$voc->vid);
      		if (isset($tid)) $form_state['storage']['taxonomy'][$voc->vid][$tid] = $tid;
      		$featureIsSet=true;
    }
    if ($featureIsSet) {
    	drupal_set_message(t('Feature requirement(s) from the xml file were extracted'));
    }
   
    
    //TODO: this can be removed, after validation
    $form_state['storage']['thumbnail_url'] = isset($lstool->thumbnail) ? $lstool->thumbnail : '';    

    // correct relative google paths
    // TODO: Use a regex here
    if (strstr($form_state['storage']['source'], 'www.google.com')) {
      $form_state['storage']['thumbnail'] = "http://www.google.com" . $lstool->thumbnail;
      $lstool->thumbnail = $form_state['storage']['thumbnail'];
      $form_state['storage']['screenshot'] = "http://www.google.com" . $lstool->screenshot;
      $lstool->screenshot = $form_state['storage']['screenshot'];
    }

    //defien mime types for validation and renaming
    $allowed_mime_types = array(
        'image/gif' => 'gif',
        'image/jpeg' => 'jpeg',
        'image/png' => 'png',
        'image/bmp' => 'bmp',
        'image/tiff' => 'tiff',
        'image/jp2' => 'jp2',
    );
    
    //save thumbnail if the url is valid
    $thumbnail_url = trim($lstool->thumbnail);
    if ($thumbnail_url == '' || !valid_url($thumbnail_url, TRUE)) {
      drupal_set_message(t('Either there is no thumbnail in the XML defined or the url is not valid'), 'warning');

      $form_state['storage']['field_tool_thumbnail_tmp'] = '';
    } else {
      //download the thumbnail
      
      //open Binary file for Writing
      $filename = basename($thumbnail_url);
			$full_filepath = file_directory_temp() . "/" . $filename;
      
      $ch = curl_init($thumbnail_url);
      $fp = fopen($full_filepath, 'wb');
      curl_setopt($ch, CURLOPT_FILE, $fp);
      curl_setopt($ch, CURLOPT_HEADER, 0);
      curl_exec($ch);
      curl_close($ch);
      fclose($fp);

      //check if downloaded data is a valid image
      $image_data = getimagesize(file_directory_temp() . "/" . $filename);

      if (empty($image_data) || !array_key_exists($image_data['mime'], $allowed_mime_types)) {
        drupal_set_message(t('The defined thumbnail in the XML is no valid image. Found a image of the type: '.$image_data['mime']), 'warning');

        $form_state['storage']['field_tool_thumbnail_tmp'] = '';
      } else {
      	
      	//set path in form state storage 
        $form_state['storage']['field_tool_thumbnail_tmp'] = $full_filepath;
        
        drupal_set_message(t('A thumbnail from the xml file was saved. It will be displayed after the tool was saved.'));
      }
    }
    
    //save screenshot if the url is valid
    $screenshot_url = trim($lstool->screenshot);
    if ($screenshot_url == '' || !valid_url($screenshot_url, TRUE)) {
      drupal_set_message(t('Either there is no screenshot in the XML defined or the url is not valid'), 'warning');

      $form_state['storage']['screenshot_path'] = '';
    } else {
      //download the screenshot

      //open Binary file for Writing
      $filename = basename($screenshot_url);
      $full_filepath = file_directory_temp() . "/" .$filename;

      $ch = curl_init($screenshot_url);
      $fp = fopen($full_filepath, 'wb');
      curl_setopt($ch, CURLOPT_FILE, $fp);
      curl_setopt($ch, CURLOPT_HEADER, 0);
      curl_exec($ch);
      curl_close($ch);
      fclose($fp);
      
      //check if downloaded data is a valid image
      $image_data = getimagesize($full_filepath);

      if (empty($image_data) || !array_key_exists($image_data['mime'], $allowed_mime_types)) {
        drupal_set_message(t('The defined screenshot in the XML is no valid image. Found a image of the type: '.$image_data['mime']), 'warning');

        $form_state['storage']['screenshot_path'] = '';
      } else {
        //set path in form state storage 
        $form_state['storage']['field_tool_screenshot_tmp'] = $full_filepath;
        
        drupal_set_message(t('A screenshot from the xml file was saved. It will be displayed after the tool was saved.'));
      }
    }

    //save the specification
    $form_state['storage']['specification_id'] = $form_state['values']['specification_id'];

    //rebuild the form
    $form_state['rebuild'] = TRUE;
  } else {

    //unset storage as else the form will displayed again
    unset($form_state['storage']);

    //tell Drupal we are NOT redrawing the same form
    $form_state['rebuild'] = FALSE;
  }
}

/**
 * Validates the form values; In our case: Checks if the URL is valid and
 * really contains a tool
 * @param type $node
 * @param type $form 
 */
function lstool_opensocial_validate($node, &$form) {
  //check if user entered a valid lstool url
  if (isset($node->source)) {
    $url = trim($node->source);
    if (!valid_url($url, TRUE)) {
    	drupal_add_css(drupal_get_path('module', 'lstool_opensocial') .'/lstool_opensocial.css');
      form_set_error('source', t('Invalid Url. Please enter a valid lstool url.'));
    } else {
      $response = lstool_opensocial_fetch_metadata($url);
      //check if there is an error
      if (isset($response->gadgets[0]->errors)) {
      	drupal_add_css(drupal_get_path('module', 'lstool_opensocial') .'/lstool_opensocial.css');
        form_set_error('source', t('Error: Your source URI is not a valid OpenSocial Widget. Tools engine response: ' . $response->gadgets[0]->errors[0]));
      }
    }
  }
  
}

/**
 * Returns the embed code for the tool
 * 
 * @param array $form_state
 * @param node $node
 * @return string
 */

function lstool_opensocial_embed_code_form($form_state, $node) {
	$form = array();
	
	if($node->height == 0){
		$height_string = '';
	}else{
		$height_string = 'height: '.$node->height.'px;';
	}
	
	$form['embed_code'] = array(
	    '#type' => 'textfield',
	    '#value' =>  '<iframe frameborder="no" scrolling="no" src="'.lstool_opensocial_get_embed_url($node).'" style="width:100%; '.$height_string.'"></iframe>',
		'#attributes' => array(
			'readonly' => 'readonly',
			'onclick' => 'this.select();',
		),
	  );
	return $form;
}

/**
* Returns a form element for the source uri
* @param array $form_state
* @param node $node
* @return array $form
*/
function lstool_opensocial_source_form($form_state, $node) {

	$form = array();

	$form['source'] = array(
	    '#type' => 'textfield',
	//TODO: check if this is valid!!
	    '#value' =>  $node->source,
		'#attributes' => array(
			'readonly' => 'readonly',
			'onclick' => 'this.select();',
	),
	);
	return $form;
}


function lstool_opensocial_nodeapi(&$node, $op){
	switch ($op)
	{
		case 'presave':
			//runs before update and insert
			
			if($node->field_tool_thumbnail_tmp){
				//if a thumbnail was imported from an extern source update the
				//thumbnail field
			
				//get the imagepath from the node
				$image = $node->field_tool_thumbnail_tmp;
				
				//$image = file_directory_path()."/Screen3.png";
				// Load up the CCK field
				$field = content_fields('field_tool_thumbnail', 'lstool_opensocial');
				// Load up the appropriate validators
				$validators = array_merge(filefield_widget_upload_validators($field), imagefield_widget_upload_validators($field));
				// Where do we store the files?
				$files_path = filefield_widget_file_path($field);
				// Create the file object
				$file = field_file_save_file($image, $validators, $files_path);
				// Apply the file to the node
				$node->field_tool_thumbnail = array(0 => $file);
			}

		if($node->field_tool_screenshot_tmp){
				//if a screenshot was imported from an extern source update the
				//screenshot field			
		
				//get the imagepath from the node
				$image = $node->field_tool_screenshot_tmp;
				
				//$image = file_directory_path()."/Screen3.png";
				// Load up the CCK field
				$field = content_fields('field_tool_screenshots', 'lstool_opensocial');
				// Load up the appropriate validators
				$validators = array_merge(filefield_widget_upload_validators($field), imagefield_widget_upload_validators($field));
				// Where do we store the files?
				$files_path = filefield_widget_file_path($field);
				// Create the file object
				$file = field_file_save_file($image, $validators, $files_path);
				// Apply the file to the node
				$node->field_tool_screenshots = array(0 => $file);
			}
			break;
	}
}

function lstool_opensocial_admin_form() {
	$shindigServer = getShindigServer();
	
	// Create a fieldset for the Shindig Server URL:
	$form['shindig'] = array(
		'#type' => 'fieldset',
		'#title' => t('Shindig Server URL'),
		'#description' => t('Here you can setup a custom Shindig Server. If you leave the Custom URL field empty, than the Default URL will be used instead'),
	);
	// Hidden field with the id of the server
	$form['shindig']['id'] = array(
		'#type' => 'value',
		'#value' => $shindigServer->id,
	);
	// Hidden field with the default URL
	$form['shindig']['defaultUrl'] = array(
		'#type' => 'value',
		'#value' => $shindigServer->defaultURL,
	);	
	// Item for showing the default url of the Shindig Server
	$form['shindig']['defaultUrl_display'] = array(
		'#type' => 'item',
		'#title' => t('Default Shindig Server URL'),		
		'#description' => t('The default URL of the Shindig Server. It can\'t be changed!'),
		'#value' => $shindigServer->defaultURL,
	);
	// Textfield for url of the Shindig Server
	$form['shindig']['url'] = array(
		'#type' => 'textfield',
		'#title' => t('Custom Shindig Server URL'),
		'#size' => 100,
		'#maxlengh' => 255,
		'#description' => t('The URL of the Shindig Server. A full URL sintax is required (eg. http://www.shindigserver.com)'),
		'#default_value' => $shindigServer->customURL,
	);
	
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Save Opensocial Tools Settings'),
	);
	
	return $form;
}

/**
* Validate the form.
*/
function lstool_opensocial_admin_form_validate($form, &$form_state) {
	$form_state['values']['url'] = trim($form['shindig']['#post']['url']);
	
	if ($form_state['values']['url'] && !valid_url($form_state['values']['url'], TRUE)) {
		// We notify the form API that this field has failed validation.
		form_set_error('url',	t('The Shindig Server URL is not valid.'));
	}
}

/**
* Handle post-validation form submission.
*/
function lstool_opensocial_admin_form_submit($form, &$form_state) {
	$shindigUrl = $form_state['values']['url'] ? $form_state['values']['url'] : $form_state['values']['defaultUrl'];
		
	db_query("UPDATE {shindig_server} SET customURL = '%s' WHERE id=%d", $shindigUrl, intval($form_state['values']['id']));
	
	drupal_set_message(t('The new Server Shindig URL is: %url', array('%url' => $shindigUrl)));
}

/**
 * Checks if term already exists in specified vocabulary
 *
 * If a term with the same name already exists in the vocabulary,
 * specified by $vid, the term ID tid is returned.
 * @author Sven Steudter
 * @param $name Name of term
 * @param  $vid Vocabulary ID
 * @return tid
 */
function _lstool_opensocial_get_termid_by_name($name, $vid) {
	$db_result = db_query(db_rewrite_sql("SELECT t.tid FROM {term_data} t WHERE vid = '%d' AND LOWER(t.name) = LOWER('%s')", 't', 'tid'),trim($vid), trim($name));
	$result = array();
	$term_id = db_fetch_object($db_result)->tid;

	return $term_id;
}

function lstool_opensocial_get_vocabulary_by_name($vocabulary_name) {
	$vocabs = taxonomy_get_vocabularies(NULL);
	foreach ($vocabs as $vocab_object) {
		if ($vocab_object->name == $vocabulary_name) {
			return $vocab_object;
		}
	}
	return NULL;
}

