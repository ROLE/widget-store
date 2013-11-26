<?php

function _system_config_configure_better_formats() {

  $anonymous_user_rid = install_get_rid('anonymous user');
  $authenticated_user_rid = install_get_rid('authenticated user');
  $editor_user_rid = install_get_rid('editor');
  $manager_rid = install_get_rid('manager');
  $moderator_rid = install_get_rid('moderator');
  $partner_rid = install_get_rid('partner');
  $reviewer_rid = install_get_rid('reviewer');
  $services_rid = install_get_rid('services');

  $better_format_config = array(
      'node' => array(
        'format' => 1, 'type_weight' => 1, 'weight' => 25,
      ),
      'comment' => array(
        'format' => 1, 'type_weight' => 1, 'weight' => 25,
      ),
      'block' => array(
        'format' => 1, 'type_weight' => 1, 'weight' => 25,
      ),
  );

  _system_config_better_formats_new_role($anonymous_user_rid, $better_format_config);
  _system_config_better_formats_new_role($authenticated_user_rid, $better_format_config);
  _system_config_better_formats_new_role($editor_user_rid, $better_format_config);
  _system_config_better_formats_new_role($manager_rid, $better_format_config);
  _system_config_better_formats_new_role($moderator_rid, $better_format_config);
  _system_config_better_formats_new_role($partner_rid, $better_format_config);
  _system_config_better_formats_new_role($reviewer_rid, $better_format_config);
  _system_config_better_formats_new_role($services_rid, $better_format_config);

}

/**
 * Creates base format default entry for a newly created role.
 *
 * @see better_formats_form_alter()
 */
function _system_config_better_formats_new_role($rid, $config) {

  // Remove current db entries if exists.
  $sql = "DELETE FROM {better_formats_defaults}
            WHERE rid='%d'";
  db_query($sql, $rid);

  // Create role table entries.
  $sql = "INSERT INTO {better_formats_defaults}
  			(rid, type, format, type_weight, weight)
          	VALUES (%d, '%s', %d, %d, %d)";
  db_query($sql, $rid, 'node', $config['node']['format'],
      $config['node']['type_weight'], $config['node']['weight']);
  db_query($sql, $rid, 'comment', $config['comment']['format'],
      $config['comment']['type_weight'], $config['comment']['weight']);
  db_query($sql, $rid, 'block', $config['block']['format'],
      $config['block']['type_weight'], $config['block']['weight']);
}
