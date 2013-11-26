<?php 
/**
 * 
 * Configures the taxonomy access module for the term "Reviews" from the vocabulary "FAY Categories"
 */
function _system_config_configure_review_FAQ_taxonomy_access(){

	//include dependencies
	include_once drupal_get_path('module', 'install_profile_api').'/core/user.inc';
	include_once drupal_get_path('module', 'install_profile_api').'/core/taxonomy.inc';
	include_once drupal_get_path('module', 'taxonomy_access').'/taxonomy_access_admin.inc';
	
	
	//defining taxonomy access for the term reviews from the faq categories.
	//This allows to show reviewer FAQ only to the role reviewer
	
	//get term id of the review term in the faq vocabulary
	$vocabulary_name = "FAQ Category";
	$term_name = "Reviews";		
	$vid = install_taxonomy_get_vid($vocabulary_name);
	$tid = install_taxonomy_get_tid($term_name,$vid);

	//defining grants for the roles anonymous user and authenticated user
	// 0 - Ignore / 1 - Allow / 2 - Deny
	$grants = array(
			"view" => 2, 
			"update" => 0,
			"delete" => 0,
			"create" => 0,
			"list" => 0,
	);

	//adding grants to these roles
	$authenticated_user_rid = install_get_rid('anonymous user');
	taxonomy_access_grant_update($tid,$authenticated_user_rid, $grants);
	
	$authenticated_user_rid = install_get_rid('authenticated user');
	taxonomy_access_grant_update($tid,$authenticated_user_rid, $grants);

	
	//defining grants for the roles editor, manager, reviewer
	// 0 - Ignore / 1 - Allow / 2 - Deny
	$grants = array(
				"view" => 1, 
				"update" => 0,
				"delete" => 0,
				"create" => 1,
				"list" => 1,
	);

	//adding grants to these roles
	$editor_rid = install_get_rid('editor');
	taxonomy_access_grant_update($tid,$editor_rid, $grants);	

	$manager_rid = install_get_rid('manager');
	taxonomy_access_grant_update($tid,$manager_rid, $grants);
		
	$reviewer_rid = install_get_rid('reviewer');
	taxonomy_access_grant_update($tid,$reviewer_rid, $grants);	
}

/**
*
* Configures the default grants for the taxonomy access module
*/
function _system_config_configure_default_taxonomy_access(){

	//include dependencies
	include_once drupal_get_path('module', 'install_profile_api').'/core/user.inc';
	include_once drupal_get_path('module', 'install_profile_api').'/core/taxonomy.inc';
	include_once drupal_get_path('module', 'taxonomy_access').'/taxonomy_access_admin.inc';
	
	//defining default grants
	// 0 - Ignore / 1 - Allow / 2 - Deny
	$grants = array(
				"view" => 1, 
				"update" => 0,
				"delete" => 0,
				"create" => 0,
				"list" => 1,
	);
	
	//adding grants to the roles (important as only roles which are defined here are activated)
	$anonymous_user_rid = install_get_rid('anonymous user');
	taxonomy_access_defaults_update(0,$anonymous_user_rid, $grants);
	
	// everyone should be tagging terms to nodes else db_rewrite_sql
	// in taxonomy module will result in empty sets 
	// (because the user does not have the permissions) 
	//defining default grants
	// 0 - Ignore / 1 - Allow / 2 - Deny
	$grants = array(
					"view" => 1, 
					"update" => 0,
					"delete" => 0,
					"create" => 1,
					"list" => 1,
	);
	
	$authenticated_user_rid = install_get_rid('authenticated user');
	taxonomy_access_defaults_update(0,$authenticated_user_rid, $grants);	
	
	$editor_rid = install_get_rid('editor');
	taxonomy_access_defaults_update(0,$editor_rid, $grants);	
	
	$manager_rid = install_get_rid('manager');
	taxonomy_access_defaults_update(0,$manager_rid, $grants);	
	
	$reviewer_rid = install_get_rid('reviewer');
	taxonomy_access_defaults_update(0,$reviewer_rid, $grants);
}