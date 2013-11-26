<?php
/**
* Set the input format and filters
*/
function _system_config_set_input_formats(){
	
	//include dependencies
	include_once drupal_get_path('module', 'install_profile_api').'/core/filter.inc';
	include_once drupal_get_path('module', 'install_profile_api').'/core/user.inc';
	
	$anonymous_user_rid = install_get_rid('anonymous user');
	$authenticated_user_rid = install_get_rid('authenticated user');
	$editor_user_rid = install_get_rid('editor');
	$manager_rid = install_get_rid('manager');
	$moderator_rid = install_get_rid('moderator');
	$partner_rid = install_get_rid('partner');
	$reviewer_rid = install_get_rid('reviewer');
	$services_rid = install_get_rid('services');
	
	
	// Filtered HTML Format
	// Add Format if not already exists
	$filtered_html_format = install_add_format('Filtered HTML', '1');
	
	// Set roles which are allowed to use that format
	install_format_set_roles(
		array ( 
			$anonymous_user_rid, 
			$authenticated_user_rid, 
			$editor_user_rid, 
			$manager_rid, 
			$moderator_rid,
			$partner_rid, 
			$reviewer_rid, 
			$services_rid,
		), 
		$filtered_html_format
	);
	
	// set active filter
	install_set_filter($filtered_html_format, 'filter', '0', '-9');
	install_set_filter($filtered_html_format, 'recaptcha_mailhide', '0', '-8');
	install_set_filter($filtered_html_format, 'filter', '1', '-7');
	install_set_filter($filtered_html_format, 'filter', '2', '-6');
	install_set_filter($filtered_html_format, 'wysiwyg_imageupload', '0', '10');
	
	
	// Full HTML Format
	// Add Format if not already exists
	$full_html_format = install_add_format('Full HTML', '1');
	
	// Set roles which are allowed to use that format
	install_format_set_roles(
		array (), 
		$full_html_format
	);
	
	// set active filter
	install_set_filter($full_html_format, 'filter', '2', '0');
	install_set_filter($full_html_format, 'filter', '1', '1');
	install_set_filter($full_html_format, 'filter', '3', '10');
	install_set_filter($full_html_format, 'wysiwyg_imageupload', '0', '10');
	
	
	// WYSIWYG ALL Format
	// Add Format if not already exists
	$wysiwyg_all_format = install_add_format('WYSIWYG - All Roles', '1');
	
	// Set roles which are allowed to use that format
	install_format_set_roles(
		array ( 
			$anonymous_user_rid, 
			$authenticated_user_rid, 
			$editor_user_rid, 
			$manager_rid, 
			$moderator_rid,
			$partner_rid, 
			$reviewer_rid, 
			$services_rid,
		), 
		$wysiwyg_all_format
	);
	
	// set active filter
	install_set_filter($wysiwyg_all_format, 'filter', '2', '-6');
	install_set_filter($wysiwyg_all_format, 'wysiwyg_imageupload', '0', '10');
	
	
	// WYSIWYG Editor Format
	// Add Format if not already exists
	$wysiwyg_editor_format = install_add_format('WYSIWYG - Editor ROLE', '1');
	
	// Set roles which are allowed to use that format
	install_format_set_roles(
		array ( 
			$editor_user_rid,
		), 
		$wysiwyg_editor_format
	);
	
	// set active filter
	install_set_filter($wysiwyg_editor_format, 'filter', '2', '-6');
	install_set_filter($wysiwyg_editor_format, 'wysiwyg_imageupload', '0', '10');
}


























