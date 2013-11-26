<?php

/********************************
 *           CONTENT            *
 ********************************/
function _widget_store_createContent() {

  //include install api files
  require_once drupal_get_path('module', 'install_profile_api')
      . '/contrib/node_export.inc';

  //get path to the node export files
  $path = "profiles/widget_store/import/*node.*.inc";

  if (glob($path)) {
    foreach (glob($path) as $file_to_import) {

      $default_properties = array();

      $import_code = file_get_contents($file_to_import);
      //override $properties
      eval('$properties = ' . $import_code);

      $properties = array_merge($default_properties, $properties);

      install_node_export_import_from_file($file_to_import, $properties);

    }
  }

}//_createContent()

/********************************
 *        CONTENT TYPES         *
 ********************************/
function _widget_store_createContentTypes() {

  // Insert default user-defined node types into the database. For a complete
  // list of available node type attributes, refer to the node type API
  // documentation at: http://api.drupal.org/api/HEAD/function/hook_node_info.
  $types = array(
      array(
          'type' => 'page', 'name' => st('Page'), 'module' => 'node',
          'description' => st(
              "A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an \"About us\" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site's initial home page."),
          'custom' => TRUE, 'modified' => TRUE, 'locked' => FALSE,
          'help' => '', 'min_word_count' => '',
      ),
  );

  foreach ($types as $type) {
    $type = (object) _node_type_set_defaults($type);
    node_type_save($type);
  }
}//_createContentTypes()

/********************************
 *            MENUS             *
 ********************************/
function _widget_store_buildMenus() {
  menu_rebuild(); //get all aliases that were created with the views so that the linkage works

  $mlids = array();

  /********************************
   *       MENU: CATALOGUES        *
   ********************************/
  $menu_name = install_menu_create_menu('Catalogues', 'catalogues',
      'The available catalouges.');

  /********************************
   *       MENU: MY CONTENT        *
   ********************************/
  $menu_name = install_menu_create_menu('My Content', 'my-content',
      'The own content of a user');

  /********************************
   *     MENU: PRIMARY LINKS      *
   ********************************/
  $menu_name = install_menu_create_menu('Primary links', 'primary-links',
  'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');

  /********************************
   *    MENU: SECONDARY LINKS     *
   ********************************/
  //These Links are being built by the corresponding content. See _widget_store_createContent();

  /********************************
   *    MENU: TOOL CATEGORIES     *
   ********************************/
  //This Menu is getting filled by a taxonmomy. See _createTaxonomies();
  $menu_name = 'tool-categories';

  install_menu_create_menu('Tool Categories', $menu_name,
      'Displays the categories of the tools.');

  menu_rebuild();

}//_buildMenus()

/********************************
 *          TAXONOMIES          *
 ********************************/
function _widget_store_createTaxonomies() {

  //set preferences for taxonomy image
  variable_set("taxonomy_image_admin_preset", 'ORIGINAL');
  variable_set("taxonomy_image_default", '');
  variable_set("taxonomy_image_disable",
      'Check this box to disable the display of content images.');
  variable_set("taxonomy_image_height", '200');
  variable_set("taxonomy_image_imagecache_preset", 'ORIGINAL');
  variable_set("taxonomy_image_link_title", '1');
  variable_set("taxonomy_image_path", 'category_pictures');
  variable_set("taxonomy_image_recursive", '0');
  variable_set("taxonomy_image_resize", '1');
  variable_set("taxonomy_image_verbose_delete", 0);
  variable_set("taxonomy_image_width", '150');
  variable_set("taxonomy_image_wrapper", 1);

  //$tids = array(0 => 0);

  //add catalogue taxonomy 
  install_taxonomy_add_vocabulary('menu-tool-categories',
      array(
        'lstool_opensocial' => 'lstool_opensocial',
      	'lstool_w3c' => 'lstool_w3c'
      ),
      array(
          'name' => 'Tool Categories', 'description' => '', 'help' => '',
          'relations' => '1', 'hierarchy' => '1', 'multiple' => '1',
          'required' => '1', 'tags' => '0', 'module' => 'taxonomy',
          'weight' => '0',
      ));

  $widget_category_vid = 1;

  //define widget categories
  $widget_category_terms = array(
      array(
          'name' => 'Plan & Organise',
          'description' => 'These tools facilitate the planning and organisation of your learning activities, process and resources as well as the setting of your learning goals.',
          'weight' => '-70', 'image' => 'organisation.png',
          'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Search & get Recommendation',
          'description' => 'These tools enhance the searching process for your learning resources and/ or give recommendation for suitable tools, widgets or bundles.',
          'weight' => '-60', 'image' => 'search.png', 'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Collaborate & Communicate',
          'description' => 'These tools provide the possibility to collaborate and communicate with other participants of your learning process.',
          'weight' => '-50', 'image' => 'explore.png', 'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Explore & View',
          'description' => 'These tools provide access to domain specific learning content. Content may be static or interactive.',
          'weight' => '-40', 'image' => 'organisation.png',
          'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Train & Test',
          'description' => 'These tools provide support for knowledge acquisition as well as training and testing of skills.',
          'weight' => '-30', 'image' => 'training.png', 'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Create & Manipulate',
          'description' => 'These tools facilitate the creation and manipulation of content in your learning environment.',
          'weight' => '-20', 'image' => 'productivity.png',
          'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Reflect & Evaluate',
          'description' => 'These tools facilitate the reflection of your learning process, -progress, -result and -environment.',
          'weight' => '-10', 'image' => 'reflection.png', 'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Developer Tools',
          'description' => 'This category contains tools which should support developers by creating new tools.',
          'weight' => '-5', 'image' => 'developer.png', 'parent' => array(
            0
          ),
      ),
      array(
          'name' => 'Demo Widgets',
          'description' => 'Example widgets and bundles which provide demo functionality.',
          'weight' => '0', 'image' => 'demo.png', 'parent' => array(
            0
          ),
      )
  );

  foreach ($widget_category_terms as $term) {

    //create term
    $tid = install_taxonomy_add_term($widget_category_vid, $term["name"],
        $term["description"], $term);

    //add term image to db
    db_query(
        "INSERT INTO {term_image}(tid,path) 
				VALUES ($tid, '" . $term['image'] . "')");
  }

  // Add Functionalities vocabulary and fills it with the RDF data
  $vocabulary = '';
  $file = 'profiles/widget_store/import/functionalities_ver2.rdf';
  $data = file_get_contents($file);

  //TODO: Turn $vocImportOff to false or remove check 
  $vocImportOff = false;

  if (!$data || $vocImportOff == true) {
    drupal_set_message(t("Error occured while file opening!"), 'error', TRUE);
    //return FALSE;
  } else {

    $vocabulary = rdf_taxonomy_import_fetch_n_parse($data, 'filepath');
    $edit = array(
        'multiple' => 1, 'tags' => 1,
        'nodes' => array(
          'lstool_opensocial' => 1, 'lstool_w3c' => 1
        ),
    );
    rdf_taxonomy_import_add_vocabulary($vocabulary, -1, 'Functionalities', '',
        $edit);

    $vid = rdf_taxonomy_import_get_vocabulary_by_name('Functionalities');
    $vid = $vid->vid;

    $tostore = array(
        'types' => array(
          0 => 'lstool_opensocial', 1 => 'lstool_w3c',
        ), 'source' => 'intern',
    );
    variable_set('taxonomy_tag_suggestor_vid_' . $vid, $tostore);
  }

  install_taxonomy_add_vocabulary('Learning Domains',
      array(
          'bundle' => 'bundle', 'lstool_opensocial' => 'lstool_opensocial',
          'lstool_w3c' => 'lstool_w3c'
      ),
      array(
          'name' => 'Learning Domains', 'description' => '', 'help' => '',
          'relations' => '1', 'hierarchy' => '0', 'multiple' => '1',
          'required' => '0', 'tags' => '1', 'module' => 'taxonomy',
          'weight' => '-8',
      ));

  install_taxonomy_add_vocabulary('Widget Specification Tags',
      array(
        'widget_specification' => 'widget_specification'
      ),
      array(
          'name' => 'Widget Specification Tags',
          'description' => 'Specification tags created by users.',
          'help' => 'User tags for sorting and managing specification.',
          'relations' => '1', 'hierarchy' => '0', 'multiple' => '1',
          'required' => '0', 'tags' => '1', 'module' => 'taxonomy',
          'weight' => '-7'
      ));
      

  $vid = install_taxonomy_add_vocabulary('FAQ Category',
      array(
        'faq' => 'faq'
      ),
      array(
          'name' => 'FAQ Category', 'description' => '', 'help' => '',
          'relations' => '1', 'hierarchy' => '1', 'multiple' => '0',
          'required' => '1', 'tags' => '0', 'module' => 'taxonomy',
          'weight' => '0'
      ));
      
    $term = array ( 'name' => 'Bundles', 'description' => '', 'weight' => '0', 'guid' => '', );
	$term["parent"] = array($tids[0]);
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'Reviews', 'description' => '', 'weight' => '0', 'guid' => '', );
	$term["parent"] = array($tids[0]);
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'Tools', 'description' => '', 'weight' => '0', 'guid' => '', );
	$term["parent"] = array($tids[0]);
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'Widget Contest', 'description' => '', 'weight' => '0', 'guid' => '', );
	$term["parent"] = array($tids[0]);
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
      
	$vid = install_taxonomy_add_vocabulary('Required Widget Features',
			array(
					'lstool_opensocial' => 'lstool_opensocial'
			),
			array(
					'name' => 'Required Widget Features', 'description' => '', 'help' => '',
					'relations' => '0', 'hierarchy' => '0', 'multiple' => '1',
					'required' => '0', 'tags' => '0', 'module' => 'taxonomy',
					'weight' => '10'
			));
	$term = array ( 'name' => 'dynamic-height', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'flash', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'minimessage', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'openapp', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'opensocial-0.8', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'opensocial-0.9', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'opensocial-data', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'opensocial-templates', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'osapi', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'pubsub', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'rpc', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'setprefs', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'tabs', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
	$term = array ( 'name' => 'views', 'description' => '', 'weight' => '0', 'guid' => '', );
	$tids[1] = install_taxonomy_add_term($vid, $term["name"], $term["description"], $term);
	
  module_load_include('module', 'taxonomy');
  module_load_include('module', 'rdf_taxonomy_import');

  menu_rebuild();
}//_createTaxonomies()

function _widget_store_userImport() {
  $sql = file_get_contents(dirname(__FILE__) . '/import/users.sql');
  db_query($sql);

  // Map for users and their Roles (2011/11/4)
  $userrole_map = array(
      'editor' => array(
        'test.editor'
      ), 'manager' => array(
        'test.manager'
      ), 'moderator' => array(
        'test.moderator'
      ), 'partner' => array(
        'test.partner'
      ), 'reviewer' => array(
        'test.reviewer'
      ), 'services' => array(
        'test.services'
      )
  );

  //Fetch available roles from DB
  $db_roles = array();
  $res = db_query('SELECT * FROM role');
  while ($tmp = mysql_fetch_assoc($res)) {
    //Make assoc-array
    $db_roles[$tmp['name']] = $tmp['rid'];
  }

  //Fetch available users from DB
  $db_users = array();
  $res = db_query('SELECT uid, name FROM users');
  while ($tmp = mysql_fetch_assoc($res)) {
    //Make assoc-array
    $db_users[$tmp['name']] = $tmp['uid'];
  }

  //prepare INSERT-query
  $query = 'INSERT INTO users_roles (uid, rid) VALUES ';

  //why not use this variable again?
  $sql = array();

  //walk over available roles that contain the useres to the role
  foreach ($userrole_map as $role => $users) {
    //walk over users for this role
    foreach ($users as $user) {
      //form insert query
      $sql[] = '(' . $db_users[$user] . ', ' . $db_roles[$role] . ')';
    }
  }

  //merge and off to DB
  db_query($query . implode(',', $sql) . ';');

}//_userImport()

function _widget_store_toolsImport() {
  $import_path = dirname(__FILE__) . '/import/tools/';

  //Fetch available users from DB
  $db_users = array();
  $res = db_query('SELECT uid, name FROM users');
  while ($tmp = mysql_fetch_assoc($res)) {
    //Make assoc-array
    $db_users[$tmp['name']] = $tmp['uid'];
  }

  $_SESSION['silent_mode'] = true;

  $handle = opendir($import_path);

  while (($import_file = readdir($handle)) !== FALSE) {

    if (preg_match("/^node.tool.[0-9]+.inc$/", $import_file)) {
      $tool = eval('return ' . file_get_contents($import_path . $import_file)
          . ";");

      //echo(gettype($tool)."\n");

      $tmp2 = array();
      $ii = 0;

      $owner = new stdClass();

      $owner->name = $tool['name'];
      $owner->uid = $db_users[$tool['name']];

      foreach ($tool['field_thumbnail'] as $tmp) {
        $filepath = "profiles/widget_store/images/thumbnails/" . basename($tmp['filepath']);
        $destination = $tmp['filepath'];

        // create file for thumb
        $file = field_file_save_file($filepath, array(), $destination); 
        $tmp2['field_thumbnail'][$ii]["fid"] = $file["fid"];
        $ii++;
      }

      $ii = 0;
      
      foreach ($tool['field_screenshots'] as $tmp) {
        $filepath = "profiles/widget_store/images/screenshots/" . basename($tmp['filepath']);
        $destination = $tmp['filepath'];
        
        // create file for screenshot
        $file = field_file_save_file($filepath, array(), $destination); 
        $tmp2['field_screenshots'][$ii]["fid"] = $file["fid"];
        $ii++;
      }
      
      if($tool['type'] == 'lstool_w3c'){
      	  $ii = 0;
	      foreach ($tool['field_tool_file'] as $tmp) {
	        $filepath = "profiles/widget_store/files/w3cfiles/" . basename($tmp['filepath']);
	        $destination = $tmp['filepath'];
	        
	        // create file for file
	        $file = field_file_save_file($filepath, array(), $destination); 
	        $tmp2['field_tool_file'][$ii]["fid"] = $file["fid"];
	        $ii++;
	      }
     }

      install_node_export_import_from_file($import_path . $import_file, $tmp2,
          $owner);
    }
  }

  $_SESSION['silent_mode'] = false;
}//_toolsImport()

function _widget_store_sampleData() {
  $import_path = dirname(__FILE__) . '/import/samples/';

  //Fetch available users from DB
  $db_users = array();
  $res = db_query('SELECT uid, name FROM users');
  while ($tmp = mysql_fetch_assoc($res)) {
    //Make assoc-array
    $db_users[$tmp['name']] = $tmp['uid'];
  }

  //$_SESSION['silent_mode'] = true;

  $handle = opendir($import_path);

  while (($import_file = readdir($handle)) !== FALSE) {

  	if(substr($import_file, 0, 1) == '.' || !$data = file_get_contents($import_path . $import_file)){
  		continue;
  	}
  	
  	
      $data = eval('return ' . $data . ";");

      $tmp2 = array();

      $owner = new stdClass();

      $owner->name = $data['name'];
      $owner->uid = $db_users[$data['name']];

      
      $ii = 0;
     // $__OUT = $data[0]['field_screenshot_mockups'];
     if($data[0]['field_screenshot_mockups']){
	      foreach ($data[0]['field_screenshot_mockups'] as $tmp) {
	        $filepath = "profiles/widget_store/images/" . basename($tmp['filepath']);
	        $destination = $tmp['filepath'];
	        
	        // create file for screenshot
	        $file = field_file_save_file($filepath, array(), $destination);
	        $tmp2['field_screenshot_mockups'][$ii]["fid"] = $file["fid"];
	        $ii++;
	      }
     }
      
     install_node_export_import_from_file($import_path . $import_file, $tmp2,
          $owner);
  }
  
  //$_SESSION['silent_mode'] = false;
}//_toolsImport()

function _widget_store_sampleBundle() {
  $import_path = dirname(__FILE__) . '/import/bundles/';

  //Fetch available users from DB
  $db_users = array();
  $res = db_query('SELECT uid, name FROM users');
  while ($tmp = mysql_fetch_assoc($res)) {
    //Make assoc-array
    $db_users[$tmp['name']] = $tmp['uid'];
  }

  $_SESSION['silent_mode'] = true;

  $handle = opendir($import_path);

  while (($import_file = readdir($handle)) !== FALSE) {

  	if($import_file == '.' || $import_file == '..'){continue;}
  	
      $data = eval('return ' . file_get_contents($import_path . $import_file)
          . ";");

      $tmp2 = array();

      $owner = new stdClass();

      $owner->name = $data['name'];
      $owner->uid = $db_users[$data['name']];

      
      $ii = 0;
        foreach ($data['field_thumbnail'] as $tmp) {
        $filepath = "profiles/widget_store/images/thumbnails/" . basename($tmp['filepath']);
        $destination = $tmp['filepath'];

        // create file for thumb
        $file = field_file_save_file($filepath, array(), $destination); 
        $tmp2['field_thumbnail'][$ii]["fid"] = $file["fid"];
        $ii++;
      }

      $ii = 0;      
      foreach ($data['field_screenshots'] as $tmp) {
        $filepath = "profiles/widget_store/images/screenshots/" . basename($tmp['filepath']);
        $destination = $tmp['filepath'];
       
        // create file for screenshot
        $file = field_file_save_file($filepath, array(), $destination); 
        $tmp2['field_screenshots'][$ii]["fid"] = $file["fid"];
        $ii++;
      }
      
    install_node_export_import_from_file($import_path . $import_file, $tmp2, $owner);      
     
  }
  
  $_SESSION['silent_mode'] = false;
}//_toolsImport()

?>