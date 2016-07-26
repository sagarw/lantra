<?php
/**
 * @file
 * user_field.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function user_field_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_premium_account'.
  $field_instances['user-user-field_premium_account'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_premium_account',
    'label' => 'Premium account',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 51,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Premium account');

  return $field_instances;
}
