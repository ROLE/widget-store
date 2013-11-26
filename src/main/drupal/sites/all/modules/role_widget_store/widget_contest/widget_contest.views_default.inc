<?php 
/**
 * Implementation of hook_views_default_views().
 */
function widget_contest_views_default_views() {

  $views = array();
  
  //get path to the rule export files
  $path = drupal_get_path('module', 'widget_contest'). "/views/*.inc";
  
  //part taken from rules_admin_form_import_submit@rules_admin.export.inc
  if (glob($path)) {
  	foreach(glob($path) as $exported_view) {
  		$filename = basename($exported_rule);
  		$name = substr($filename, 0, strrpos($filename, '.'));
  			
  		eval(file_get_contents($exported_view));
  
  		if (isset($view) && is_object($view) ) {
  			
  			$views[$view->name] = $view;
  			
  		}
  		else {
  			drupal_set_message(t('Import/Deletion of views failed.'), 'error');
  		}			
  	}
  }    
  return $views;
  
}


