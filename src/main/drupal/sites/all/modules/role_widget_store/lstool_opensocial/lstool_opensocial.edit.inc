<?php
/**
 * Modifying Nodes
 * 
 * @author Andreas Diehl
 * @package Role-Widgetstore
 * @subpackage Drupal-Module
 */

/**
 * Implementation of hook_update().
 * @param object $node
 */
function lstool_opensocial_update(&$node){
	lstool_opensocial_save_features($node);
	storeGeneralToolDataInDB($node,$node->revision);
	storeOpenSocialToolDataInDB($node,$node->revision);
}

/**
 * Implementation of hook_insert
 * @param object $node 
 */
function lstool_opensocial_insert(&$node) {
	lstool_opensocial_save_features($node);
	storeGeneralToolDataInDB($node,true);
	storeOpenSocialToolDataInDB($node,true);
}

/**
 * Implementation of hook_delete
 * @param object $node 
 */
function lstool_opensocial_delete(&$node) {
  // pass through ... deleting is an easy task
  // with nothing special for this
  removeGeneralToolDataFromDB($node);
  removeOpenSocialToolDataFromDB($node);
}

