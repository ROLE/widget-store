<?php


function ls_tool_w3c_add_file_field_to_tool_type($tool_type){
	if (!module_exists('imagefield')) {
		drupal_set_message("Was not able to register the file field for".$tool_type);
		return;
	}
	
	//add required modules
	module_load_include('inc', 'filefield', 'filefield_widget');
	module_load_include('inc', 'content', 'includes/content.crud');	

	$label = t('Tool File');
	$field_name = 'field_tool_file';
	
	//define field (copy from node export)

	$field =  array (
	    'label' => $label,
	    'field_name' => $field_name,
	    'type' => 'filefield',
	    'widget_type' => 'filefield_widget',
	    'change' => 'Change basic information',
	    'weight' => '31',
	    'file_extensions' => 'zip',
	    'progress_indicator' => 'bar',
	    'file_path' => 'lstool/w3cfiles',
	    'max_filesize_per_file' => '2M',
	    'max_filesize_per_node' => '2M',
	    'description' => '',
	    'group' => false,
	    'required' => 1,
	    'multiple' => '0',
	    'list_field' => '0',
	    'list_default' => 1,
	    'description_field' => '0',
	    'op' => 'Save field settings',
	    'module' => 'filefield',
	    'widget_module' => 'filefield',
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
	        'format' => 'default',
	        'exclude' => 0,
	      ),
	      'full' => 
	      array (
	        'format' => 'default',
	        'exclude' => 0,
	      ),
	      4 => 
	      array (
	        'format' => 'default',
	        'exclude' => 0,
	      ),
	      2 => 
	      array (
	        'format' => 'default',
	        'exclude' => 0,
	      ),
	      3 => 
	      array (
	        'format' => 'default',
	        'exclude' => 0,
	      ),
	      'token' => 
	      array (
	        'format' => 'default',
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
	