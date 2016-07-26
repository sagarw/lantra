<?php
/**
 * @file
 * views_bulk_operations_field_updater.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_bulk_operations_field_updater_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bulk_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulk Operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bulk Operations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Variation */
  $handler->display->display_options['fields']['field_variation_term']['id'] = 'field_variation_term';
  $handler->display->display_options['fields']['field_variation_term']['table'] = 'field_data_field_variation_term';
  $handler->display->display_options['fields']['field_variation_term']['field'] = 'field_variation_term';
  $handler->display->display_options['fields']['field_variation_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'la_course::field_variation_term' => 'la_course::field_variation_term',
        ),
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
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
    18 => 0,
  );
  /* Filter criterion: Content: Variation (field_variation_term) */
  $handler->display->display_options['filters']['field_variation_term_tid']['id'] = 'field_variation_term_tid';
  $handler->display->display_options['filters']['field_variation_term_tid']['table'] = 'field_data_field_variation_term';
  $handler->display->display_options['filters']['field_variation_term_tid']['field'] = 'field_variation_term_tid';
  $handler->display->display_options['filters']['field_variation_term_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_variation_term_tid']['value'] = '';
  $handler->display->display_options['filters']['field_variation_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_variation_term_tid']['expose']['operator_id'] = 'field_variation_term_tid_op';
  $handler->display->display_options['filters']['field_variation_term_tid']['expose']['label'] = 'Variation (field_variation_term)';
  $handler->display->display_options['filters']['field_variation_term_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_variation_term_tid']['expose']['operator'] = 'field_variation_term_tid_op';
  $handler->display->display_options['filters']['field_variation_term_tid']['expose']['identifier'] = 'field_variation_term_tid';
  $handler->display->display_options['filters']['field_variation_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
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
    18 => 0,
  );
  $handler->display->display_options['filters']['field_variation_term_tid']['vocabulary'] = 'course_variation';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bulk-operations';
  $translatables['bulk_operations'] = array(
    t('Master'),
    t('Bulk Operations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Variation'),
    t('Content'),
    t('- Choose an operation -'),
    t('Type'),
    t('Variation (field_variation_term)'),
    t('Page'),
  );
  $export['bulk_operations'] = $view;

  return $export;
}
