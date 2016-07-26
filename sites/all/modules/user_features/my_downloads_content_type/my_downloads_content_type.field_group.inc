<?php
/**
 * @file
 * my_downloads_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function my_downloads_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landing_page|node|file|form';
  $field_group->group_name = 'group_landing_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'file';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Landing Page Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_appears_on',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Landing Page Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-landing-page field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_landing_page|node|file|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Page Details');

  return $field_groups;
}
