<?php
/**
 * @file
 * hr_boxes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_boxes_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer boxes.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit boxes.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'boxes',
  );

  return $permissions;
}
