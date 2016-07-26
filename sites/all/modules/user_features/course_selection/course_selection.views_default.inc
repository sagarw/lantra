<?php
/**
 * @file
 * course_selection.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function course_selection_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'courses';
  $view->description = '';
  $view->tag = 'Course selection';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My courses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
    12 => '12',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Header label';
  $handler->display->display_options['header']['area']['content'] = '<p>Here you are able to select which courses you offer locally and which courses you offer nationally.
Use the tick boxes to select the courses you deliver and use the ‘Bulk operations’ button to show whether you offer these locally or nationally.
Please note, you must perform this bulk operations task once for your national courses and once for your local courses.
Using the tick boxes on the grey panel will allow you to select all courses within that grouping.<p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>We show providers either delivering nationally or locally.
If you check locally, this will add your business address to the provider map.
If you check nationwide, we identify you as a national provider but with local delivery</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Flags: locally */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['ui_name'] = 'Locally';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Locally';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'locally';
  /* Relationship: Flags: nationwide */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['ui_name'] = 'Nationwide';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Nationwide';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'nationwide';
  /* Relationship: Flags: la_course_pending_approval */
  $handler->display->display_options['relationships']['flag_content_rel_3']['id'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_3']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_3']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_3']['ui_name'] = 'Pending Approval (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_3']['label'] = 'Pending Approval (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_3']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_3']['flag'] = 'la_course_pending_approval';
  /* Relationship: Flags: la_course_local_pending_approval */
  $handler->display->display_options['relationships']['flag_content_rel_5']['id'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_5']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_5']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_5']['ui_name'] = 'Pending Approval (Local)';
  $handler->display->display_options['relationships']['flag_content_rel_5']['label'] = 'Pending Approval (Local)';
  $handler->display->display_options['relationships']['flag_content_rel_5']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_5']['flag'] = 'la_course_local_pending_approval';
  /* Relationship: Flags: la_course_approved */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_2']['ui_name'] = 'Approved Flag (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'Approved Flag (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'la_course_approved';
  $handler->display->display_options['relationships']['flag_content_rel_2']['user_scope'] = 'any';
  /* Relationship: Flags: la_course_local_approved */
  $handler->display->display_options['relationships']['flag_content_rel_6']['id'] = 'flag_content_rel_6';
  $handler->display->display_options['relationships']['flag_content_rel_6']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_6']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_6']['relationship'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_6']['ui_name'] = 'Approved Flag (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_6']['label'] = 'Approved Flag (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_6']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_6']['flag'] = 'la_course_local_approved';
  $handler->display->display_options['relationships']['flag_content_rel_6']['user_scope'] = 'any';
  /* Relationship: Flags: la_course_local_approved */
  $handler->display->display_options['relationships']['flag_content_rel_4']['id'] = 'flag_content_rel_4';
  $handler->display->display_options['relationships']['flag_content_rel_4']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_4']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['ui_name'] = 'Locally Approved';
  $handler->display->display_options['relationships']['flag_content_rel_4']['label'] = 'Locally Approved';
  $handler->display->display_options['relationships']['flag_content_rel_4']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_4']['flag'] = 'la_course_local_approved';
  $handler->display->display_options['relationships']['flag_content_rel_4']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Sort criterion: Content: Category (field_category) */
  $handler->display->display_options['sorts']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['sorts']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['sorts']['field_category_tid']['field'] = 'field_category_tid';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
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
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );

  /* Display: Course Selector */
  $handler = $view->new_display('page', 'Course Selector', 'course_selector');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'popup_tags';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'term_node_tid',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'course-information';
  $handler->display->display_options['style_options']['columns'] = array(
    'term_node_tid' => 'term_node_tid',
    'title' => 'title',
    'ops' => 'ops',
    'ops_1' => 'ops_1',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: locally */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['ui_name'] = 'Locally';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Locally';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'locally';
  /* Relationship: Flags: nationwide */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['ui_name'] = 'Nationwide';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Nationwide';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'nationwide';
  /* Relationship: Flags: la_course_pending_approval */
  $handler->display->display_options['relationships']['flag_content_rel_3']['id'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_3']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_3']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_3']['ui_name'] = 'Pending Approval (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_3']['label'] = 'Pending Approval (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_3']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_3']['flag'] = 'la_course_pending_approval';
  /* Relationship: Flags: la_course_local_pending_approval */
  $handler->display->display_options['relationships']['flag_content_rel_5']['id'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_5']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_5']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_5']['ui_name'] = 'Pending Approval (Local)';
  $handler->display->display_options['relationships']['flag_content_rel_5']['label'] = 'Pending Approval (Local)';
  $handler->display->display_options['relationships']['flag_content_rel_5']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_5']['flag'] = 'la_course_local_pending_approval';
  /* Relationship: Flags: la_course_approved */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_2']['ui_name'] = 'Approved Flag (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'Approved Flag (Nationwide)';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'la_course_approved';
  $handler->display->display_options['relationships']['flag_content_rel_2']['user_scope'] = 'any';
  /* Relationship: Flags: la_course_local_approved */
  $handler->display->display_options['relationships']['flag_content_rel_6']['id'] = 'flag_content_rel_6';
  $handler->display->display_options['relationships']['flag_content_rel_6']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_6']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_6']['relationship'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_6']['ui_name'] = 'Approved Flag (Local)';
  $handler->display->display_options['relationships']['flag_content_rel_6']['label'] = 'Approved Flag (Local)';
  $handler->display->display_options['relationships']['flag_content_rel_6']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_6']['flag'] = 'la_course_local_approved';
  $handler->display->display_options['relationships']['flag_content_rel_6']['user_scope'] = 'any';
  /* Relationship: Flags: la_course_local_approved */
  $handler->display->display_options['relationships']['flag_content_rel_4']['id'] = 'flag_content_rel_4';
  $handler->display->display_options['relationships']['flag_content_rel_4']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_4']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['ui_name'] = 'Locally Approved';
  $handler->display->display_options['relationships']['flag_content_rel_4']['label'] = 'Locally Approved';
  $handler->display->display_options['relationships']['flag_content_rel_4']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_4']['flag'] = 'la_course_local_approved';
  $handler->display->display_options['relationships']['flag_content_rel_4']['user_scope'] = 'any';
  /* Relationship: Flags: la_course_approved */
  $handler->display->display_options['relationships']['flag_content_rel_7']['id'] = 'flag_content_rel_7';
  $handler->display->display_options['relationships']['flag_content_rel_7']['table'] = 'flagging';
  $handler->display->display_options['relationships']['flag_content_rel_7']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_7']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_7']['ui_name'] = 'Nationwide Approved';
  $handler->display->display_options['relationships']['flag_content_rel_7']['label'] = 'Nationwide Approved';
  $handler->display->display_options['relationships']['flag_content_rel_7']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_7']['flag'] = 'la_course_approved';
  $handler->display->display_options['relationships']['flag_content_rel_7']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Locally Requested */
  $handler->display->display_options['fields']['flagged_2']['id'] = 'flagged_2';
  $handler->display->display_options['fields']['flagged_2']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_2']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_2']['relationship'] = 'flag_content_rel_5';
  $handler->display->display_options['fields']['flagged_2']['ui_name'] = 'Locally Requested';
  $handler->display->display_options['fields']['flagged_2']['label'] = 'Locally Requested';
  $handler->display->display_options['fields']['flagged_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged_2']['type'] = 'boolean';
  $handler->display->display_options['fields']['flagged_2']['not'] = 0;
  /* Field: Nationwide Requested */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['fields']['flagged']['ui_name'] = 'Nationwide Requested';
  $handler->display->display_options['fields']['flagged']['label'] = 'Requested';
  $handler->display->display_options['fields']['flagged']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged']['type'] = 'boolean';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Field: Locally Approved */
  $handler->display->display_options['fields']['flagged_3']['id'] = 'flagged_3';
  $handler->display->display_options['fields']['flagged_3']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_3']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_3']['relationship'] = 'flag_content_rel_6';
  $handler->display->display_options['fields']['flagged_3']['ui_name'] = 'Locally Approved';
  $handler->display->display_options['fields']['flagged_3']['label'] = 'Approved';
  $handler->display->display_options['fields']['flagged_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged_3']['type'] = 'boolean';
  $handler->display->display_options['fields']['flagged_3']['not'] = 0;
  /* Field: Nationwide Approved */
  $handler->display->display_options['fields']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['fields']['flagged_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged_1']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['flagged_1']['ui_name'] = 'Nationwide Approved';
  $handler->display->display_options['fields']['flagged_1']['label'] = 'Approved';
  $handler->display->display_options['fields']['flagged_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged_1']['type'] = 'boolean';
  $handler->display->display_options['fields']['flagged_1']['not'] = 0;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'la_course_categories' => 'la_course_categories',
    'a_to_z' => 0,
    'assessment_type' => 0,
    'awarding_organisation' => 0,
    'business_classification' => 0,
    'country' => 0,
    'course_type' => 0,
    'course_classification' => 0,
    'course_delivery' => 0,
    'course_delivery_method' => 0,
    'course_language' => 0,
    'course_level' => 0,
    'course_timetable' => 0,
    'dependencies' => 0,
    'get_advice_section' => 0,
    'industry' => 0,
    'job_type' => 0,
    'language' => 0,
    'no_of_employees' => 0,
    'qualification_level' => 0,
    'qualification_level_scotland' => 0,
    'region' => 0,
    'salary_range' => 0,
    'tags' => 0,
    'test_taxonomy' => 0,
    'timetable' => 0,
    'work_hours' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'course-selector-course-title';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'course-title-label';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Locally';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops']['element_class'] = 'add-button';
  $handler->display->display_options['fields']['ops']['element_label_class'] = 'course-flag';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
  /* Field: Local - First Check */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Local - First Check';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'flagged_2';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '0';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[ops]';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Pending';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Local - Second Check */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Local - Second Check';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = 'Locally';
  $handler->display->display_options['fields']['views_conditional_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['views_conditional_1']['element_class'] = 'add-button';
  $handler->display->display_options['fields']['views_conditional_1']['element_label_class'] = 'course-flag';
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'flagged_3';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '[ops]';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = '[views_conditional]';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Nationwide';
  $handler->display->display_options['fields']['ops_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops_1']['element_class'] = 'add-button';
  $handler->display->display_options['fields']['ops_1']['element_label_class'] = 'course-flag';
  $handler->display->display_options['fields']['ops_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['ops_1']['link_type'] = 'toggle';
  /* Field: Nationwide - First Check */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Nationwide - First Check';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'flagged';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = '0';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = '[ops_1]';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Pending';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Nationwide - Second Check */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['ui_name'] = 'Nationwide - Second Check';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = 'Nationwide';
  $handler->display->display_options['fields']['views_conditional_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['views_conditional_3']['element_class'] = 'add-button';
  $handler->display->display_options['fields']['views_conditional_3']['element_label_class'] = 'course-flag';
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'flagged_1';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '[ops_1]';
  $handler->display->display_options['fields']['views_conditional_3']['or'] = '[views_conditional_2]';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Grouping';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['text'] = 'Add all';
  $handler->display->display_options['fields']['views_bulk_operations']['element_class'] = 'course-checkbox';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_class'] = 'course-checkbox';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::flag_node_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Bulk operations',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    3765 => '3765',
    3775 => '3775',
    3781 => '3781',
    3789 => '3789',
    3807 => '3807',
    3798 => '3798',
    3817 => '3817',
    3826 => '3826',
    3834 => '3834',
    3838 => '3838',
    3858 => '3858',
    3845 => '3845',
    3849 => '3849',
    3853 => '3853',
    3865 => '3865',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['group_info']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth']['group_info']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'la_course_categories';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  /* Filter criterion: Content revision: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'node_revision';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['mefibs'] = array(
    'course_selector' => array(
      'secondary_form_block' => array(),
    ),
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'locally' => 'locally',
    'nationwide' => 'nationwide',
    'ready_for_approval' => 0,
    'business_moderation' => 0,
    'reject_business' => 0,
    'dev_flag' => 0,
    'la_course_pending_approval' => 0,
    'la_course_approved' => 0,
    'requires_approval' => 0,
  );
  $handler->display->display_options['use_ajax_flags_noscrolltop'] = 1;
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';
  $handler->display->display_options['path'] = 'course-selector';

  /* Display: Display by term */
  $handler = $view->new_display('block', 'Display by term', 'display_by_term');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $translatables['courses'] = array(
    t('Master'),
    t('My courses'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Header label'),
    t('<p>Here you are able to select which courses you offer locally and which courses you offer nationally.
Use the tick boxes to select the courses you deliver and use the ‘Bulk operations’ button to show whether you offer these locally or nationally.
Please note, you must perform this bulk operations task once for your national courses and once for your local courses.
Using the tick boxes on the grey panel will allow you to select all courses within that grouping.<p>'),
    t('<p>We show providers either delivering nationally or locally.
If you check locally, this will add your business address to the provider map.
If you check nationwide, we identify you as a national provider but with local delivery</p>'),
    t('Locally'),
    t('Nationwide'),
    t('Pending Approval (Nationwide)'),
    t('Pending Approval (Local)'),
    t('Approved Flag (Nationwide)'),
    t('Locally Approved'),
    t('All'),
    t('Course Selector'),
    t('Select any filter and click on Apply to see results'),
    t('Approved Flag (Local)'),
    t('Nationwide Approved'),
    t('Locally Requested'),
    t('Requested'),
    t('Approved'),
    t('Title'),
    t('Grouping'),
    t('Add all'),
    t('- Choose an operation -'),
    t('Bulk operations'),
    t('Has taxonomy terms (with depth)'),
    t('Display by term'),
  );
  $export['courses'] = $view;

  return $export;
}
