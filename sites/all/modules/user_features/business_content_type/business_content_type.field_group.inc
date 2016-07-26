<?php
/**
 * @file
 * business_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function business_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_premium_listing|node|business|form';
  $field_group->group_name = 'group_premium_listing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'business';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Premium Business Listing',
    'weight' => '12',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_linkedin',
      2 => 'field_logo',
      3 => 'field_twitter',
      4 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-premium-listing field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_premium_listing|node|business|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Premium Business Listing');

  return $field_groups;
}
