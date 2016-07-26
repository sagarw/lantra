<?php
/**
 * @file
 * lantra_moderation_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lantra_moderation_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Editor' => 'Editor',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'clear flags'.
  $permissions['clear flags'] = array(
    'name' => 'clear flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag_clear',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Editor' => 'Editor',
      'Premium Plus Training Provider' => 'Premium Plus Training Provider',
      'Premium Training Provider' => 'Premium Training Provider',
      'Product Development' => 'Product Development',
      'Product Development Approver' => 'Product Development Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
