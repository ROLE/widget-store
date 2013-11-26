<?php

/**
 * configure the captcha forms
 *
 */
function _system_config_set_themekey_properties() {
	// template 
	$data_basic = array(
			'property' => '',
			'operator' => '=',
			'value' => '',
			'weight' => 0,
			'theme' => '',
			'enabled' => 1,
			'wildcards' => array(),
			'parent' => 0
			
	);
	
	
	$data_basic['property'] = 'system:host';
	$data_basic['value'] = 'embedded.role-widgetstore.eu';
	$data_basic['weight'] = -50;
	$data_basic['theme'] = 'role_widget_store_embedded';
	drupal_write_record('themekey_properties', $data_basic);
	
	$data_basic['property'] = 'system:host';
	$data_basic['value'] = 'embeddedv2.role-widgetstore.eu';
	$data_basic['weight'] = -49;
	$data_basic['theme'] = 'role_widget_store_embedded_v2';
	drupal_write_record('themekey_properties', $data_basic);
	
	$data_basic['property'] = 'system:query_param';
	$data_basic['value'] = 'theme=role_widget_store_embedded';
	$data_basic['weight'] = -48;
	$data_basic['theme'] = 'role_widget_store_embedded';
	drupal_write_record('themekey_properties', $data_basic);
	
	$data_basic['property'] = 'system:query_param';
	$data_basic['value'] = 'theme=role_widget_store';
	$data_basic['weight'] = -47;
	$data_basic['theme'] = 'role_widget_store';
	drupal_write_record('themekey_properties', $data_basic);
	
	$data_basic['property'] = 'system:query_param';
	$data_basic['value'] = 'theme=role_widget_store_embedded_v2';
	$data_basic['weight'] = -46;
	$data_basic['theme'] = 'role_widget_store_embedded_v2';
	drupal_write_record('themekey_properties', $data_basic);
	
	$data_basic['property'] = 'system:dummy';
	$data_basic['value'] = 'dummy';
	$data_basic['weight'] = -45;
	$data_basic['theme'] = 'default';
	drupal_write_record('themekey_properties', $data_basic);
}

