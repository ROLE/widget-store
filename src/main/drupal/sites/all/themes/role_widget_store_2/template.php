<?php
// $Id: template.php,v 1.16.2.3 2010/05/11 09:41:22 goba Exp $


function role_widget_store_2_theme($existing, $type, $theme, $path) {
	$forward = array(
			'user_register' => array(
				'arguments' => array('form' => NULL),
				'template' => 'user-register', 
			),
			'user_login' =>  array(
				'arguments' => array('form' => NULL),
				'template' => 'user-login', 
			),
			
	);
	
	return array(
			'user_register' => array(
					'arguments' => array('form' => NULL),
						'template' => 'user-register', // this is the name of the template
			),
	);
}

/**
 * oVerride CAPCTHA theming
 */
function role_widget_store_2_captcha($element) {
	//return'<div class="captcha">HALLLO</div>';
	if (!empty($element['#description']) && isset($element['captcha_widgets'])) {
    $fieldset = array(
      '#type' => 'fieldset',
      '#title' => t('Captcha:'),
       '#required' => TRUE,
      '#description' => $element['#description'],
      '#children' => $element['#children'],
      '#attributes' => array('class' => 'captcha'),
    );
    
    return theme('fieldset', $fieldset);
  }
  else {
    return '<div class="captcha">'. $element['#children'] .'</div>';
  }
}

/**
 * 
 * This function handles the display of the additional content field. The HTML is also
 * build here. You can change the element-types (buttons instead of links, etc) but be aware
 * that if you change the IDs of the HTML-Elements, you also need to adjust the javascript!
 * @param $element - The mutligroup-elements containing the type-fields
 * @param $key - The key of the current element to handle
 */
function _bundle_additional_content_field_preprocess($element, $key){
	//dpm($element[$key]);

	//Handle preselection if edit-mode
      $preselect = false;
      
      foreach ($element[$key] as $type => $field) {
      	//walk over the elements in the $element-array and filter the fields 
      	if(substr($type, 0, 5) == 'field'){
      		//get the module responsible for the field. some fields save content different so
      		//the elements cannot be handled generically. If a type gets added this needs to be adjusted
      		$module = $element["#group_fields"][$type]['module'];
      		//dpm($module);
      		
      		//the switch checks the values of the supplied elements and sets (if not empty) the preselect
      		//to the respective element
      		switch($module){
      			case "filefield":
      				if($field["#value"]['fid'] != 0){
      					$preselect = $type;
      				}
      			break;
      			
      			case "link":
      				if($field["#value"]['url'] != ''){
      					$preselect = $type;
      				}
      			break;
      			
      			case "emvideo":
      				if($field["value"]['#value'] != ''){
      					$preselect = $type;
      				}
      			break;
      			
     		}
      	}
      }

      //the variable containing the html-output
      $tmp = '';
      
      //if there is no preselection the field must be empty. Thus we need UI-elements for choosing the
      //desired type of the additional content
      if(!$preselect){
      	//insert a loading-animation. this needs to be there because drupal is re-rendering the elements
      	//each time another element is added via "add more values" and drupal isnt firing any events when
      	//this is done. so we set a timeout in javascript that triggers post-processing of the element
      	$tmp .= '<div id="group_additional_content_'.$key.'_load" style="display: block;">'
      				.'<img src="/sites/all/themes/fusion/role_widget_store/images/loading.gif" />'
      			.'</div>';
      			
      	$tmp .= '<div id="group_additional_content_'.$key.'_switch_container" style="display: none;">';
      	
      		$tmp .= '<strong>';
      			$tmp .= t('Please choose the type of content: ');
      		$tmp .= '</strong>';
      	
      	//add switches for the available content-types
      	$btns = array();
      	foreach ($element[$key] as $type => $field) {
      		//every field has a title and description which are implemented as separate fields. those need
      		//no buttons so: skip 'em
      		if(substr($type, 0, 5) == 'field' && $field['#field_name'] != 'field_additional_content_descrip' && $field['#field_name'] != 'field_additional_content_title'){
      		  	//if you don't want to have text-links as switch-buttons, this is the place to change it
        		$btns[] = '<a id="'.$type.'_'.$key.'-switch" class="group_additional_content_switch" href="javascript:;">'.$field['#title'].'</a>';
      		}
      	}
      	$tmp .= implode(' | ', $btns);
      	
      	$tmp .= '</div>';
      }
      
      foreach ($element[$key] as $type => $field) {
      	if(substr($type, 0, 5) == 'field'){
      		//now the fields for each type itself are getting rendered. Here goes some hardcore-filtering. The field is added if:
      		// - The field-type equals the preselected type (case:edit)
      		// - There is no preselection (case:new field)
      		// - The field is title or description (will be always available, empty or not) 
      		if($preselect == $type || $preselect === false || ($field['#field_name'] == 'field_additional_content_descrip') || ($field['#field_name'] == 'field_additional_content_title')){
      			//additionally the visibilites of the elements are being set. basically: if the element is not empty (case:edit) 
      			//or it's the title or description the field is being shown
        		$tmp .= '<div style="display: '.( ($preselect == $type || ($field['#field_name'] == 'field_additional_content_descrip' && $preselect !== false) || ($field['#field_name'] == 'field_additional_content_title' && $preselect !== false)) ? 'block' : 'none' ).';" id="'.$type.'_'.$key.'-container">'
        					.drupal_render($field)
        				.'</div>';
      		}
      	}
      }
      //assembly of one of the elements		
      $tmp = '<div class="group_additional_content_item">'.$tmp.'</div>';
      //this js is added to handle the UI-behavior of the elements. Yes, we're working with a timeout because (already said) drupal
      //isn't firing any events when it's done with it's re-rendering crap
      $tmp .= '<script type="text/javascript">window.setTimeout("bundle_artefact_initItems()", 500);</script>';
      
      return $tmp;
}


/**
 * Theme an individual form element.
 *
 * Combine multiple values into a table with drag-n-drop reordering.
 */

function role_widget_store_2_content_multigroup_node_form($element) {
	
  $group_name = $element['#group_name'];
  $groups = fieldgroup_groups($element['#type_name']);
  $group = $groups[$group_name];
  $group_multiple = $group['settings']['multigroup']['multiple'];
  $group_fields = $element['#group_fields'];

  $table_id = $element['#group_name'] .'_values';
  $table_class = 'content-multiple-table';
  $order_class = $element['#group_name'] .'-delta-order';
  $subgroup_settings = isset($group['settings']['multigroup']['subgroup']) ? $group['settings']['multigroup']['subgroup'] : array();
  $show_label = isset($subgroup_settings['label']) ? $subgroup_settings['label'] : 'above';
  $subgroup_labels = isset($group['settings']['multigroup']['labels']) ? $group['settings']['multigroup']['labels'] : array();
  $multiple_columns = isset($group['settings']['multigroup']['multiple-columns']) ? $group['settings']['multigroup']['multiple-columns'] : 0;
  
  $headers = array();
  if ($group_multiple >= 1) {
    $headers[] = array('data' => '');
  }
  if ($multiple_columns) {
    foreach ($group_fields as $field_name => $field) {
      $required = !empty($field['required']) ? '&nbsp;<span class="form-required" title="'. t('This field is required.') .'">*</span>' : '';
      $headers[] = array(
        'data' => check_plain(t($field['widget']['label'])) . $required,
        'class' => 'content-multigroup-cell-'. str_replace('_', '-', $field_name),
      );
    }
    $table_class .= ' content-multigroup-edit-table-multiple-columns';
  }
  else {
    if ($group_multiple >= 1) {
      $headers[0]['colspan'] = 2;
    }
    $table_class .= ' content-multigroup-edit-table-single-column';
  }
  if ($group_multiple >= 1) {
    $headers[] = array('data' => t('Order'), 'class' => 'content-multiple-weight-header');
    if ($group_multiple == 1) {
      $headers[] = array('data' => '<span>'. t('Remove') .'</span>', 'class' => 'content-multiple-remove-header');
    }
  }
  $rows = array();

  $i = 0;
  foreach (element_children($element) as $delta => $key) {
    if (is_numeric($key)) {
      $cells = array();
      $label = ($show_label == 'above' && !empty($subgroup_labels[$i]) ? theme('content_multigroup_node_label', check_plain(t($subgroup_labels[$i]))) : '');
      $element[$key]['_weight']['#attributes']['class'] = $order_class;
      if ($group_multiple >= 1) {
        $cells[] = array('data' => '', 'class' => 'content-multiple-drag');
        $delta_element = drupal_render($element[$key]['_weight']);
        if ($group_multiple == 1) {
          $remove_element = drupal_render($element[$key]['_remove']);
        }
      }
      else {
        $element[$key]['_weight']['#type'] = 'hidden';
      }
      if ($multiple_columns) {
        foreach ($group_fields as $field_name => $field) {
          $cell = array(
            'data' => (isset($element[$key][$field_name]) ? drupal_render($element[$key][$field_name]) : ''),
            'class' => 'content-multigroup-cell-'. str_replace('_', '-', $field_name),
          );
          if (!empty($cell['data']) && !empty($element[$key][$field_name]['#description'])) {
            $cell['title'] = $element[$key][$field_name]['#description'];
          }
          $cells[] = $cell;
        }
      }
      else {
      	/* #################################CUSTOM###################################### */
      	if($element["#group_name"] == 'group_additional_content'){
      		$field = _bundle_additional_content_field_preprocess($element, $key);
	      	
	      	$cells[] = $label . $field;
      	}else if($element["#group_name"] == 'group_bundle_tools'){
      		//dpm($element);
      		$cells[] = $label . drupal_render($element[$key]);
      	}else{
      		$cells[] = $label . drupal_render($element[$key]);
      	}
      }
      if ($group_multiple >= 1) {
        $row_class = 'draggable';
        $cells[] = array('data' => $delta_element, 'class' => 'delta-order');
        if ($group_multiple == 1) {
          if (!empty($element[$key]['_remove']['#value'])) {
            $row_class .= ' content-multiple-removed-row';
          }
          $cells[] = array('data' => $remove_element, 'class' => 'content-multiple-remove-cell');
        }
        $rows[] = array('data' => $cells, 'class' => $row_class);
      }
      else {
        $rows[] = array('data' => $cells);
      }
    }
    $i++;
  }

  drupal_add_css(drupal_get_path('module', 'content_multigroup') .'/content_multigroup.css');
  if($group_name != 'group_additional_content'){
  	$output = theme('table', $headers, $rows, array('id' => $table_id, 'class' => $table_class));
  }else{
  	$output = role_widget_store_2_group_additional_content($headers, $rows, array('id' => $table_id, 'class' => $table_class));
  }
 $output .= drupal_render($element[$group_name .'_add_more']);

  // Enable drag-n-drop only if the group really allows multiple values.
  if ($group_multiple >= 1) {
    drupal_add_tabledrag($table_id, 'order', 'sibling', $order_class);
    drupal_add_js(drupal_get_path('module', 'content') .'/js/content.node_form.js');
  }

  return $output;
}

function role_widget_store_2_group_additional_content($headers, $rows, $vars){
	//return '<pre>'.htmlentities(print_r($rows, true)).'</pre>';
	return theme('table', $headers, $rows, $vars);
}


/**
 * Page preprocessing
 */

function role_widget_store_2_preprocess_page(&$vars) {
  global $user;

  $vars['catalogues_links'] = menu_navigation_links('menu-catalogues');

  if ($user->uid) {
    $image_path_logout = drupal_get_path('theme', 'role_widget_store_2')
        . '/images/logout.png';
    $image_html_tag_logout = theme_image($image_path_logout, $alt = 'Logout',
        $title = 'Logout', NULL, TRUE);
    $vars['user_info'] = l('<div>Logout</div>' . $image_html_tag_logout,
        'logout', array(
          'html' => true
        )) . theme('username', $user);
  } else {
    $vars['user_info'] = "";
  }
  
  //prepare page sharing bar
  global $base_root;
	$vars['page_path'] = $base_root."/" .drupal_get_path_alias($_GET['q']);
	
	if ($vars['node']->type == "lstool_opensocial") {
		$vars['title_flag_text'] = "opensocial";
	} elseif ($vars['node']->type == "lstool_w3c") {
		$vars['title_flag_text'] = "w3c";
	} elseif ($vars['node']->type == "bundle") {
		$vars['title_flag_text'] = "bundle";
	}elseif ($vars['node']->type == "web_tool") {
		$vars['title_flag_text'] = "web tool";
	}else{
		$vars['title_flag_text'] = "";
	}
	
}
/**
 * Node preprocessing
 */
function role_widget_store_2_preprocess_node(&$vars) {

  global $theme_key;

  if ($theme_key == "role_widget_store_2_embedded") {
    $vars['isEmbedded'] = true;
  } else {
    $vars['isEmbedded'] = false;
  }
  
  if ($theme_key == "role_widget_store_2_embedded_v2") {
  	$vars['isEmbedded_v2'] = true;
  } else {
  	$vars['isEmbedded_v2'] = false;
  }
  
  //add new region between node content and comments 
  $vars['above_comments'] = theme('blocks', 'above_comments');
  
}

/**
 * Block preprocessing
 */
function role_widget_store_2_preprocess_block(&$vars) {

  $image_path = drupal_get_path('theme', 'role_widget_store_2')
      . '/images/widget_icon.png';

  $vars['block_icon'] = theme_image($image_path, $alt = 'Tool',
      $title = 'Tool', NULL, TRUE);
}

function role_widget_store_2_apachesolr_mlt_recommendation_block($docs, $delta) {
 
  $arguments = "";
  
  for($i = 0; $i<$docs.lenght; $i++) {
    
    $arguments .= $result->nid;
    
    if($i<$docs.lenght-1){
      $arguments .= "+";
    }
  }
  
  $view_args = array($arguments);
  $display_id = 'default';
  $view = views_get_view('block_node_recommendation');
  
  $screenshot_view = $view->execute_display($display_id, $view_args);

  return $screenshot_view;
}

/**
 * Override or insert PHPTemplate variables into the search_theme_form template.
 *
 * @param $vars
 *   A sequential array of variables to pass to the theme template.
 * @param $hook
 *   The name of the theme function being called (not used in this case.)
 */
/*function role_widget_store_preprocess_search_theme_form(&$vars, $hook) {
  // Note that in order to theme a search block you should rename this function
  // to yourthemename_preprocess_search_block_form and use
  // 'search_block_form' instead of 'search_theme_form' in the customizations
  // bellow.

  // Modify elements of the search form
  $vars['form']['search_theme_form']['#title'] = t('Search');

  // Set a default value for the search box
  $default_search_value = '';
  $vars['form']['search_theme_form']['#value'] = $default_search_value;

  // Add a custom class and placeholder text to the search box
  $vars['form']['search_theme_form']['#attributes'] = array(
      'class' => 'NormalTextBox txtSearch',
      'onfocus' => "if (this.value == '" . $default_search_value
          . "') {this.value = '';}",
      'onblur' => "if (this.value == '') {this.value = '"
          . $default_search_value . "';}"
  );

  // Change the text on the submit button
  //$vars['form']['submit']['#value'] = t('Go');

  // Rebuild the rendered version (search form only, rest remains unchanged)
  unset($vars['form']['search_theme_form']['#printed']);
  $vars['search']['search_theme_form'] = drupal_render(
      $vars['form']['search_theme_form']);

  $vars['form']['submit']['#type'] = 'image_button';
  $vars['form']['submit']['#src'] = path_to_theme()
      . '/images/search_button.png';

  // Rebuild the rendered version (submit button, rest remains unchanged)
  unset($vars['form']['submit']['#printed']);
  $vars['search']['submit'] = drupal_render($vars['form']['submit']);

  //add hidden elements
  $vars['search']['hidden'] .= '<input type="hidden" name="type[ls_tools]" id="edit-type-ls_tools" value="ls_tools" />';

  // Collect all form elements to make it easier to print the whole form.
  $vars['search_form'] = implode($vars['search']);

}*/


function role_widget_store_2_preprocess_search_block_form(&$vars, $hook) {
	// Note that in order to theme a search block you should rename this function
	// to yourthemename_preprocess_search_block_form and use
	// 'search_block_form' instead of 'search_theme_form' in the customizations
	// bellow.
  /*
	// Modify elements of the search form
	$vars['form']['search_block_form']['#title'] = t('');
	$vars['form']['search_block_form']['#size'] = 35;
	// Set a default value for the search box
	$default_search_value = '';
	$vars['form']['search_block_form']['#value'] = $default_search_value;

	// Add a custom class and placeholder text to the search box
	$vars['form']['search_block_form']['#attributes'] = array(
			'class' => 'NormalTextBox txtSearch',
			'onfocus' => "if (this.value == '" . $default_search_value
			. "') {this.value = '';}",
			'onblur' => "if (this.value == '') {this.value = '"
			. $default_search_value . "';}"
	);

	// Rebuild the rendered version (search form only, rest remains unchanged)
	unset($vars['form']['search_block_form']['#printed']);
	$vars['search']['search_block_form'] = drupal_render(
			$vars['form']['search_block_form']);

	$vars['form']['submit']['#type'] = 'image_button';
	$vars['form']['submit']['#src'] = 'sites/all/themes/fusion/role_widget_store_2/images/search_button.jpg';

	// Rebuild the rendered version (submit button, rest remains unchanged)
	unset($vars['form']['submit']['#printed']);
	$vars['search']['submit'] = drupal_render($vars['form']['submit']);

	//add hidden elements
	$vars['search']['hidden'] .= '<input type="hidden" name="type[ls_tools]" id="edit-type-ls_tools" value="ls_tools" />';

	// Collect all form elements to make it easier to print the whole form.
	$vars['search_form'] = implode($vars['search']);
	*/
}



/**
 * Return a themed set of links.
 *
 * @param $links
 *   A keyed array of links to be themed.
 * @param $attributes
 *   A keyed array of attributes
 * @return
 *   A string containing an unordered list of links.
 */
/*function role_widget_store_2_links($links,
    $attributes = array(
      'class' => 'links'
    )) {
  global $language;
  $output = '';

  $org = $_GET['q'];

  if (substr($org, 0, 6) == "ls_tools") {
    menu_set_active_item('ls_tools_categories'); // nid is taken from primary links
  }

  if (count($links) > 0) {
    $output = '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = $key;

      // Add active class for containing <li> and <a> if 'active-trail' is set
      // on the link itself.
      if (isset($link['href']) && strpos($class, 'active-trail') !== FALSE) {
        $class .= ' active';
        $link['attributes']['class'] .= ' active';
      }

      // Add images for the tool / bundle menu DHD
      if ($attributes['class'] == 'links catalogues-links') {
        if ($link['title'] == "Tools") {
          $image_path = drupal_get_path('theme', 'role_widget_store_2')
              . '/images/widget_icon.png';
          $image_html_tag = theme_image($image_path, $alt = 'Tools',
              $title = 'Tools', NULL, TRUE);
          $link['title'] = $image_html_tag . $link['title'];
        } else if ($link['title'] == "Bundles") {
          $image_path = drupal_get_path('theme', 'role_widget_store_2')
              . '/images/bundle_icon.png';
          $image_html_tag = theme_image($image_path, $alt = 'Bundles',
              $title = 'Bundles', NULL, TRUE);
          $link['title'] = $image_html_tag . $link['title'];
        }
      }

      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class .= ' first';
      }
      if ($i == $num_links) {
        $class .= ' last';
      }
      if (isset($link['href'])
          && ($link['href'] == $_GET['q']
              || ($link['href'] == '<front>' && drupal_is_front_page()))
          && (empty($link['language'])
              || $link['language']->language == $language->language)) {
        $class .= ' active';
      }

      $output .= '<li' . drupal_attributes(array(
            'class' => $class
          )) . '>';

      if (isset($link['href'])) {

        // Pass in $link as $options, they share the same keys.
        if ($attributes['class'] == 'links catalogues-links') {
          $link['html'] = true;
        }

        $output .= l($link['title'], $link['href'], $link);

      } else if (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title']
            . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  // set original value
  menu_set_active_item($org);

  return $output;
}*/

function role_widget_store_2_print_terms($node, $vname = NULL,
    $ordered_list = TRUE) {
  $vocabularies = taxonomy_get_vocabularies();
  $empty = TRUE;

  if ($ordered_list)
    $output .= '<ul>';
  //checks to see if you want an ordered list
  if ($vname) { //checks to see if you've passed a number with vname, prints just that vname
    $output = '<div class="tags tags-' . $vname . '">';
    foreach ($vocabularies as $vocabulary) {
      if ($vocabulary->name == $vname) {
        $terms = taxonomy_node_get_terms_by_vocabulary($node, $vocabulary->vid);
        if ($terms) {
          $links = array();
          $output .= '<span class="only-vocabulary-' . $vocabulary->vid . '">';
          if ($ordered_list)
            $output .= '<li class="vocabulary-' . $vocabulary->vid . '">';
          foreach ($terms as $term) {
            $empty = FALSE;
            $links[] = '<span class="term-' . $term->tid . '">'
                . l($term->name, taxonomy_term_path($term),
                    array(
                      'rel' => 'tag', 'title' => strip_tags($term->description)
                    )) . '</span>';
          }
          $output .= implode(', ', $links);
          if ($ordered_list)
            $output .= '</li>';
          $output .= '</span>';
        }
      }
    }
  } else {
    $output = '<div class="tags">';
    foreach ($vocabularies as $vocabulary) {
      if ($vocabularies) {
        $terms = taxonomy_node_get_terms_by_vocabulary($node, $vocabulary->vid);
        if ($terms) {
          $links = array();
          $output .= '<ul class="vocabulary-' . $vocabulary->vid . '">';
          if ($ordered_list)
            $output .= '<li class="vocabulary-' . $vocabulary->vid . '">'
                . $vocabulary->name . ': ';
          foreach ($terms as $term) {
            $empty = FALSE;
            $links[] = '<span class="term-' . $term->tid . '">'
                . l($term->name, taxonomy_term_path($term),
                    array(
                      'rel' => 'tag', 'title' => strip_tags($term->description)
                    )) . '</span>';
          }
          $output .= implode(', ', $links);
          if ($ordered_list)
            $output .= '</li>';
          $output .= '</ul>';
        }
      }
    }
  }
  
  if ($ordered_list){
    $tmp .= '</ul>';
  }
  
  if ($empty) {
    $output .= t("No terms available");
  }  
  
  $output .= '</div>';
   
  return $output;
}

function role_widget_store_2_bundle_print_terms($node, $strVocabularyName = NULL,
    $ordered_list = TRUE) {
  // if we aren't on bundle node, we don't process anything
  if ($node->type != "bundle") {
    return false;
  }
  $vocabularies = taxonomy_get_vocabularies();
  $arrResult = array();

  if ($strVocabularyName) {
    foreach ($vocabularies as $vocabulary) {
      if ($vocabulary->name == $strVocabularyName) {
        // get all the unique terms for all the asociated tools

        foreach ($node->field_bundle_tool as $tool_reference) {
          $tmp_node = new stdClass();
          $tmp_node->vid = $tool_reference['nid'];
          $arrTerms = taxonomy_node_get_terms_by_vocabulary($tmp_node,
              $vocabulary->vid);

          if (is_array($arrTerms) && count($arrTerms)) {
            foreach ($arrTerms as $key => $term) {
              $arrResult[$key] = '<span class="term-' . $term->tid . '">'
                  . l($term->name, taxonomy_term_path($term),
                      array(
                          'rel' => 'tag',
                          'title' => strip_tags($term->description)
                      )) . '</span>';
            }
          }

        }

        // we found the vocabulary we need, no further searches are necessary
        break;
      }
    }
  }

  $output = '';

  // build the output only if we found any terms
  if (count($arrResult)) {
    if ($strVocabularyName) {
      $output .= '<div class="tags tags-' . $strVocabularyName . '">';
      if ($ordered_list) {
        $output .= '<ul>';
        foreach ($arrResult as $value) {
          $output .= '<li>' . $value . '</li>';
        }
        $output .= '</ul>';
      } else {
        $output .= implode(', ', $arrResult);
      }
      $output .= '</div>';
    }
  }
  
  if( $output == ''){
    return t("No terms available");
  }

  return $output;
}

/**
 * Format a tool's thumbnail.
 *
 * @ingroup themeable
 */
function role_widget_store_2_ls_tools_thumbnail($node, $teaser) {

  //TODO: check why teaser is not transmitted correct

  $node_url = drupal_lookup_path('alias', "node/" . $node->nid);

  $image_url = $node->ls_tools_thumbnail_path;

  if ($image_url == "") {
    $image_url = drupal_get_path('theme', 'role_widget_store_2')
        . '/images/thumbnail-none.png';
  }

  $image_html = theme_image($image_url, $alt = 'Create Tools',
      $title = 'Create Tools', NULL, FALSE);

  if ($teaser) {
    $output = '<div class="ls_tools-thumbnail">';
    $output .= '<a href="/' . $node_url . '">';
    $output .= '<div class="ls_tools-thumbnail-overlay"></div>';
    $output .= '<div class="ls_tools-thumbnail-overlay-top"></div>';
    $output .= '<div class="ls_tools-thumbnail-overlay-mid"></div>';
    $output .= '<div class="ls_tools-thumbnail-overlay-bottom"></div>';
    $output .= $image_html;
    $output .= '</a>';
    $output .= '</div>';
  } else {
    $output = '<div class="ls_tools-thumbnail">';
    $output .= '<div class="ls_tools-thumbnail-overlay"></div>';
    $output .= '<div class="ls_tools-thumbnail-overlay-top"></div>';
    $output .= '<div class="ls_tools-thumbnail-overlay-mid"></div>';
    $output .= '<div class="ls_tools-thumbnail-overlay-bottom"></div>';
    $output .= $image_html;
    $output .= '</div>';
  }

  return $output;
}
/**
 * Implements hook_preprocess_views_view().
 */
function role_widget_store_2_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  // Load the blog.js javascript file when showing the Blog view's page display.
  if ($view->name == 'tool_coverflow') {
    $theme = "role_widget_store";
    drupal_add_js(drupal_get_path('theme', $theme) . '/js/jquery-ui.min.js',
        'theme', 'footer', FALSE, TRUE, FALSE);
    drupal_add_js(
        drupal_get_path('theme', $theme) . '/js/jquery.mousewheel.min.js',
        'theme', 'footer', FALSE, TRUE, FALSE);
    drupal_add_js(
        drupal_get_path('theme', $theme) . '/js/jquery.coverflip.js', 'theme',
        'footer', FALSE, TRUE, FALSE);
    drupal_add_js(drupal_get_path('theme', $theme) . '/js/script.js', 'theme',
        'footer', FALSE, TRUE, FALSE);
  }
}

function drupalicious_summarise($paragraph, $limit) {
  $textfield = strtok($paragraph, " ");
  while ($textfield) {
    $text .= " $textfield";
    $words++;
    if (($words >= $limit)
        && ((substr($textfield, -1) == "!") || (substr($textfield, -1) == "."))) {
      break;
    }
    $textfield = strtok(" ");
  }
  return ltrim($text);
}

// implementation of theme_filefield_icon(), use our own icon set
function role_widget_store_2_filefield_icon($file) {
    global $base_url;
    if (is_object($file)) {
        $file = (array) $file;
    }
    $icon_url = $base_url . '/' . role_widget_store_2_icon_url( $file );
    
    $mime = check_plain($file['filemime']);
    
    $dashed_mime = strtr($mime, array('/' => '-'));
    
    $icon = '<img class="field-icon-'. $dashed_mime .'"  alt="'. $mime .' icon" src="'. $icon_url .'" />';
    
    return '<a href="'.$file['filepath'].'" class="filefield-icon field-icon-'. $dashed_mime .'">'. $icon .'</a>';
}

// return a URL for an icon matching this file's type
function role_widget_store_2_icon_url( $file ){
    $ext = strtr($file['filemime'], array('/' => '_'));
    //$ext = strtolower( pathinfo( $file['filename'], PATHINFO_EXTENSION ) );
    $dir = path_to_theme() . '/images/icons/128x128/';
    $icon = $dir . $ext . '.png';
    return file_exists( $icon ) ? $icon : ( $dir . 'empty.png' ); // use generic "file" icon if unable to match extension
}


