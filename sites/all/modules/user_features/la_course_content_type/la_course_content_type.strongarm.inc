<?php
/**
 * @file
 * la_course_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function la_course_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_la_course';
  $strongarm->value = 0;
  $export['comment_anonymous_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_la_course';
  $strongarm->value = 1;
  $export['comment_default_mode_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_la_course';
  $strongarm->value = '50';
  $export['comment_default_per_page_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_la_course';
  $strongarm->value = 1;
  $export['comment_form_location_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_la_course';
  $strongarm->value = '1';
  $export['comment_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_la_course';
  $strongarm->value = '1';
  $export['comment_preview_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_la_course';
  $strongarm->value = 1;
  $export['comment_subject_field_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__la_course';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'learner_view' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'PDF' => array(
        'custom_settings' => TRUE,
      ),
      'field_readonly' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '28',
        ),
        'title' => array(
          'weight' => '8',
        ),
        'path' => array(
          'weight' => '27',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'PDF' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
        ),
        'flag_la_course_provider_approval' => array(
          'full' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
        ),
        'flag_la_course_pending_approval' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
        ),
        'flag_la_course_local_pending_approval' => array(
          'full' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_la_course';
  $strongarm->value = '0';
  $export['language_content_type_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_la_course';
  $strongarm->value = array();
  $export['menu_options_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_la_course';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_la_course';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision_moderation',
    2 => 'revision',
  );
  $export['node_options_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_la_course';
  $strongarm->value = '1';
  $export['node_preview_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_la_course';
  $strongarm->value = 0;
  $export['node_submitted_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_la_course_pattern';
  $strongarm->value = 'awards/product/[node:title]';
  $export['pathauto_node_la_course_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_assessment_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_assessment_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_course_delivery_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_course_delivery_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_course_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_course_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_language_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_language_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_la_course_categories_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_la_course_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_qualification_level_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_qualification_level_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_qualification_level_scotland_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_qualification_level_scotland_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_comp_la_course';
  $strongarm->value = 'each';
  $export['unique_field_comp_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_fields_la_course';
  $strongarm->value = array(
    0 => 'field_product_code',
  );
  $export['unique_field_fields_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_scope_la_course';
  $strongarm->value = 'type';
  $export['unique_field_scope_la_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_show_matches_la_course';
  $strongarm->value = array();
  $export['unique_field_show_matches_la_course'] = $strongarm;

  return $export;
}
