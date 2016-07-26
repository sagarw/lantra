<?php
/**
 * @file
 * lantra_course_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lantra_course_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'provider_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Provider view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'page';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_profile' => 'business_profile',
  );

  /* Display: Provider */
  $handler = $view->new_display('page', 'Provider', 'provider_page');
  $handler->display->display_options['path'] = 'awards/provider_old/%/%';
  $translatables['provider_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Profile ID'),
    t('.'),
    t(','),
    t('All'),
    t('Provider'),
  );
  $export['provider_view'] = $view;

  $view = new view();
  $view->name = 'provider_view_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Provider View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Provider View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'business' => 'business',
  );

  /* Display: Provider Details */
  $handler = $view->new_display('page', 'Provider Details', 'page');
  $handler->display->display_options['path'] = 'awards/provider/%/%';
  $translatables['provider_view_content'] = array(
    t('Master'),
    t('Provider View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Provider Details'),
  );
  $export['provider_view_content'] = $view;

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Search Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Job Finder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'popup_tags';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 30, 40, 50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Indexed Node: Author */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* Relationship: Indexed Node: Category */
  $handler->display->display_options['relationships']['field_category']['id'] = 'field_category';
  $handler->display->display_options['relationships']['field_category']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_category']['field'] = 'field_category';
  /* Relationship: England qualification level */
  $handler->display->display_options['relationships']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['relationships']['field_qualification_level']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['relationships']['field_qualification_level']['ui_name'] = 'England qualification level';
  $handler->display->display_options['relationships']['field_qualification_level']['label'] = 'England qualification level';
  /* Relationship: Scotland qualification level */
  $handler->display->display_options['relationships']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['relationships']['field_scottish_qualification']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['relationships']['field_scottish_qualification']['ui_name'] = 'Scotland qualification level';
  $handler->display->display_options['relationships']['field_scottish_qualification']['label'] = 'Scotland qualification level';
  /* Relationship: Indexed Node: Course Type */
  $handler->display->display_options['relationships']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['relationships']['field_course_type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_course_type']['field'] = 'field_course_type';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_long_text1']['id'] = 'field_long_text1';
  $handler->display->display_options['fields']['field_long_text1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_long_text1']['field'] = 'field_long_text1';
  /* Field: Summary: Text (indexed) */
  $handler->display->display_options['fields']['field_summary_1_value']['id'] = 'field_summary_1_value';
  $handler->display->display_options['fields']['field_summary_1_value']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_summary_1_value']['field'] = 'field_summary_1_value';
  $handler->display->display_options['fields']['field_summary_1_value']['label'] = 'Full Description';
  $handler->display->display_options['fields']['field_summary_1_value']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Business search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:summary' => 'body:summary',
    'body:value' => 'body:value',
    'field_long_text1:value' => 'field_long_text1:value',
    'field_summary_1:value' => 'field_summary_1:value',
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business' => 'business',
  );

  /* Display: Provider Search */
  $handler = $view->new_display('page', 'Provider Search', 'provider_search');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Provider Search';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_long_text1']['id'] = 'field_long_text1';
  $handler->display->display_options['fields']['field_long_text1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_long_text1']['field'] = 'field_long_text1';
  /* Field: Summary: Text (indexed) */
  $handler->display->display_options['fields']['field_summary_1_value']['id'] = 'field_summary_1_value';
  $handler->display->display_options['fields']['field_summary_1_value']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_summary_1_value']['field'] = 'field_summary_1_value';
  $handler->display->display_options['fields']['field_summary_1_value']['label'] = 'Full Description';
  $handler->display->display_options['fields']['field_summary_1_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_region']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['label'] = 'Geo';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_neo_geo']['id'] = 'field_neo_geo';
  $handler->display->display_options['fields']['field_neo_geo']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_neo_geo']['field'] = 'field_neo_geo';
  $handler->display->display_options['fields']['field_neo_geo']['label'] = 'Neo Geo';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date created';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['path'] = 'provider-search-old';

  /* Display: Course Finder */
  $handler = $view->new_display('page', 'Course Finder', 'course_finder');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Course Finder';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Course search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:summary' => 'body:summary',
    'body:value' => 'body:value',
    'field_long_text1:value' => 'field_long_text1:value',
    'field_summary_1:value' => 'field_summary_1:value',
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['path'] = 'coursefinder';

  /* Display: Job Finder */
  $handler = $view->new_display('page', 'Job Finder', 'job_finder');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Business search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:summary' => 'body:summary',
    'body:value' => 'body:value',
    'field_long_text1:value' => 'field_long_text1:value',
    'field_summary_1:value' => 'field_summary_1:value',
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job' => 'job',
  );
  $handler->display->display_options['path'] = 'jobfinder';

  /* Display: Course Search */
  $handler = $view->new_display('page', 'Course Search', 'course_search');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Course Search';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'results-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'results-header';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['label'] = '';
  $handler->display->display_options['fields']['field_product_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_code']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_product_code']['delta_offset'] = '0';
  /* Field: Indexed Node: Summary / introduction */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['element_wrapper_class'] = 'results-content';
  $handler->display->display_options['fields']['field_summary']['element_default_classes'] = FALSE;
  /* Field: Indexed Node: Course Type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_type']['element_label_class'] = 'results-label';
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['element_wrapper_class'] = 'results-course-type';
  $handler->display->display_options['fields']['field_course_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_course_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_course_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Qualification Level */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_qualification_level']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_qualification_level']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_qualification_level']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_qualification_level']['bypass_access'] = 0;
  /* Field: Taxonomy term: Icon */
  $handler->display->display_options['fields']['field_icon_1']['id'] = 'field_icon_1';
  $handler->display->display_options['fields']['field_icon_1']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_icon_1']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon_1']['relationship'] = 'field_course_type';
  $handler->display->display_options['fields']['field_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_icon_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon_1']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_icon']['element_label_class'] = 'results-label';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['element_wrapper_class'] = 'results-icon';
  $handler->display->display_options['fields']['field_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  /* Field: Scotland qualification level */
  $handler->display->display_options['fields']['field_icon_2']['id'] = 'field_icon_2';
  $handler->display->display_options['fields']['field_icon_2']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_icon_2']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon_2']['relationship'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_icon_2']['ui_name'] = 'Scotland qualification level';
  $handler->display->display_options['fields']['field_icon_2']['label'] = '';
  $handler->display->display_options['fields']['field_icon_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon_2']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  /* Field: Display inline icons */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Display inline icons';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_icon_1] [field_icon] [field_icon_2] 
';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Product code */
  $handler->display->display_options['fields']['field_product_code_1']['id'] = 'field_product_code_1';
  $handler->display->display_options['fields']['field_product_code_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_product_code_1']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_product_code_1']['element_label_class'] = 'results-label';
  $handler->display->display_options['fields']['field_product_code_1']['element_wrapper_class'] = 'product-code';
  $handler->display->display_options['fields']['field_product_code_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_code_1']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_product_code_1']['delta_offset'] = '0';
  /* Field: Find providers */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Find providers';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Find providers';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'provider-search/[nid]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'search-results-button';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'providers-button';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '</br>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search our courses...';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'full_text_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:summary' => 'body:summary',
    'body:value' => 'body:value',
    'field_category:description' => 'field_category:description',
    'field_category:name' => 'field_category:name',
    'field_search_string' => 'field_search_string',
    'field_summary_1:value' => 'field_summary_1:value',
    'search_api_viewed' => 'search_api_viewed',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  $handler->display->display_options['mefibs'] = array(
    'blocks' => array(
      0 => array(
        'name' => 'Title Sort',
        'machine_name' => 'title_sort',
        'submit_button' => 'Submit',
        'reset_button' => NULL,
        'reset_button_label' => 'Reset',
        'autosubmit' => '1',
        'autosubmit_hide' => '1',
      ),
      1 => array(
        'name' => 'course-search-bef',
        'machine_name' => 'course_search_bef',
        'submit_button' => 'Search',
        'reset_button' => NULL,
        'reset_button_label' => 'Reset',
        'autosubmit' => NULL,
        'autosubmit_hide' => NULL,
      ),
    ),
    'extras' => array(
      'sort' => -1,
      'items_per_page' => -1,
    ),
    'course_search' => array(
      'secondary_form_block' => array(),
      'filter' => array(
        'search_api_views_fulltext' => array(
          0 => 'default',
          1 => 'course_search_bef',
        ),
      ),
      'sort_block' => array(),
      'other' => array(
        'items_per_page' => array(
          0 => 'default',
          1 => 'title_sort',
        ),
        'offset' => array(),
      ),
    ),
  );
  $handler->display->display_options['path'] = 'coursesearch';

  /* Display: Course Select */
  $handler = $view->new_display('page', 'Course Select', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'vefl_bef';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['exposed_form']['options']['layout']['regions'] = array(
    'middle' => 'Middle column',
    'sort_by' => 'fourth',
    'sort_order' => 'fourth',
    'items_per_page' => 'fourth',
    'offset' => 'first',
    'button' => 'first',
    'reset_button' => 'first',
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lantra_awards_course' => 'lantra_awards_course',
  );
  $handler->display->display_options['path'] = 'course-select';

  /* Display: Course Search test */
  $handler = $view->new_display('page', 'Course Search test', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Course Search';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 30, 40, 50';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'results-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'results-header';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'test_la_course' => 'test_la_course',
  );
  $handler->display->display_options['mefibs'] = array(
    'blocks' => array(
      0 => array(
        'name' => 'Title Sort',
        'machine_name' => 'title_sort',
        'submit_button' => 'Submit',
        'reset_button' => NULL,
        'reset_button_label' => 'Reset',
        'autosubmit' => '1',
        'autosubmit_hide' => '1',
      ),
      1 => array(
        'name' => 'course-search-bef',
        'machine_name' => 'course_search_bef',
        'submit_button' => 'Submit',
        'reset_button' => FALSE,
        'reset_button_label' => 'Reset',
        'autosubmit' => FALSE,
        'autosubmit_hide' => FALSE,
      ),
    ),
    'extras' => array(
      'sort' => -1,
      'items_per_page' => -1,
    ),
    'course_search' => array(
      'secondary_form_block' => array(
        0 => 'default',
      ),
      'filter' => array(
        'search_api_views_fulltext' => array(
          0 => 'default',
        ),
      ),
      'sort_block' => array(
        0 => 'default',
      ),
      'other' => array(
        'items_per_page' => array(
          0 => 'default',
        ),
        'offset' => array(),
      ),
    ),
  );
  $handler->display->display_options['path'] = 'coursesearchtest';

  /* Display: News Search */
  $handler = $view->new_display('page', 'News Search', 'news_search');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News Search';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'results-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['regions'] = array(
    'title' => 'right',
    'field_image' => 'left',
    'body' => 'right',
    'created' => 'right',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'results-header';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'full_text_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:summary' => 'body:summary',
    'body:value' => 'body:value',
    'field_category:description' => 'field_category:description',
    'field_category:name' => 'field_category:name',
    'field_long_text1:value' => 'field_long_text1:value',
    'field_search_string' => 'field_search_string',
    'field_summary_1:value' => 'field_summary_1:value',
    'search_api_viewed' => 'search_api_viewed',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_item' => 'news_item',
  );
  $handler->display->display_options['mefibs'] = array(
    'blocks' => array(
      0 => array(
        'name' => 'Title Sort',
        'machine_name' => 'title_sort',
        'submit_button' => 'Submit',
        'reset_button' => NULL,
        'reset_button_label' => 'Reset',
        'autosubmit' => '1',
        'autosubmit_hide' => '1',
      ),
      1 => array(
        'name' => 'course-search-bef',
        'machine_name' => 'course_search_bef',
        'submit_button' => 'Search',
        'reset_button' => NULL,
        'reset_button_label' => 'Reset',
        'autosubmit' => NULL,
        'autosubmit_hide' => NULL,
      ),
    ),
    'extras' => array(
      'sort' => -1,
      'items_per_page' => -1,
    ),
    'course_search' => array(
      'secondary_form_block' => array(),
      'filter' => array(
        'search_api_views_fulltext' => array(
          0 => 'default',
          1 => 'course_search_bef',
        ),
      ),
      'sort_block' => array(),
      'other' => array(
        'items_per_page' => array(),
        'offset' => array(),
      ),
    ),
    'page_3' => array(
      'other' => array(
        'items_per_page' => array(
          0 => 'default',
          1 => 'title_sort',
        ),
        'offset' => array(),
      ),
    ),
    'news_search' => array(
      'filter' => array(
        'search_api_views_fulltext' => array(
          0 => 'default',
        ),
      ),
      'other' => array(
        'items_per_page' => array(
          0 => 'default',
          1 => 'title_sort',
          2 => 'course_search_bef',
        ),
        'offset' => array(),
      ),
    ),
  );
  $handler->display->display_options['path'] = 'newssearch';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_course_type');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['block_description'] = 'Course type facet block';
  $translatables['search'] = array(
    t('Master'),
    t('Job Finder'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('Author'),
    t('Category'),
    t('England qualification level'),
    t('Scotland qualification level'),
    t('Course Type'),
    t('Broken handler search_api_index_default_node_index.field_long_text1'),
    t('Full Description'),
    t('Business search'),
    t('Provider Search'),
    t('Region'),
    t('Geo'),
    t('Neo Geo'),
    t('Relevance'),
    t('Date created'),
    t('Title'),
    t('Course Finder'),
    t('Course search'),
    t('Course Search'),
    t('.'),
    t('Qualification Level'),
    t('[field_icon_1] [field_icon] [field_icon_2] 
'),
    t('Product code'),
    t('Find providers'),
    t('</br>'),
    t('Search our courses...'),
    t('Course Select'),
    t('Apply'),
    t('Course Search test'),
    t('News Search'),
    t('Facets block'),
    t('Course type facet block'),
  );
  $export['search'] = $view;

  return $export;
}
