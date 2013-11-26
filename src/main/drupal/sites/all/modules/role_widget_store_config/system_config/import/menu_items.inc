<?php 

function _system_config_set_menu_items(){

	//include dependencies
	include_once drupal_get_path('module', 'install_profile_api').'/core/menu.inc';
	
	//CATALOUGE MENU
	
	//menu should already be availabe thus this function just returns the name of the menu
	$menu_name = install_menu_create_menu('Catalogues');
	$parent = 0;
	_system_config_update_menu_item('tool_categories', 'Tools', 0, $menu_name, $parent, '-50', 'menu', '0', FALSE, '0', '1', '0');
	_system_config_update_menu_item('bundles', 'Bundles', '', $menu_name, $parent, '-49', 'menu', '0', FALSE, '0', '1', '0');
	_system_config_update_menu_item('contest', 'Contest', '', $menu_name, $parent, '-48', 'menu', '0', FALSE, '0', '1', '0');
	_system_config_update_menu_item('showcases', 'Showcases', '', $menu_name, $parent, '-47', 'menu', '0', FALSE, '0', '1', '0');
	

	//MENU: MY CONTENT
	
	//menu should already be availabe thus this function just returns the name of the menu
	$menu_name = install_menu_create_menu('My Content');
	$parent = 0;
	_system_config_update_menu_item('my-content/tools', 'My Tools', 0, $menu_name, $parent, '-50', 'menu', '0', FALSE, '0', '1', '0');
	_system_config_update_menu_item('my-content/bundles', 'My Bundles', '', $menu_name, $parent, '-49', 'system', '0', FALSE, '0', '1', '0');
	_system_config_update_menu_item('my-content/reports', 'My Reports', '', $menu_name, $parent, '-48', 'system', '0', FALSE, '0', '1', '0');
	_system_config_update_menu_item('my-content/contest-contributions', 'My Contest Contributions', 0, $menu_name, $parent, '-47', 'menu', '0', FALSE, '0', '1', '0');
	_system_config_update_menu_item('my-content/specification-reviews', 'My Contest Reviews', 0, $menu_name, $parent, '-46', 'menu', '0', FALSE, '0', '1', '0');
	
	
	//MENU: TOOL CATEGORIES
	/*
	$menu_name = install_menu_create_menu('Tool Categories', 'tool-categories', 'Displays the categories of the tools.');
	
	$parent = 0;
	_system_config_update_menu_item('taxonomy/term/1', 'Plan & Organise', 'These tools facilitate the planning and organisation of your learning activities, process and resources as well as the setting of your learning goals.', $parent, '0', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/2', 'Search & get Recommendation', 'These tools enhance the searching process for your learning resources and/ or give recommendation for suitable tools, widgets or bundles.', $parent, '1', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/3', 'Collaborate & Communicate', 'These tools provide the possibility to collaborate and communicate with other participants of your learning process.', $menu_name, $parent, '2', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/4', 'Explore & View', 'These tools provide access to domain specific learning content. Content may be static or interactive.', $menu_name, $parent, '3', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/5', 'Train & Test', 'These tools provide support for knowledge acquisition as well as training and testing of skills.', $menu_name, $parent, '4', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/6', 'Create & Manipulate', 'These tools facilitate the creation and manipulation of content in your learning environment.', $menu_name, $parent, '5', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/7', 'Reflect & Evaluate', 'These tools facilitate the reflection of your learning process, -progress, -result and -environment.', $menu_name, $parent, '6', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/8', 'Demo Widgets', 'Example widgets and bundles which provide demo functionality.', $menu_name, $parent, '7', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	_system_config_update_menu_item('taxonomy/term/203', 'Developer Tools', 'Tools which are supporting developers by creating new tools', $menu_name, $parent, '8', 'taxonomy_menu', '0', FALSE, '1', '0', '0');
	*/
	

	// PRIMARY LINKS      
	
	//menu should already be availabe thus this function just returns the name of the menu
	/* $menu_name = install_menu_create_menu('Primary links');
	$parent = 0;
	_system_config_update_menu_item('contest-submissions', 'Contest Results', 0, $menu_name, $parent, '0', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('my-content/tools', 'My Content', 0, $menu_name, $parent, '5', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('user/%', 'My account', 0, $menu_name, $parent, '10', 'menu', '0', FALSE, '0', '0', '0'); */
	
	
	
	//SECONDARY LINKS     
	
	//menu should already be availabe thus this function just returns the name of the menu
	$menu_name = install_menu_create_menu('Secondary links');
	$parent = 0;
	_system_config_update_menu_item('about', 'About', 'About',             $menu_name, $parent,  '0', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('contact', 'Contact', 'Contact',       $menu_name, $parent, '10', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('developer', 'Developer', 'Developer', $menu_name, $parent, '20', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('partner', 'Partner', 'Partner',       $menu_name, $parent, '30', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('faq', 'FAQ', 'FAQ',                   $menu_name, $parent, '40', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('mystore', 'My Store', 'My Store',     $menu_name, $parent, '50', 'menu', '0', FALSE, '0', '0', '0');
	_system_config_update_menu_item('logout', 'Logout', 'Logout',          $menu_name, $parent, '60', 'menu', '0', FALSE, '0', '0', '0');
}



/**
* Updates an existing menu item.
*
* TODO: inspect the $path argument. The menu system will only register menu
* items whose path is already in the DB.
*
* @param  $path
*   The path of the menu item
* @param  $title
*   Title of the menu item (visible label for menu).
* @param  $description
*   Description of the menu item (tooltip).
* @param  $menu
*   Menu to associate this link with.
* @param  $plid
*   Parent link ID.
* @param  $weight
*   Weight for positioning.
* @param  $module
*   Optional. Specify a specific module responsible for this menu item.
*
* @return  integer
*   The database MLID of the menu item.
*/
function _system_config_update_menu_item( $path, $title, $description = '', $menu = 'navigation', $plid = 0, $weight = 0, $module = 'menu', $hidden = 0, $has_children = 0, $expanded = 0, $customized = 0, $updated = 0) {
	
	//include dependencies
	include_once drupal_get_path('module', 'install_profile_api').'/core/menu.inc';
	
	// If menu exists then we should insure that the menu has been created.
	$menu = install_menu_create_menu($menu);
	
	//check if the menu item exists
	$menu_item = db_fetch_array(db_query("SELECT * FROM {menu_links} WHERE link_title = '%s' AND menu_name = '%s'", $title, $menu));
	
	if(!is_array($menu_item)){
		//if not create return a new item
		return install_menu_create_menu_item($path, $title, $description, $menu, $plid, $weight, $module, $hidden, $has_children, $expanded, $customized, $updated);
		
	}
	
	$option_arr = unserialize($menu_item['options']);
	// If a description is present.
	if (!empty($description)) {
		$option_arr['attributes'] = array('title' => $description);
	}

    $menu_item['menu_name']     = $menu;
    $menu_item['weight']        = $weight;
    $menu_item['link_title']    = $title;
    $menu_item['options']       = $option_arr;
    $menu_item['module']        = $module;
    $menu_item['link_path']     = $path;
    $menu_item['hidden']        = $hidden;
    $menu_item['has_children']  = $has_children;
    $menu_item['expanded']      = $expanded;
    $menu_item['customized']    = $customized;
    $menu_item['updated']       = $updated;

	$return = menu_link_save($menu_item);
	
	// If no $return link, then inform the installer that this path in not valid.
	if (!$return) {
		drupal_set_message('The menu path: <em>"' . $path . '"</em> is not a valid path. Please insure that the necessary modules are set as dependents.');
	}

	return $return;
}




