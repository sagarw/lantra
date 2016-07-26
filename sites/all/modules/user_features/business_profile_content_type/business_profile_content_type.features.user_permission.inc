<?php
/**
 * @file
 * business_profile_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function business_profile_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_dev_premium_switch'.
  $permissions['create field_dev_premium_switch'] = array(
    'name' => 'create field_dev_premium_switch',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_mobile_number'.
  $permissions['create field_mobile_number'] = array(
    'name' => 'create field_mobile_number',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
      'premium account' => 'premium account',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_dev_premium_switch'.
  $permissions['edit field_dev_premium_switch'] = array(
    'name' => 'edit field_dev_premium_switch',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_mobile_number'.
  $permissions['edit field_mobile_number'] = array(
    'name' => 'edit field_mobile_number',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_dev_premium_switch'.
  $permissions['edit own field_dev_premium_switch'] = array(
    'name' => 'edit own field_dev_premium_switch',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_mobile_number'.
  $permissions['edit own field_mobile_number'] = array(
    'name' => 'edit own field_mobile_number',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
      'premium account' => 'premium account',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_dev_premium_switch'.
  $permissions['view field_dev_premium_switch'] = array(
    'name' => 'view field_dev_premium_switch',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_mobile_number'.
  $permissions['view field_mobile_number'] = array(
    'name' => 'view field_mobile_number',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'premium account' => 'premium account',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_dev_premium_switch'.
  $permissions['view own field_dev_premium_switch'] = array(
    'name' => 'view own field_dev_premium_switch',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_mobile_number'.
  $permissions['view own field_mobile_number'] = array(
    'name' => 'view own field_mobile_number',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
      'premium account' => 'premium account',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
