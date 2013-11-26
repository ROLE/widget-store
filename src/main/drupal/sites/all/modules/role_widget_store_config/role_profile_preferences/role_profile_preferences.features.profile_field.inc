<?php

/**
 * Implementation of hook_profile_default_profile_fields().
 */
function role_profile_preferences_profile_default_profile_fields() {
$profile_fields = array();
$profile_fields['profile_about_me'] = array(
  'title' => 'About me',
  'name' => 'profile_about_me',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textarea',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_birthday'] = array(
  'title' => 'Birthday',
  'name' => 'profile_birthday',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'date',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_first_name'] = array(
  'title' => 'First name',
  'name' => 'profile_first_name',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_name'] = array(
  'title' => 'Name',
  'name' => 'profile_name',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_role'] = array(
  'title' => 'Role',
  'name' => 'profile_role',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'selection',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => 'Researcher
Developer
Educator
Student
Political Stakeholder
Educational Provider
Vendor
Other',
);
return $profile_fields;
}
