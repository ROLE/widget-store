<?php

/**
 * lstool factory
 *
 * @author Andreas Diehl
 * @package Role-Widgetstore
 * @subpackage API
 */


/**
 * Stores
 * returns NULL if object does not exist in database
 *
 * @param object $node The the node to store
 * @param boolean $createNewTool Flag if a new tool should be created
 * @return true is storing the node was succesful, else false
 */
function storeOpenSocialToolDataInDB($node, $createNewTool = true){

	//check if we want to create a new entry in the db
	if($createNewTool){
			
			
		//prepare query for saving general data
		$sql = "INSERT INTO {lstool_opensocial} (
				vid,
				height 
				) VALUES (%d, %d)";
	  
		//prepare values
		$values = array(
		$node->vid,
		$node->height
		);

		//execute query
		db_query($sql, $values);
			
			
	}else{
		//update an existing tool
		$sql = "UPDATE {lstool_opensocial} SET
					height = %d 	 
				WHERE vid = %d";

		//prepare values
		$values = array(
		$node->height,
		$node->vid
		);

		//execute query
		db_query($sql, $values);
			
	}
}

/**
 * Fetches a lstool-node from the database
 * returns NULL if node does not exist in database
 *
 * @param int $vid The vid of the lstool node
 * @return object node of corresponding lstool
 */
function loadOpenSocialToolDataFromDB($vid, $object){

	if(!is_object($object)){
			$object	= new stdClass();
		}
	
	//prepare query
	$query =
			"SELECT 
				vid, 
				height
			FROM {lstool_opensocial} 
			WHERE vid = %d";

	//prepare values
	$values = array(
		$vid
	);

	//exucute query
	$result = db_fetch_object(
		db_query($query,$values)
	);

	//save to node object
	$object->height = $result->height;
	
	return $object;
}

/**
 * Removes a lstool
 *
 * @param object $toolObj Tool object to be removed
 */
function removeOpenSocialToolDataFromDB(&$node) {
	// remove in general table
	$sql = 'DELETE FROM {lstool_opensocial} WHERE vid = %d';
	db_query($sql, $node->vid);

}

/**
 * Get Shindig Server URL
 */
function getShindigServer(){	
	$result = db_query("
		SELECT id, defaultURL, customURL
		FROM {shindig_server} 
		ORDER BY id
		LIMIT 1"
	);
	$data = db_fetch_object($result);

	return $data;
}
?>
