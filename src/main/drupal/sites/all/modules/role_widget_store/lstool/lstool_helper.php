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
function storeGeneralToolDataInDB($node, $createNewTool = true){

	
	$directory_path = file_directory_path() . '/lstool';
	file_check_directory($directory_path, FILE_CREATE_DIRECTORY);

	$screenshot_validators = array(
      'file_validate_is_image' => array(),
      'file_validate_image_resolution' => array('600x600'),
      'file_validate_size' => array(300 * 1024),
	);

	//check if user wants a custom screenshot
	if ($screenshot_file = file_save_upload('screenshot_upload', $screenshot_validators)) {
		file_move($screenshot_file, $directory_path, $replace = FILE_EXISTS_RENAME);
		$screenshot_path = $screenshot_file->filepath;

		//save screenshot from path (its already checked that it is a valid image)
	} else if ($node->screenshot_path != '') {
		file_move($node->screenshot_path, $directory_path, $replace = FILE_EXISTS_RENAME);
		$screenshot_path = $directory_path . "/" . basename($node->screenshot_path);
		//TODO: add extension
	} else {
		$screenshot_path = '';
	}
	
	//check if we want to create a new entry in the db
	if($createNewTool){
			
		//prepare query for saving general data
		$sql = "INSERT INTO {lstool} (
				nid, 
				vid, 
				specification_id,
				source,
				author,
				author_email,
				thumbnail_path,
				short_description,
				version,
				license,
				license_details
				) VALUES (%d, %d,'%s','%s','%s','%s','%s','%s','%s','%s','%s')";
			
		//prepare values
		$values = array(
		$node->nid,
		$node->vid,
		$node->specification_id,
		$node->source,
		$node->author,
		$node->author_email,
		$thumbnail_path,
		$node->short_description,
		$node->version,
		$node->license,
		$node->license_details
		);

		//execute query
		db_query($sql, $values);

		
		//prepare query for saving the screenshots
		$sql = "INSERT INTO {lstool_screenshots} (
				nid, 
				vid, 
				screenshot_path
				) VALUES (%d, %d,'%s')";
			
		//prepare values
		$values = array(
		$node->nid,
		$node->vid,
		$screenshot_path
		);
		
		db_query($sql, $values);
					
	
	}else{

		if ($node->screenshot_delete) {
			// remove thumbnail
			unlink($screenshot_path);
			$screenshot_path = '';
		}
		


		//update an existing tool
		$sql = "UPDATE {lstool} SET
					specification_id = '%s',
					source = '%s',
					author = '%s',	 
					author_email = '%s',
					thumbnail_path = '%s',
					short_description = '%s',
					version = '%s',
					license = '%s',
					license_details = '%s'	 	 
				WHERE nid = %d 
					AND vid = %d";

		//prepare values
		$values = array(
		$node->specification_id,
		$node->source,
		$node->author,
		$node->author_email,
		$thumbnail_path,
		$node->short_description,
		$node->version,
		$node->license,
		$node->license_details,
		$node->nid,
		$node->vid
		);

		//execute query
		db_query($sql, $values);
			
		
		//prepare query for saving the screenshots
		$sql = "UPDATE {lstool_screenshots} SET
					screenshot_path = '%s'
				WHERE nid = %d 
					AND vid = %d";
			
		//prepare values
		$values = array(
		$screenshot_path,
		$node->nid,
		$node->vid
		);

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
function loadGeneralToolDataFromDB($vid, $object){

	if(!is_object($object)){
		$object	= new stdClass();
	}

	$query =
			"SELECT 
				nid, 
				vid, 
				specification_id,
				source,
				author,
				author_email,
				thumbnail_path,
				short_description,
				version,
				license,
				license_details
			FROM {lstool} 
			WHERE vid = %d";

	//prepare values
	$values = array(
		$vid
	);


	$result = db_fetch_object(
		db_query($query,$values)
	);

	//adds the data to the node object
	$object->specification_id = $result->specification_id;
	$object->source = $result->source;
	$object->author = $result->author;
	$object->author_email = $result->author_email;
	//$object->thumbnail_path = $result->thumbnail_path;
	$object->short_description = $result->short_description;
	$object->version = $result->version;
	$object->license = $result->license;
	$object->license_details = $result->license_details;

	return $object;
}

/**
 * Removes a lstool
 *
 * @param object $toolObj Tool object to be removed
 */
function removeGeneralToolDataFromDB(&$node) {
	// remove in general table
	$sql = 'DELETE FROM {lstool} WHERE vid = %d';
	db_query($sql, $node->vid);
}

/**
 * Returns an array of all lstools vids
 *
 * @return array vid's of all lstools
 */
//TODO: rename to getVidsOfAllTools
function getAll() {

	// get all types
	$sql = 'SELECT name FROM {lstool_types}';
	$result = db_query(db_rewrite_sql($sql));
	$vids = array();

	// now get nodes corresponding to this type
	while ($types = db_fetch_object($result)) {
		$sql = 'SELECT vid FROM {node} WHERE type = "%s"';
		$result = db_query(db_rewrite_sql($sql), $types->name);
		while ($data = db_fetch_object($result)) {
			$vids[] = $data->vid;
		}
	}
	return $vids;
}
