<?php

include 'widget_store.profile.lib.php';

/********************************
 *           DETAILS            *
 ********************************/
function widget_store_profile_details() {
  return array ( 
  	'name'			=> 'ROLE Widget Store +', 
  	'description'	=> '<b>UPDATED VERSION:</b> This Installation Profile provides a basic Installation of the ROLE Widget Store 2 on your machine. It is not complete yet. Thus it\'s recommended to check the <b>installation-manual.pdf</b> in <b>role/installation/installation-manual/installation-manual.pdf</b>.' 
  );
}//widget_store_profile_details()

/**
 * Implementation of hook_form_alter().
 *
 * Allows the profile to alter the site-configuration form. This is
 * called through custom invocation, so $form_state is not populated.
 */
function widget_store_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'install_configure') {
    // Set default for site name field.
    $form['site_information']['site_name']['#default_value'] = "ROLE Widget Store";
    $form['site_information']['site_mail']['#default_value'] = "info@role-widgetstore.eu";
    
    $form['admin_account']['account']['name']['#default_value'] = "admin";
    $form['admin_account']['account']['mail']['#default_value'] = "admin@role-widgetstore.eu";
  }
}

/********************************
 *           MODULES            *
 ********************************/
function widget_store_profile_modules() {
	return array (
	
	//A ----------------------
		'admin_menu', 'ahah_response',  'apachesolr',  'apachesolr_autocomplete',  'apachesolr_search', 'apachesolr_empty_query', 'autoload',
	//B  ----------------------
		'better_formats',  'block',  'blocks404', 
	//C ----------------------
		'captcha',  'comment',  'computed_field', 'content',  'content_access',  'content_copy', 'content_multigroup', 'content_permissions',  
			'ctools',  'custom_search',  'custom_search_taxonomy',
	//D  ----------------------
		'devel',  'drupalwiki_imageselect_element', 
	//E ----------------------
		'emfield', 'emvideo', 'errors',
	//F ----------------------
		'faq',  'faq_ask',  'fieldgroup',  'filefield',  'filter', 'fivestar',  'fivestar_comment', 
	//G  ----------------------
		'googleanalytics',
	//I  ----------------------
		'imageapi',  'imageapi_gd',  'imagecache',  'imagecache_canvasactions',  'imagecache_coloractions',  'imagecache_ui',  
			'imagefield',  'install_profile_api',
	//J  ----------------------
		'jcarousel',  'jquery_ui',  'jquery_ui_dialog',  'jquery_update',
	//L  ----------------------
		'lightbox2',  'link',  'logintoboggan',
	//M  ----------------------
		'me', 'media_hulu', 'media_vimeo', 'media_youtube',  'menu', 'menu_html',  'menutrails',  'modalframe', 'multistep',
	//N  ----------------------
		'node',  'node_export',  'nodereference',  'nodereference_explorer',
	//O  ----------------------
		'optionwidgets', 'onbeforeunload',
	//P  ----------------------
		'page_manager',  'panels',  'panels_ipe',  'path',  'pathauto',  'profile',  'publishcontent',
	//R  ----------------------
		'rdf_taxonomy_import', 'recaptcha',  'recaptcha_mailhide',  'rest_server',  'rules',  
		'rules_admin',
	//S ----------------------
		'search',  'services', 'skinr',  'skip_validation',  'switchtheme',  'system',
	//T ---------------------- 
		'tabs',  'taxonomy',  'taxonomy_access',  'taxonomy_guid',  'taxonomy_image',  'taxonomy_manager',  
			'taxonomy_super_select',  'taxonomy_machine_names',
			'taxonomy_tag_suggestor',  'text', 'themekey', 'themekey_properties', 'themekey_ui','token',  'tokenSTARTER',  'token_actions',
	//U  ----------------------
		'update',  'upload',  'user', 'uuid',
	//V  ----------------------
		'views',  'views_content',  'views_customfield',  'views_ui',  'views_ui_basic',  'votingapi',
	//W  ----------------------
		'workflow',  'workflow_access',  'wysiwyg',  'wysiwyg_imageupload',  'wysiwyg_imageupload_browser',  

		'wysiwyg_imageupload_lightbox', 
		
		'flexifield',
		
		 'lstool', 'lstool_opensocial',  'lstool_w3c', 'bundle', 'ls_rest_resources', 'widget_contest',
		 'system_components', 'user_report', 'taxonomy_machine_names',
		
	);
}//widget_store_profile_modules()

/*
 * =Additional Modules=
 * These low-priority Modules need to be enabled later in the installation-process.
 */

function _widget_store_profile_additional_modules(){
	$modules = array(
		'system_config'
	);
	
	module_enable($modules);
}


/********************************
 *            TASKS             *
 ********************************/
function widget_store_profile_tasks() {
	ini_set('max_execution_time', '0'); // 0 = no limit.

	
	/********************************
	 *     INSTALL PROFILE API      *
	 ********************************/
	install_include(widget_store_profile_modules());
	

	/********************************
	*     INSTALL RDF      *
	********************************/
	$modules = array(
				  	'simplerdf', 'simplerdf_custom_fields', 'simplerdf_namespaces', 'simplerdf_taxonomy', 'simplerdf_view' 
	);
	
	drupal_install_modules($modules);
	module_enable($modules);
	
	/********************************
	 *            ROLES             *
	 ********************************/
	$roles = array(
		'anonymous user', 'authenticated user', 'editor', 
		'manager', 'moderator', 'partner', 'reviewer', 'services'
	);
	
	foreach ($roles as $role){
		install_add_role($role);
	}
	
	
	/********************************
	 *           THEMES             *
	 ********************************/
	
	$_SESSION['silent_mode'] = true;
	install_enable_theme('role_widget_store_2');
	install_enable_theme('role_widget_store_2_embedded');
	install_enable_theme('role_widget_store_2_embedded_v2');
	install_disable_theme('garland');
	$_SESSION['silent_mode'] = false;
	
	
	_widget_store_createContentTypes();
	_widget_store_createContent();
	_widget_store_sampleData();
	_widget_store_buildMenus();
	_widget_store_createTaxonomies();
 	_widget_store_profile_additional_modules();
	_widget_store_userImport();
	_widget_store_toolsImport();
	_widget_store_sampleBundle();

	/********************************
	*       REBUILD NODE ACCESS     *
	********************************/
	node_access_rebuild();
	
	/********************************
	*           FLUSH CACHES        *
	********************************/
	
	drupal_flush_all_caches();
	
}//widget_store_profile_tasks()