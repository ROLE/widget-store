<?php

function ls_tool_add_media_data_group_to_tool_type($tool_type){
	$group_name = 'group_media_data';
	$group_label = 'Media Data';

	$group =
	array (
	    'label' => $group_label,
	    'group_type' => 'standard',
	    'settings' => 
	array (
	      'form' => 
	array (
	        'style' => 'fieldset',
	        'description' => '',
	),
	      'display' => 
	array (
	        'description' => '',
	        'teaser' => 
	array (
	          'format' => 'fieldset',
	          'exclude' => 0,
	),
	        'full' => 
	array (
	          'format' => 'fieldset',
	          'exclude' => 0,
	),
	4 =>
	array (
	          'format' => 'fieldset',
	          'exclude' => 0,
	),
	2 =>
	array (
	          'format' => 'fieldset',
	          'exclude' => 0,
	),
	3 =>
	array (
	          'format' => 'fieldset',
	          'exclude' => 0,
	),
	        'token' => 
	array (
	          'format' => 'fieldset',
	          'exclude' => 0,
	),
	        'label' => 'above',
	),
	),
	    'weight' => '4',
	    'group_name' => $group_name,
	);

	fieldgroup_save_group($tool_type, $group);
	variable_set($group_name, $group_name);
}

function ls_tool_add_thumbnail_field_to_tool_type($tool_type){
	if (!module_exists('imagefield')) {
		drupal_set_message("Was not able to register the thumbnail field for".$tool_type);
		return;
	}

	//add required modules
	module_load_include('inc', 'imagefield', 'imagefield_widget');
	module_load_include('inc', 'filefield', 'filefield_widget');
	module_load_include('inc', 'content', 'includes/content.crud');

	$label = t('Tool Thumbnail');
	$field_name = 'field_thumbnail';

	//define field (copy from node export)
	$field = array (
    'label' => $label,
    'field_name' => $field_name,	
	    'label' => 'Tool Thumbnail',
	    'field_name' => $field_name,
	    'type' => 'filefield',
	    'widget_type' => 'imagefield_widget',
	    'change' => 'Change basic information',
	    'weight' => '3',
	    'file_extensions' => 'png gif jpg jpeg',
	    'progress_indicator' => 'bar',
	    'file_path' => 'images/thumbnails',
	    'max_filesize_per_file' => '',
	    'max_filesize_per_node' => '',
	    'max_resolution' => '110x110',
	    'min_resolution' => '110x10',
	    'custom_alt' => 0,
	    'alt' => 'Tool Thumbnail',
	    'custom_title' => 0,
	    'title_type' => 'textfield',
	    'title' => '',
	    'use_default_image' => 1,
	    'default_image_upload' => '',
	    'default_image' => 
	array (
	      'filename' => 'default_tool_thumbnail.png',
	      'filepath' => 'sites/default/files/imagefield_default_images/default_thumbnail.png',
	      'filemime' => 'image/png',
	      'source' => 'default_image_upload',
	      'destination' => 'sites/default/files/imagefield_default_images/default_thumbnail.png',
	      'filesize' => 2838,
	      'uid' => '1',
	      'status' => 1,
	      'timestamp' => 1320173801,
	      'fid' => '10',
	),
	    'description' => '',
	    'group' => 'group_media_data',
	    'required' => 0,
	    'multiple' => '0',
	    'list_field' => '0',
	    'list_default' => 1,
	    'description_field' => '0',
	    'op' => 'Save field settings',
	    'module' => 'filefield',
	    'widget_module' => 'imagefield',
	    'columns' => 
	array (
	      'fid' => 
	array (
	        'type' => 'int',
	        'not null' => false,
	        'views' => true,
	),
	      'list' => 
	array (
	        'type' => 'int',
	        'size' => 'tiny',
	        'not null' => false,
	        'views' => true,
	),
	      'data' => 
	array (
	        'type' => 'text',
	        'serialize' => true,
	        'views' => true,
	),
	),
	    'display_settings' => 
	array (
	      'weight' => '33',
	      'parent' => '',
	      'label' => 
	array (
	        'format' => 'hidden',
	),
	      'teaser' => 
	array (
	        'format' => 'image_nodelink',
	        'exclude' => 0,
	),
	      'full' => 
	array (
	        'format' => 'image_plain',
	        'exclude' => 0,
	),
	4 =>
	array (
	        'format' => 'image_plain',
	        'exclude' => 0,
	),
	2 =>
	array (
	        'format' => 'image_plain',
	        'exclude' => 0,
	),
	3 =>
	array (
	        'format' => 'image_plain',
	        'exclude' => 0,
	),
	      'token' => 
	array (
	        'format' => 'image_plain',
	        'exclude' => 0,
	),
	),
	);

	if (module_exists('imagefield_tokens')) {
		$field['alt'] = '[title]';
		$field['title'] = '[title]';
	}

	$field['type_name'] = $tool_type;

	$instances = content_field_instance_read(array('field_name' => $field_name, 'type_name' => $tool_type));

	if (count($instances) < 1) {
		// Only add the field if it doesn't exist. Don't overwrite any changes.
		content_field_instance_create($field);
		variable_set($field_name, $field_name);
	}


}

function ls_tool_add_screenshots_field_to_tool_type($tool_type){
	if (!module_exists('imagefield')) {
		drupal_set_message("Was not able to register the screenshots field for".$tool_type);
		return;
	}

	//add required modules
	module_load_include('inc', 'imagefield', 'imagefield_widget');
	module_load_include('inc', 'filefield', 'filefield_widget');
	module_load_include('inc', 'content', 'includes/content.crud');

	$label = t('Tool Screenshots');
	$field_name = 'field_screenshots';

	//define field (copy from node export)
	$field = array (
    'label' => $label,
    'field_name' => $field_name,
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'change' => 'Change basic information',
    'weight' => '6',
    'file_extensions' => 'png gif jpg jpeg',
    'progress_indicator' => 'bar',
    'file_path' => 'images/screenshots',
    'max_filesize_per_file' => '1M',
    'max_filesize_per_node' => '2M',
    'max_resolution' => '640x480',
    'min_resolution' => 0,
    'custom_alt' => 0,
    'alt' => '',
    'custom_title' => 0,
    'title_type' => 'textfield',
    'title' => '',
    'use_default_image' => 0,
    'use_default_image' => 1,
    'default_image_upload' => '',
    'default_image' => 
    array (
      'filename' => 'screenshot-none.png',
      'filepath' => 'sites/default/files/imagefield_default_images/screenshot-none.png',
      'filemime' => 'image/png',
      'source' => 'default_image_upload',
      'destination' => 'sites/default/files/imagefield_default_images/screenshot-none.png',
      'filesize' => 3883,
      'uid' => '1',
      'status' => 1,
      'timestamp' => 1320668972,
      'fid' => '2',
    ),
    'description' => '<strong>Mandatory for Competition Entries</strong>',
    'group' => 'group_media_data',
    'required' => 0,
    'multiple' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'op' => 'Save field settings',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
    'columns' => 
	array (
      'fid' => 
	array (
        'type' => 'int',
        'not null' => false,
        'views' => true,
	),
      'list' => 
	array (
        'type' => 'int',
        'size' => 'tiny',
        'not null' => false,
        'views' => true,
	),
      'data' => 
	array (
        'type' => 'text',
        'serialize' => true,
        'views' => true,
	),
	),
    'display_settings' => 
	array (
      'label' => 
	array (
        'format' => 'above',
        'exclude' => 0,
	),
      'teaser' => 
	array (
        'format' => 'image_plain',
        'exclude' => 0,
	),
      'full' => 
	array (
        'format' => 'image_plain',
        'exclude' => 0,
	),
	4 =>
	array (
        'format' => 'image_plain',
        'exclude' => 0,
	),
	2 =>
	array (
        'format' => 'image_plain',
        'exclude' => 0,
	),
	3 =>
	array (
        'format' => 'image_plain',
        'exclude' => 0,
	),
      'token' => 
	array (
        'format' => 'image_plain',
        'exclude' => 0,
	),
	),
	);

	if (module_exists('imagefield_tokens')) {
		$field['alt'] = '[title]';
		$field['title'] = '[title]';
	}

	$field['type_name'] = $tool_type;

	$instances = content_field_instance_read(array('field_name' => $field_name, 'type_name' => $tool_type));

	if (count($instances) < 1) {
		// Only add the field if it doesn't exist. Don't overwrite any changes.
		content_field_instance_create($field);
		variable_set($field_name, $field_name);
	}


}