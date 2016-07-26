<?php
/**
 * @file
 * job_provider_view_and_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function job_provider_view_and_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'job_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_job_index';
  $view->human_name = 'Job Finder';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'results-row';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['layout'] = 'twocol_stacked';
  $handler->display->display_options['row_options']['regions'] = array(
    'nid' => 'top',
    'title' => 'top',
    'field_location' => 'left',
    'field_salary' => 'left',
    'field_job_type' => 'left',
    'field_company' => 'left',
    'field_closing_date' => 'left',
    'field_description' => 'right',
    'field_summary' => 'right',
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Salary */
  $handler->display->display_options['fields']['field_salary']['id'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_salary']['field'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['label'] = '';
  $handler->display->display_options['fields']['field_salary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_salary']['type'] = 'number_decimal';
  /* Field: Indexed Node: Job Type */
  $handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['label'] = '';
  $handler->display->display_options['fields']['field_job_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_job_type']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Closing Date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['label'] = '';
  $handler->display->display_options['fields']['field_closing_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Business Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: FBAASS Geo Locator » Well-known text */
  $handler->display->display_options['fields']['field_geo_locator_geom']['id'] = 'field_geo_locator_geom';
  $handler->display->display_options['fields']['field_geo_locator_geom']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_geo_locator_geom']['field'] = 'field_geo_locator_geom';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for careers...';
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
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Job Finder */
  $handler = $view->new_display('page', 'Job Finder', 'job_finder');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Salary */
  $handler->display->display_options['fields']['field_salary']['id'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_salary']['field'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['label'] = '';
  $handler->display->display_options['fields']['field_salary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_salary']['type'] = 'number_decimal';
  /* Field: Indexed Node: Job Type */
  $handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['label'] = '';
  $handler->display->display_options['fields']['field_job_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_job_type']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Closing Date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['label'] = '';
  $handler->display->display_options['fields']['field_closing_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Business Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['mefibs'] = array(
    'job_finder' => array(
      'secondary_form_block' => array(),
    ),
  );
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'job-finder';

  /* Display: Map View (depreciated) */
  $handler = $view->new_display('page', 'Map View (depreciated)', 'job_map_view');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_min_zoom'] = '1';
  $handler->display->display_options['style_options']['map_max_zoom'] = '19';
  $handler->display->display_options['style_options']['marker_url_field'] = 'nid';
  $handler->display->display_options['style_options']['marker_title_field'] = 'title';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 0;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 0;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['layout'] = 'twocol_stacked';
  $handler->display->display_options['row_options']['regions'] = array(
    'nid' => 'top',
    'title' => 'top',
    'field_location' => 'left',
    'field_salary' => 'left',
    'field_job_type' => 'left',
    'field_company' => 'left',
    'field_closing_date' => 'left',
    'field_description' => 'right',
    'field_summary' => 'right',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Salary */
  $handler->display->display_options['fields']['field_salary']['id'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_salary']['field'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['label'] = '';
  $handler->display->display_options['fields']['field_salary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_salary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_salary']['type'] = 'number_decimal';
  $handler->display->display_options['fields']['field_salary']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Job Type */
  $handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['label'] = '';
  $handler->display->display_options['fields']['field_job_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_job_type']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Closing Date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['label'] = '';
  $handler->display->display_options['fields']['field_closing_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Business Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: FBAASS Geo Locator » Well-known text */
  $handler->display->display_options['fields']['field_geo_locator_geom']['id'] = 'field_geo_locator_geom';
  $handler->display->display_options['fields']['field_geo_locator_geom']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['field_geo_locator_geom']['field'] = 'field_geo_locator_geom';
  $handler->display->display_options['fields']['field_geo_locator_geom']['label'] = '';
  $handler->display->display_options['fields']['field_geo_locator_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_locator_geom']['link_to_entity'] = 0;
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'job-finder-map';
  $translatables['job_search'] = array(
    t('Master'),
    t('Job Finder'),
    t('more'),
    t('Search'),
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
    t('Displaying @start - @end of @total'),
    t('Node ID'),
    t('.'),
    t('FBAASS Geo Locator » Well-known text'),
    t('Search for careers...'),
    t('Map View (depreciated)'),
  );
  $export['job_search'] = $view;

  $view = new view();
  $view->name = 'job_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Job Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Apply Modal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    12 => '12',
    4 => '4',
    11 => '11',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Provider';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Provider\'s profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'business_profile' => 'business_profile',
  );
  /* Field: Profile: Dev Premium Switch */
  $handler->display->display_options['fields']['field_dev_premium_switch']['id'] = 'field_dev_premium_switch';
  $handler->display->display_options['fields']['field_dev_premium_switch']['table'] = 'field_data_field_dev_premium_switch';
  $handler->display->display_options['fields']['field_dev_premium_switch']['field'] = 'field_dev_premium_switch';
  $handler->display->display_options['fields']['field_dev_premium_switch']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_dev_premium_switch']['label'] = '';
  $handler->display->display_options['fields']['field_dev_premium_switch']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dev_premium_switch']['element_label_colon'] = FALSE;
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Premium logo */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Premium logo';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_dev_premium_switch';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_logo]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Field: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Field: Business Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  /* Field: Field: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  /* Field: Field: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  /* Field: Field: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
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

  /* Display: Job Listing */
  $handler = $view->new_display('page', 'Job Listing', 'job_listings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Job listings';
  $handler->display->display_options['path'] = 'job-views';

  /* Display: Job Provider Details */
  $handler = $view->new_display('block', 'Job Provider Details', 'job_provider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Provider Details';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Apply Modal (Provider) */
  $handler = $view->new_display('block', 'Apply Modal (Provider)', 'apply_modal');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Apply';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'For further information about this position, or to make an application, please contact:';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Please note that Lantra is acting soley as an advertising agent in respect to this position and takes no responsibility for the accuracy of the listing. Lantra isn’t involved in any way in the selection or subsequent recruitment of candidates.';
  $handler->display->display_options['footer']['area']['format'] = 'popup_tags';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Field: Business name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'field_data_field_business_name';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_name']['label'] = '';
  $handler->display->display_options['fields']['field_business_name']['element_label_colon'] = FALSE;
  /* Field: Field: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Job detail snap-in */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Job detail snap-in';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'job_views';
  $handler->display->display_options['fields']['view']['display'] = 'job_detail_snapin';

  /* Display: Job detail snapin */
  $handler = $view->new_display('block', 'Job detail snapin', 'job_detail_snapin');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reference/ID */
  $handler->display->display_options['fields']['field_reference_id']['id'] = 'field_reference_id';
  $handler->display->display_options['fields']['field_reference_id']['table'] = 'field_data_field_reference_id';
  $handler->display->display_options['fields']['field_reference_id']['field'] = 'field_reference_id';
  /* Field: Content: Closing Date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Create Job */
  $handler = $view->new_display('block', 'Create Job', 'create_a_job');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Create a Job';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Premium account */
  $handler->display->display_options['fields']['field_premium_account']['id'] = 'field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['table'] = 'field_data_field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['field'] = 'field_premium_account';
  $handler->display->display_options['fields']['field_premium_account']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_premium_account']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_type'] = 'div';
  $handler->display->display_options['fields']['views_conditional']['element_class'] = 'button ';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_premium_account';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<a href="/node/add/job">Create a Job Listing</a>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $translatables['job_views'] = array(
    t('Master'),
    t('Apply Modal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Provider'),
    t('Provider\'s profile'),
    t('All'),
    t('Job Listing'),
    t('Job listings'),
    t('Job Provider Details'),
    t('Provider Details'),
    t('Apply Modal (Provider)'),
    t('For further information about this position, or to make an application, please contact:'),
    t('Please note that Lantra is acting soley as an advertising agent in respect to this position and takes no responsibility for the accuracy of the listing. Lantra isn’t involved in any way in the selection or subsequent recruitment of candidates.'),
    t('Job detail snapin'),
    t('Reference/ID'),
    t('Closing Date'),
    t('Create Job'),
    t('Create a Job'),
    t('author'),
    t('Author uid'),
    t('Premium account'),
  );
  $export['job_views'] = $view;

  return $export;
}
