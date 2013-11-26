<?php

/**
* Configures the wysiwyg profile for the input format: WYSIWYG - All Roles
*/
function _system_config_wysiwyg_all_roles(){
	
	//include dependencies
	include_once drupal_get_path('module', 'install_profile_api').'/core/filter.inc';
	
	
	$editor = 'tinymce';
	
	//get format id function will not create an existing format, but only get the id
	$format_id = install_add_format('WYSIWYG - All Roles');
	
	$config = array(
	    "default" => 1,
	    "user_choose" => 0,
	    "show_toggle" => 0, 
	    "theme" => 'advanced',
	    "language" => 'en',
	    "buttons" => array(
			"default" => array(
				"bold" => 1,
				"italic" => 1,
				"underline" => 1,
				"strikethrough" => 1,
				"justifyleft" => 1,
				"justifycenter" => 1,
				"justifyright" => 1,
				"justifyfull" => 1,
				"bullist" => 1,
				"numlist" => 1,
				"outdent" => 1,
				"indent" => 1,
				"undo" => 1,
				"redo" => 1,
				"link" => 1,
				"unlink" => 1,
				"cleanup" => 1,
				"cut" => 1,
				"copy" => 1,
				"paste" => 1,
				"removeformat" => 1,
			),
			"font" => array (
				"formatselect" => 1,
			),
	        "fullscreen" => array (
				"fullscreen" => 1,
			),
			"paste" => array (
				"pasteword" => 1,
			),
	    ),
	    "toolbar_loc" => 'top',
	    "toolbar_align" => 'left',
	    "path_loc" => 'bottom',
	    "resizing" => 1,
	    "verify_html" => 1,
	    "preformatted" => 0,
	    "convert_fonts_to_spans" => 1,
	    "remove_linebreaks" => 1,
	    "apply_source_formatting" => 0,
	    "paste_auto_cleanup_on_paste" => 0,
	    "block_formats" => 'p,h1,h2,h3',
	    "css_setting" => theme,
	);
	
	//create if not exists
	
	//check if input format is already defined and update it
	if (db_result(db_query("SELECT * FROM {wysiwyg} WHERE `format` = %d ", $format_id)) !== FALSE) {
		db_query("UPDATE {wysiwyg} SET editor = '%s', settings = '%s' WHERE format = %d", $editor, serialize($config), $format_id);
	}
	// otherwise insert a new record
	else {
		db_query( "INSERT INTO wysiwyg (format, editor, settings) VALUES ('%d','%s','%s')", $format_id, $editor, serialize($config));
	}
	

	
		
		
}

/**
* Configures the wysiwyg profile for the input format: WYSIWYG - Editor ROLE 
*/
function _system_config_wysiwyg_editor_role(){

	//include dependencies
	include_once drupal_get_path('module', 'install_profile_api').'/core/filter.inc';
	
	$editor = 'tinymce';

	//get format id function will not create an existing format, but only get the id
	$format_id = install_add_format('WYSIWYG - Editor ROLE');

	$config = array(
	    "default" => 1,
	    "user_choose" => 0,
	    "show_toggle" => 1,
	    "theme" => 'advanced',
	    "language" => 'en',
	    "buttons" => array(
			"default" => array(
				"bold" => 1,
				"italic" => 1,
				"underline" => 1,
				"strikethrough" => 1,
				"justifyleft" => 1,
				"justifycenter" => 1,
				"justifyright" => 1,
				"justifyfull" => 1,
				"bullist" => 1,
				"numlist" => 1,
				"outdent" => 1,
				"indent" => 1,
				"undo" => 1,
				"redo" => 1,
				"link" => 1,
				"unlink" => 1,
				"cleanup" => 1,
				"cut" => 1,
				"copy" => 1,
				"paste" => 1,
				"removeformat" => 1,
	),
			"font" => array (
				"formatselect" => 1,
	),
	        "fullscreen" => array (
				"fullscreen" => 1,
	),
			"paste" => array (
				"pasteword" => 1,
	),
	"drupal" => array(
		"imgupload" => 1,
	),
	),
	    "toolbar_loc" => 'top',
	    "toolbar_align" => 'left',
	    "path_loc" => 'bottom',
	    "resizing" => 1,
	    "verify_html" => 1,
	    "preformatted" => 0,
	    "convert_fonts_to_spans" => 1,
	    "remove_linebreaks" => 1,
	    "apply_source_formatting" => 0,
	    "paste_auto_cleanup_on_paste" => 0,
	    "block_formats" => 'p,h1,h2,h3',
	    "css_setting" => theme,
	);

	//check if input format is already defined and update it
	if (db_result(db_query("SELECT * FROM {wysiwyg} WHERE `format` = %d ", $format_id)) !== FALSE) {
		db_query("UPDATE {wysiwyg} SET editor = '%s', settings = '%s' WHERE format = %d", $editor, serialize($config), $format_id);
	}
	// otherwise insert a new record
	else {
		db_query( "INSERT INTO wysiwyg (format, editor, settings) VALUES ('%d','%s','%s')", $format_id, $editor, serialize($config));
	}
}








