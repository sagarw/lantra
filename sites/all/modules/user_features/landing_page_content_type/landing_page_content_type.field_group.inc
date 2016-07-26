<?php
/**
 * @file
 * landing_page_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landing_page_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parent_page|node|landing_page|form';
  $field_group->group_name = 'group_parent_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Parent Page',
    'weight' => '13',
    'children' => array(
      0 => 'field_parent_page',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Parent Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-parent-page field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_parent_page|node|landing_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Parent Page');

  return $field_groups;
}
