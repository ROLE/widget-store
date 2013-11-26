<?php

/**
 * @file user-profile.tpl.php
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * By default, all user profile data is printed out with the $user_profile
 * variable. If there is a need to break it up you can use $profile instead.
 * It is keyed to the name of each category or other data attached to the
 * account. If it is a category it will contain all the profile items. By
 * default $profile['summary'] is provided which contains data on the user's
 * history. Other data can be included by modules. $profile['user_picture'] is
 * available by default showing the account picture.
 *
 * Also keep in mind that profile items and their categories can be defined by
 * site administrators. They are also available within $profile. For example,
 * if a site is configured with a category of "contact" with
 * fields for of addresses, phone numbers and other related info, then doing a
 * straight print of $profile['contact'] will output everything in the
 * category. This is useful for altering source order and adding custom
 * markup for the group.
 *
 * To check for all available data within $profile, use the code below.
 * @code
 *   print '<pre>'. check_plain(print_r($profile, 1)) .'</pre>';
 * @endcode
 *
 * Available variables:
 *   - $user_profile: All user profile data. Ready for print.
 *   - $profile: Keyed array of profile categories and their items or other data
 *     provided by modules.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 */


//add javascript for the tabs
jquery_ui_add('ui.tabs');

//load profile
profile_load_profile($account);

//load the tool view
$tool_view = views_get_view('profile_number_of_tools');
$tool_view_display_id = 'default';
$tool_view_myArgs = array(
  $account->uid
);
$tool_view_mark_up = $tool_view->preview($tool_view_display_id, $tool_view_myArgs);

//load the bundle view
$bundle_view = views_get_view('profile_bundle_list');
$bundle_view_display_id = 'default';
$bundle_view_myArgs = array(
  $account->uid
);
$bundle_view_mark_up = $bundle_view->preview($bundle_view_display_id, $bundle_view_myArgs);

$bundle_view = views_get_view('profile_user_report_list');
$bundle_view_display_id = 'default';
$bundle_view_myArgs = array(
  $account->uid
);
$report_view_mark_up = $bundle_view->preview($bundle_view_display_id, $bundle_view_myArgs);

//compute data
$user_name = (($account->private_profile_first_name == 0) ? $account->profile_first_name.' ' : '')
             .(($account->private_profile_name == 0) ? $account->profile_name: '');

if(($account->private_profile_first_name == 1) || ($account->private_profile_name == 1)){
	$user_name = t("Not visible");
}
if($user_name == ''){
  $user_name = t("Not given");
}

$birthday = (($account->private_profile_birthday == 0) ? 
                  $account->profile_birthday['day'].'/'.$account->profile_birthday['month']
                  .'/'.$account->profile_birthday['year'] : 'Not visible');  

if($birthday == "//"){
	$birthday = 'Not given';
}

$about_me = ($account->private_profile_about_me == 0) ? $account->profile_about_me : ''; 

$roles = ($account->private_profile_role == 0) ? $account->profile_role: 'Not visible';

if($roles == ""){
	$roles = 'None';
}


?>
<script>
  $(function() {
    $( "#tabs" ).tabs();
  });
</script>

<div class="profile ">
  <div class="picture grid12-3-inner grid12-inner first">
    <?php print $profile['user_picture']; ?>
  </div>
  <div class="content_counters grid12-2-inner grid12-inner last">
  	<div class="tool_counter">
  		<div class="counter_number"><span><?php print (count($tool_view->result)); ?></span></div>
  		<div class="counter_text">Tool<?php print (count($tool_view->result) != 1 ) ? 's' : '' ?> </div>
  	</div>
  	<div class="bundle_counter">
  		<div class="counter_number"><span><?php print (count($bundle_view->result)); ?></span></div>
  		<div class="counter_text">Bundle<?php print (count($bundle_view->result) != 1 ) ? 's' : '' ?></div>
  	</div>
  </div>

  <div class="user-data grid12-5-inner grid12-inner last">
  	<table>
  		<tr>
  			<td class="first">Name</td>
				<td class="second"><?php print $user_name ?></td>
  		</tr>
  		<tr>
  			<td class="first">Birthday</td>
				<td class="second"><?php print $birthday ?></td>
  		</tr>
  		<tr>
  			<td class="first">Member since</td>
				<td class="second"><?php print (format_date($account->created, 'small'));?></td>
  		</tr>
  		<tr>
  			<td class="first">Roles</td>
				<td class="second"><?php print $roles ?></td>
  		</tr>
  		<tr>
  			<td class="first">Email</td>
				<td class="second"><?php print check_markup($account->mail,1) ?></td>
  		</tr>
  	
  	</table> 	
  
  </div>
  
  <div class="cleaner"></div>
  
  <?php if ($account->private_profile_role == 0){ ?>
	<div class="about-me grid12-12-inner first last">
		<h3>About me</h3>
		<span><?php print $about_me ?></span>
	</div>
	<?php }; ?>
  
  
   
  <div id="tabs" class="grid12-12-inner first last">
    <ul>
      <li class="green-tab"><a href="#tabs-1">My Tools</a></li>
      <li class="blue-tab"><a href="#tabs-2">My Bundles</a></li>
      <li class="green-tab"><a href="#tabs-3">My Reports</a></li>
    </ul>
  	<div id="tabs-1">
  		<div class="ui-tabs-panel-inner ui-corner-all light-green-table">
        <?php print $tool_view_mark_up; ?>                       
  		</div>
  	</div>
  
  	<div id="tabs-2">
  		<div class="ui-tabs-panel-inner ui-corner-all blue-table">
       <?php print $bundle_view_mark_up; ?>
  		</div>
  	</div>
  	
  	<div id="tabs-3">
  		<div class="ui-tabs-panel-inner ui-corner-all blue-table">
       <?php print $report_view_mark_up; ?>
  		</div>
  	</div>


  	<div class="cleaner"></div>
  </div>  
  
</div>
