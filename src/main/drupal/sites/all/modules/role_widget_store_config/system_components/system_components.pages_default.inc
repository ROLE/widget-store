<?php
// $Id: ctools_plugin_example.pages_default.inc,v 1.1.2.1 2010/01/29 19:54:02 merlinofchaos Exp $

/**
 * @file
 * This module provides default panels to demonstrate the behavior of the plugins.
 */

/**
 * Default panels pages for CTools Plugin Example
 *
 * To pick up this file, your module needs to implement
 * hook_ctools_plugin_api() - See ctools_plugin_example_ctools_plugin_api() in
 * ctools_plugin_example.module.
 *
 *
 * Note the naming of the file: <modulename>.pages_default.inc
 * With this naming, no additional code needs to be provided. CTools will just find the file.
 * The name of the hook is <modulename>_default_page_manager_pages()
 *
 * This example provides two pages, but the returned array could
 * have several pages.
 *
 * @return
 *   Array of pages, normally exported from Panels.
 */

function system_components_default_page_manager_pages() {

  $pages = array();
   $path = drupal_get_path('module', 'system_components'). "/pages/*.inc";
   if (glob($path)) {
     foreach(glob($path) as $exported_panel) {
       $filename = basename($exported_panel);
       $name = substr($filename, 0, strrpos($filename, '.'));
       eval(file_get_contents($exported_panel));     
	   $pages[$name] = $page;
     }
   }
  
  
  return $pages;
}