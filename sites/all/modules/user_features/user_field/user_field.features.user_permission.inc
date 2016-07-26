<?php
/**
 * @file
 * user_field.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_field_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_premium_account'.
  $permissions['create field_premium_account'] = array(
    'name' => 'create field_premium_account',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_premium_account'.
  $permissions['edit field_premium_account'] = array(
    'name' => 'edit field_premium_account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_premium_account'.
  $permissions['edit own field_premium_account'] = array(
    'name' => 'edit own field_premium_account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_premium_account'.
  $permissions['view field_premium_account'] = array(
    'name' => 'view field_premium_account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_premium_account'.
  $permissions['view own field_premium_account'] = array(
    'name' => 'view own field_premium_account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
