<?php

/**
 * Set the the blocks for the current theme
 * 
 *	Block Syntax:
 * 
 *	'module' => 	The module which provides the block 
 *	'delta' => 		The intern id of the block in the module
 *	'theme' => 		The theme for which the block should be configured
 *	'status' => 	1 - activated / 0 - deactivated
 *	'weight' => 	Weight determins the position relative to the other blocks
 *	'region' => 	The region wehere the block should be dispalyed
 *	'custom' => 	?
 *	'throttle' => 	If it should be deactivated if there is to much traffic (only if throttle is active)
 *	'visibility' => 0 - Show on every page except the listed pages / 1 - Show on only the listed pages / 2 - Show if the following PHP code returns TRUE (PHP-mode, experts only). 
 *	'pages' => 		Pages or PHP code depending on visibility 
 *	'title' => 		Title of the block
 *	'cache' => 		?
 *
 */
function _system_config_set_blocks() {

  include_once drupal_get_path('module', 'install_profile_api')
      . '/core/block.inc';

  $themes = array(
  	'role_widget_store_2', 'role_widget_store_embedded', 'role_widget_store_embedded_v2'
  );

  foreach ($themes as $theme) {

    // apache solr block only visible on the search page 

    //shows an facet for vocabulary 2 (functionalities)
    $block = (object) array(
        'module' => 'apachesolr_search', 'delta' => 'im_vid_2',
        'theme' => $theme, 'status' => '1', 'weight' => '-13',
        'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '5',
    );
    install_create_block($block);

    //shows an facet for node types
    $block = (object) array(
        'module' => 'apachesolr_search', 'delta' => 'type', 'theme' => $theme,
        'status' => '1', 'weight' => '-12', 'region' => 'sidebar_first',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '', 'cache' => '5',
    );
    install_create_block($block);

    //shows an facet for vocabulary 1 (tool categories)
    $block = (object) array(
        'module' => 'apachesolr_search', 'delta' => 'im_vid_1',
        'theme' => $theme, 'status' => '1', 'weight' => '-14',
        'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => 'Category Filter',
        'cache' => '5',
    );
    install_create_block($block);

    //allows to sort the node results
    $block = (object) array(
        'module' => 'apachesolr', 'delta' => 'sort', 'theme' => $theme,
        'status' => '1', 'weight' => '-17', 'region' => 'sidebar_first',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '', 'cache' => '4',
    );
    install_create_block($block);

    //shows the current filters
    $block = (object) array(
        'module' => 'apachesolr_search', 'delta' => 'currentsearch',
        'theme' => $theme, 'status' => '1', 'weight' => '-15',
        'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '4',
    );
    install_create_block($block);

    // FAQ Blocks

    //Shows all FAQ categories
    $block = (object) array(
        'module' => 'faq', 'delta' => '0', 'theme' => $theme, 'status' => '1',
        'weight' => '-11', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '1', 'pages' => 'faq/*',
        'title' => '', 'cache' => '1',
    );
    install_create_block($block);

    //Shows recent FAQs
    $block = (object) array(
        'module' => 'faq', 'delta' => '1', 'theme' => $theme, 'status' => '1',
        'weight' => '-10', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '1', 'pages' => 'faq/*',
        'title' => '', 'cache' => '1',
    );
    install_create_block($block);

    // Provides a block where users can ask questions
    $block = (object) array(
        'module' => 'faq_ask', 'delta' => '0', 'theme' => $theme,
        'status' => '1', 'weight' => '-17', 'region' => '',
        'custom' => '0', 'throttle' => '0', 'visibility' => '1',
        'pages' => 'faq', 'title' => '', 'cache' => '1',
    );
    install_create_block($block);

    // Provides a block where unanswered questions are displayed to admins
    $block = (object) array(
        'module' => 'faq_ask', 'delta' => '1', 'theme' => $theme,
        'status' => '1', 'weight' => '-18', 'region' => '',
        'custom' => '0', 'throttle' => '0', 'visibility' => '1',
        'pages' => 'faq', 'title' => '', 'cache' => '1',
    );
    install_create_block($block);

    // Menu Blocks

    //the catalouge menu
    $block = (object) array(
        'module' => 'menu', 'delta' => 'menu-catalogues', 'theme' => $theme,
        'status' => '1', 'weight' => '-3', 'region' => 'preface_top',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '<none>', 'cache' => '-1',
    );
    install_create_block($block);

    //the tool category menu
    $block = (object) array(
        'module' => 'views', 'delta' => 'tool_categories-block_1',
        'theme' => $theme, 'status' => '0', 'weight' => '-18',
        'region' => 'sidebar_first', 'custom' => '0', 'throttle' => '0',
        'visibility' => '1', 'pages' => 'homepage', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);

    //the my content menu
    $block = (object) array(
        'module' => 'menu', 'delta' => 'menu-my-content', 'theme' => $theme,
        'status' => '1', 'weight' => '-2', 'region' => '',
        'custom' => '0', 'throttle' => '0', 'visibility' => '1',
        'pages' => 'my-content/*', 'title' => '', 'cache' => '-1',
    );
    install_create_block($block);

    //the navigation menu - for the admin area only
    $block = (object) array(
        'module' => 'user', 'delta' => '1', 'theme' => $theme, 'status' => '1',
        'weight' => '-16', 'region' => '-1', 'custom' => '0',
        'throttle' => '0', 'visibility' => '1', 'pages' => 'admin/*',
        'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    
    // the navigation menu - for the admin area only and for admin theme ;-)
    $block = (object) array(
    		'module' => 'user', 'delta' => '1', 'theme' => 'role_widget_store_backend', 'status' => '1',
    		'weight' => '-16', 'region' => 'left', 'custom' => '0',
    		'throttle' => '0', 'visibility' => '1', 'pages' => 'admin/*',
    		'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    
    //the multistep block
    $block = (object) array(
            'module' => 'multistep', 'delta' => 'bundle', 'theme' => $theme, 'status' => '1',
            'weight' => '-16', 'region' => 'content_top', 'custom' => '0',
            'throttle' => '0', 'visibility' => '0', 'pages' => '',
            'title' => '<none>', 'cache' => '-1',
    );
    
    install_create_block($block);


    // Blocks which are not used

    //deactivate other blocks
    $block = (object) array(
        'module' => 'system', 'delta' => '0', 'theme' => $theme,
        'status' => '0', 'weight' => '0', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'user', 'delta' => '0', 'theme' => $theme, 'status' => '0',
        'weight' => '0', 'region' => '', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'apachesolr_search', 'delta' => 'im_vid_3',
        'theme' => $theme, 'status' => '0', 'weight' => '-9', 'region' => 'sidebar_first',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'views', 'delta' => '231b0ab61fc595f943f1ad1723ca3d90',
        'theme' => $theme, 'status' => '0', 'weight' => '-7', 'region' => '',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'views', 'delta' => '2a1e1fd05732d4828431bb53712d6648',
        'theme' => $theme, 'status' => '0', 'weight' => '-4', 'region' => '',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'views', 'delta' => '6c7fd6164525b40e5518abb946d56c6b',
        'theme' => $theme, 'status' => '0', 'weight' => '-5', 'region' => '',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'views', 'delta' => 'e65e15770a0d49a9aef7a6fc30da3d03',
        'theme' => $theme, 'status' => '0', 'weight' => '-6', 'region' => '',
        'custom' => '0', 'throttle' => '0', 'visibility' => '0', 'pages' => '',
        'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'devel', 'delta' => '0', 'theme' => $theme,
        'status' => '0', 'weight' => '2', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'devel', 'delta' => '2', 'theme' => $theme,
        'status' => '0', 'weight' => '-8', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'faq', 'delta' => '2', 'theme' => $theme, 'status' => '0',
        'weight' => '-1', 'region' => '', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'apachesolr', 'delta' => 'mlt-001', 'theme' => $theme,
        'status' => '0', 'weight' => '-12', 'region' => 'sidebar_first', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'comment', 'delta' => '0', 'theme' => $theme,
        'status' => '0', 'weight' => '1', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'switchtheme', 'delta' => '0', 'theme' => $theme,
        'status' => '0', 'weight' => '4', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'switchtheme', 'delta' => '1', 'theme' => $theme,
        'status' => '0', 'weight' => '-10', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'search', 'delta' => '0', 'theme' => $theme,
        'status' => '0', 'weight' => '-11', 'region' => 'preface_top', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'fivestar', 'delta' => '0', 'theme' => $theme,
        'status' => '0', 'weight' => '-13', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'node', 'delta' => '0', 'theme' => $theme, 'status' => '0',
        'weight' => '-14', 'region' => '', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'profile', 'delta' => '0', 'theme' => $theme,
        'status' => '0', 'weight' => '-17', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'user', 'delta' => '2', 'theme' => $theme, 'status' => '0',
        'weight' => '5', 'region' => '', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'user', 'delta' => '3', 'theme' => $theme, 'status' => '0',
        'weight' => '6', 'region' => '', 'custom' => '0', 'throttle' => '0',
        'visibility' => '0', 'pages' => '', 'title' => '', 'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'menu', 'delta' => 'primary-links', 'theme' => $theme,
        'status' => '0', 'weight' => '-16', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
    $block = (object) array(
        'module' => 'menu', 'delta' => 'secondary-links', 'theme' => $theme,
        'status' => '0', 'weight' => '-15', 'region' => '', 'custom' => '0',
        'throttle' => '0', 'visibility' => '0', 'pages' => '', 'title' => '',
        'cache' => '-1',
    );
    install_create_block($block);
  }
}
