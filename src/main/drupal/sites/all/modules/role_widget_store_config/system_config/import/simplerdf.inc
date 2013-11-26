<?php

function _system_config_configure_simplerdf_custom_fields(){
	/**
	* Basic Field Configuration with object_type = node und SINGLE value (not multiple)
	*/
	// template for basic field configuration
	$data_basic_cfield = array(
			'name' => '',
			'title' => '',
			'type' => 'basic',
			'settings' => array(
				'object_types' => array(
					'node' => 'node'
			),
		    	'field_key' => '',
		    	'multiple' => 0
			)
	);
	
	// foaf:name
	$data_basic_cfield['name'] = 'foaf_name';
	$data_basic_cfield['title'] = 'FOAF Name';
	$data_basic_cfield['settings']['field_key'] = 'author';
	drupal_write_record('simplerdf_custom_fields', $data_basic_cfield);
	
	// foaf:mbox
	$data_basic_cfield['name'] = 'foaf_mbox';
	$data_basic_cfield['title'] = 'FOAF MBox';
	$data_basic_cfield['settings']['field_key'] = 'author_email';
	drupal_write_record('simplerdf_custom_fields', $data_basic_cfield);
	
	// dcterms:source
	$data_basic_cfield['name'] = 'dcterms_source';
	$data_basic_cfield['title'] = 'DCTERMS Source';
	$data_basic_cfield['settings']['field_key'] = 'source';
	drupal_write_record('simplerdf_custom_fields', $data_basic_cfield);
	
	/**
	 * Advanced Field Configuration
	 */
	
	// template for advanced-phpcode-based configuration
	$settings = array(
					'phpcode' => ''
	);
	$data_advanced_cfield = array(
				'name' => '',
				'title' => '',
				'type' => 'advanced',
				'settings' => $settings
	);
	
	//role:category
	$data_advanced_cfield['name'] = 'role_category';
	$data_advanced_cfield['title'] = 'ROLE Category';
	$data_advanced_cfield['settings']['phpcode'] = '$result = array();
						foreach ($object->taxonomy as $nid => $obj) {
							if ($obj->vid === \'1\') {
								$result[] =  $obj->guid;
							}
						}
						return $result;';
	drupal_write_record('simplerdf_custom_fields', $data_advanced_cfield);
	
	//role:functionality
	$data_advanced_cfield['name'] = 'role_functionality';
	$data_advanced_cfield['title'] = 'ROLE Functionality';
	$data_advanced_cfield['settings']['phpcode'] = '$result = array();
							foreach ($object->taxonomy as $nid => $obj) {
								if ($obj->vid === \'2\') {
									$result[] =  $obj->guid;
								}
							}
							return $result;';
	drupal_write_record('simplerdf_custom_fields', $data_advanced_cfield);
	
	//foaf:img
	$data_advanced_cfield['name'] = 'foaf_img';
	$data_advanced_cfield['title'] = 'FOAF Img';
	$data_advanced_cfield['settings']['phpcode'] = 'global $base_url;
						$img_path = $object->field_screenshots[0][\'filepath\'];
						$base_url = str_replace(\'embeddedv2.\',\'\',$base_url);
						$result = $base_url . \'/\' . $img_path;
						return $result;';
	drupal_write_record('simplerdf_custom_fields', $data_advanced_cfield);
	
	//foaf:depiction
	$data_advanced_cfield['name'] = 'foaf:depiction';
	$data_advanced_cfield['title'] = 'FOAF Depiction';
	$data_advanced_cfield['settings']['phpcode'] = 'global $base_url;
						$img_path = $object->field_screenshots[0][\'filepath\'];
						$base_url = str_replace(\'embeddedv2.\',\'\',$base_url);
						$result = $base_url . \'/\' . $img_path;
						return $result;';
	drupal_write_record('simplerdf_custom_fields', $data_advanced_cfield);
	
	
	//sioc:topic
	$data_advanced_cfield['name'] = 'sioc_topic';
	$data_advanced_cfield['title'] = 'SIOC Topic';
	$data_advanced_cfield['settings']['phpcode'] = '$result = array();
						foreach ($object->taxonomy as $nid => $obj) {
		  					if ($obj->vid === \'3\') {
		    					$result[] =  $obj->guid;
		  					}
						}
						return $result;';
	drupal_write_record('simplerdf_custom_fields', $data_advanced_cfield);
	
	//dcterms:requires
	$data_advanced_cfield['name'] = 'dcterms_requires';
	$data_advanced_cfield['title'] = 'DCTERMS_Requires';
	$data_advanced_cfield['settings']['phpcode'] = '$result = array();
								foreach ($object->taxonomy as $nid => $obj) {
								if ($obj->vid === \'6\') {
									$result[] =  $obj->name;
								}
							}
							return $result;';
	drupal_write_record('simplerdf_custom_fields', $data_advanced_cfield);
	
}

function _system_config_configure_simplerdf_namespaces(){
	$namespace = array (
				'name' => 'role',
				'prefix' => 'role',
				'uri' => 'http://purl.org/role/terms/'
	);
	drupal_write_record('simplerdf_namespaces', $namespace);
}

function _system_config_configure_simplerdf_mappings(){
	// template mapping
	$mapping = array(
		'type' => '',
		'classifier' => '',
		'field' => '',
		'properties' => array(
			0 => ''
		)
	);
	
	/**
	 * Configuration LSTOOL_OPENSOCIAL
	 */
	$mapping['type'] = 'node';
	$mapping['classifier'] = 'lstool_opensocial';
	
	
	/********************************
	 *            DCTERMS           *
	********************************/
	
	$mapping['field'] = 'title';
	$mapping['properties'][0] = 'dcterms:title';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'body';
	$mapping['properties'][0] = 'dcterms:description';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'dcterms_source';
	$mapping['properties'][0] = 'dcterms:source';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'created';
	$mapping['properties'][0] = 'dcterms:created';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'changed';
	$mapping['properties'][0] = 'dcterms:modified';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'dcterms_requires';
	$mapping['properties'][0] = 'dcterms:requires';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	
	/********************************
	 *            FOAF              *
	********************************/
	
	$mapping['field'] = 'foaf_depiction';
	$mapping['properties'][0] = 'foaf:depiction';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'foaf_img';
	$mapping['properties'][0] = 'foaf:img';
	drupal_write_record('simplerdf_mappings', $mapping);

	
	/********************************
	 *            ROLE              *
	********************************/
	
	$mapping['field'] = 'rdftype';
	$mapping['properties'][0] = 'role:OpenSocialGadget';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'role_category';
	$mapping['properties'][0] = 'role:category';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'role_functionality';
	$mapping['properties'][0] = 'role:functionality';
	drupal_write_record('simplerdf_mappings', $mapping);
	

	/********************************
	*            SIOC               *
	********************************/
	
	$mapping['field'] = 'sioc_topic';
	$mapping['properties'][0] = 'sioc:topic';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	/**
	 *  Configuration TERMS
	 */
	$mapping['type'] = 'term';
	$mapping['classifier'] = '';
	
	$mapping['field'] = 'name';
	$mapping['properties'][0] = 'role:hasName';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'desription';
	$mapping['properties'][0] = 'role:hasDescription';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'parent';
	$mapping['properties'][0] = 'role:providedByCategory';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'name';
	$mapping['properties'][0] = 'role:hasName';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	/**
	* Configuration USERS
	*/
	
	$mapping['type'] = 'user';
	$mapping['classifier'] = '';
	
	$mapping['field'] = 'rdftype';
	$mapping['properties'][0] = 'foaf:Person';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'name';
	$mapping['properties'][0] = 'foaf:name';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'mbox';
	$mapping['properties'][0] = 'foaf:mbox';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	/**
	* Configuration LSTOOL_W3C
	*/
	
	$mapping['type'] = 'node';
	$mapping['classifier'] = 'lstool_w3c';

	/********************************
	*            DCTERMS           *
	********************************/
	
	$mapping['field'] = 'title';
	$mapping['properties'][0] = 'dcterms:title';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'body';
	$mapping['properties'][0] = 'dcterms:description';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'dcterms_source';
	$mapping['properties'][0] = 'dcterms:source';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'created';
	$mapping['properties'][0] = 'dcterms:created';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'changed';
	$mapping['properties'][0] = 'dcterms:modified';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	
	/********************************
	 *            FOAF              *
	********************************/
	
	$mapping['field'] = 'foaf_depiction';
	$mapping['properties'][0] = 'foaf:depiction';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'foaf_img';
	$mapping['properties'][0] = 'foaf:img';
	drupal_write_record('simplerdf_mappings', $mapping);

	
	/********************************
	 *            ROLE              *
	********************************/
	
	$mapping['field'] = 'rdftype';
	$mapping['properties'][0] = 'role:W3CWidget';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'role_category';
	$mapping['properties'][0] = 'role:category';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'role_functionality';
	$mapping['properties'][0] = 'role:functionality';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	
	/********************************
	 *            SIOC               *
	********************************/
	
	$mapping['field'] = 'sioc_topic';
	$mapping['properties'][0] = 'sioc:topic';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	/**
	 *  Configuration TERMS
	 */
	$mapping['type'] = 'term';
	$mapping['classifier'] = '';
	
	$mapping['field'] = 'name';
	$mapping['properties'][0] = 'role:hasName';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'desription';
	$mapping['properties'][0] = 'role:hasDescription';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'parent';
	$mapping['properties'][0] = 'role:providedByCategory';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'name';
	$mapping['properties'][0] = 'role:hasName';
	drupal_write_record('simplerdf_mappings', $mapping);

	/**
	* Configuration BUNDLE
	*/
	
	$mapping['type'] = 'node';
	$mapping['classifier'] = 'bundle';
	
	/********************************
	*            DCTERMS           *
	********************************/
	
	$mapping['field'] = 'title';
	$mapping['properties'][0] = 'dcterms:title';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'body';
	$mapping['properties'][0] = 'dcterms:description';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'dcterms_source';
	$mapping['properties'][0] = 'dcterms:source';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'created';
	$mapping['properties'][0] = 'dcterms:created';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'changed';
	$mapping['properties'][0] = 'dcterms:modified';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	/********************************
	 *            FOAF              *
	********************************/
	
	$mapping['field'] = 'foaf_depiction';
	$mapping['properties'][0] = 'foaf:depiction';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	$mapping['field'] = 'foaf:img';
	$mapping['properties'][0] = 'foaf:img';
	drupal_write_record('simplerdf_mappings', $mapping);
	
	/********************************
	 *            ROLE              *
	********************************/
	
	$mapping['field'] = 'rdftype';
	$mapping['properties'][0] = 'role:bundle';
	drupal_write_record('simplerdf_mappings', $mapping);
}
