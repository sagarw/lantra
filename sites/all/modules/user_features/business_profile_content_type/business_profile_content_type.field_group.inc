<?php
/**
 * @file
 * business_profile_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function business_profile_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_premium_listing|profile2|business_profile|form';
  $field_group->group_name = 'group_premium_listing';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'business_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Premium business listing',
    'weight' => '13',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_website',
      2 => 'field_twitter',
      3 => 'field_facebook',
      4 => 'field_linkedin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Premium business listing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-premium-listing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_premium_listing|profile2|business_profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Premium business listing');

  return $field_groups;
}
