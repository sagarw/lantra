<?php
/**
 * @file
 * user_field.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function user_field_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_premium_account'.
  $field_bases['field_premium_account'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_premium_account',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
      'user_role_field' => array(
        1 => 0,
        2 => 0,
        3 => 3,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        16 => 0,
        17 => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
