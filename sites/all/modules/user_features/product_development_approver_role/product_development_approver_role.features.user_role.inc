<?php
/**
 * @file
 * product_development_approver_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function product_development_approver_role_user_default_roles() {
  $roles = array();

  // Exported role: Product Development Approver.
  $roles['Product Development Approver'] = array(
    'name' => 'Product Development Approver',
    'weight' => 6,
  );

  return $roles;
}
