<?php
/**
 * @file
 * la_course_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function la_course_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_clone'.
  $permissions['create field_clone'] = array(
    'name' => 'create field_clone',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_moderation_note'.
  $permissions['create field_moderation_note'] = array(
    'name' => 'create field_moderation_note',
    'roles' => array(
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_special_requirements'.
  $permissions['create field_special_requirements'] = array(
    'name' => 'create field_special_requirements',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_summary_introduction_clone'.
  $permissions['create field_summary_introduction_clone'] = array(
    'name' => 'create field_summary_introduction_clone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_variation_term'.
  $permissions['create field_variation_term'] = array(
    'name' => 'create field_variation_term',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_clone'.
  $permissions['edit field_clone'] = array(
    'name' => 'edit field_clone',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_moderation_note'.
  $permissions['edit field_moderation_note'] = array(
    'name' => 'edit field_moderation_note',
    'roles' => array(
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_special_requirements'.
  $permissions['edit field_special_requirements'] = array(
    'name' => 'edit field_special_requirements',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_summary_introduction_clone'.
  $permissions['edit field_summary_introduction_clone'] = array(
    'name' => 'edit field_summary_introduction_clone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_variation_term'.
  $permissions['edit field_variation_term'] = array(
    'name' => 'edit field_variation_term',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_clone'.
  $permissions['edit own field_clone'] = array(
    'name' => 'edit own field_clone',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_moderation_note'.
  $permissions['edit own field_moderation_note'] = array(
    'name' => 'edit own field_moderation_note',
    'roles' => array(
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_special_requirements'.
  $permissions['edit own field_special_requirements'] = array(
    'name' => 'edit own field_special_requirements',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_summary_introduction_clone'.
  $permissions['edit own field_summary_introduction_clone'] = array(
    'name' => 'edit own field_summary_introduction_clone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_variation_term'.
  $permissions['edit own field_variation_term'] = array(
    'name' => 'edit own field_variation_term',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_clone'.
  $permissions['view field_clone'] = array(
    'name' => 'view field_clone',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_moderation_note'.
  $permissions['view field_moderation_note'] = array(
    'name' => 'view field_moderation_note',
    'roles' => array(
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_special_requirements'.
  $permissions['view field_special_requirements'] = array(
    'name' => 'view field_special_requirements',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_summary_introduction_clone'.
  $permissions['view field_summary_introduction_clone'] = array(
    'name' => 'view field_summary_introduction_clone',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_variation_term'.
  $permissions['view field_variation_term'] = array(
    'name' => 'view field_variation_term',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_clone'.
  $permissions['view own field_clone'] = array(
    'name' => 'view own field_clone',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_moderation_note'.
  $permissions['view own field_moderation_note'] = array(
    'name' => 'view own field_moderation_note',
    'roles' => array(
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_special_requirements'.
  $permissions['view own field_special_requirements'] = array(
    'name' => 'view own field_special_requirements',
    'roles' => array(
      'LA Provider' => 'LA Provider',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_summary_introduction_clone'.
  $permissions['view own field_summary_introduction_clone'] = array(
    'name' => 'view own field_summary_introduction_clone',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_variation_term'.
  $permissions['view own field_variation_term'] = array(
    'name' => 'view own field_variation_term',
    'roles' => array(
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
