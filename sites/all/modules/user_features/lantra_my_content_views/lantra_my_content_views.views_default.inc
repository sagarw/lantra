<?php
/**
 * @file
 * lantra_my_content_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lantra_my_content_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'moderation_notes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Moderation Notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Moderation Notes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_moderation_note' => 'field_moderation_note',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_moderation_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Profile: Moderation Note */
  $handler->display->display_options['fields']['field_moderation_note']['id'] = 'field_moderation_note';
  $handler->display->display_options['fields']['field_moderation_note']['table'] = 'field_data_field_moderation_note';
  $handler->display->display_options['fields']['field_moderation_note']['field'] = 'field_moderation_note';
  $handler->display->display_options['fields']['field_moderation_note']['element_label_colon'] = FALSE;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Moderation Notes */
  $handler = $view->new_display('page', 'Moderation Notes', 'moderation_notes');
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'moderation_notes/%';
  $translatables['moderation_notes'] = array(
    t('Master'),
    t('Moderation Notes'),
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
    t('Moderation Note'),
    t('Updated date'),
    t('All'),
    t('Block'),
  );
  $export['moderation_notes'] = $view;

  $view = new view();
  $view->name = 'my_content_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My content views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lantra Awards Courses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    15 => '15',
    6 => '6',
    17 => '17',
    16 => '16',
    13 => '13',
    12 => '12',
    8 => '8',
    4 => '4',
    11 => '11',
    10 => '10',
    7 => '7',
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_scottish_qualification' => 'field_scottish_qualification',
    'field_qualification_level' => 'field_qualification_level',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_scottish_qualification' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_qualification_level' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div id="design-cast">
     <h4><p>Key</p></h4>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/edit.png" class="img-responsive img-thumbnail" alt="Edit" />
        <div class="name">Edit
            <br /></div>
    </div>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/notes.png" class="img-responsive img-thumbnail" alt="Notes" />
        <div class="name">Notes
            <br /></div>
    </div>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/submit.png" class="img-responsive img-thumbnail" alt="Submit" />
        <div class="name">Submit
            <br /></div>
    </div>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/archive.png" class="img-responsive img-thumbnail" alt="Archive" />
        <div class="name">Archive
            <br /></div>
    </div>
</div>
</br>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have not yet created any jobs.';
  $handler->display->display_options['empty']['area']['format'] = 'popup_tags';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Workbench Moderation: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'Workbench';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Course / product type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  /* Field: Scottish Q */
  $handler->display->display_options['fields']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['table'] = 'field_data_field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['ui_name'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['label'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scottish_qualification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: English Q */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'field_data_field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['ui_name'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['label'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['ui_name'] = 'Language';
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
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
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fbaass' => 'fbaass',
  );

  /* Display: My listings */
  $handler = $view->new_display('page', 'My listings', 'my_listings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My listings';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mylistingspage';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'mylistings_content';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'vid' => 'vid',
    'title' => 'title',
    'type' => 'type',
    'state' => 'state',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
    'publishcontent' => 'publishcontent',
    'field_moderation_note' => 'field_moderation_note',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'vid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'publishcontent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_moderation_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Please find below details of your business listing and any course or job vacancies which you have posted.
Each listing can be previews (by selecting the link on the title), edited and sent for approval.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['label'] = 'My business profile (new)';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'business_listing_views:my_business_listing';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '</br>';
  $handler->display->display_options['header']['area_1']['format'] = 'popup_tags';
  /* Header: Content Summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Content Summary';
  $handler->display->display_options['header']['result']['content'] = '<div class="red_label">
   <p>Displaying @start - @end of @total</p>
</div>';
  /* Header: Create content links */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['ui_name'] = 'Create content links';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="button">
   <a href="https://www.lantra.co.uk/node/add/job">Create a job</a>
</div>
<div class="button">
   <a href="https://www.lantra.co.uk/node/add/la_course">Create a course</a>
</div>
';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Header: Remaining Content */
  $handler->display->display_options['header']['area_2']['id'] = 'area_2';
  $handler->display->display_options['header']['area_2']['table'] = 'views';
  $handler->display->display_options['header']['area_2']['field'] = 'area';
  $handler->display->display_options['header']['area_2']['ui_name'] = 'Remaining Content';
  $handler->display->display_options['header']['area_2']['content'] = '<div class="red_label_right">
   <p>You have [%n] remaining</p>
</div>
</br>';
  $handler->display->display_options['header']['area_2']['format'] = 'popup_tags';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Moderation Note View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Moderation Note View';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'moderation_notes';
  $handler->display->display_options['fields']['view']['display'] = 'moderation_notes';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content revision: Vid */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'nid';
  $handler->display->display_options['fields']['state']['label'] = 'Status';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="member">
    <img src="../sites/all/themes/lantra_awards/images/icons/edit.png" class="img-responsive img-thumbnail" alt="Edit" />
</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="member">
   <img src="../sites/all/themes/lantra_awards/images/icons/submit.png" class="img-responsive img-thumbnail" alt="Submit" />
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/revisions/';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Publish Icon */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['ui_name'] = 'Publish Icon';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['publishcontent']['alter']['text'] = '<div class="member">
   <img src="../sites/all/themes/lantra_awards/images/icons/archive.png" class="img-responsive img-thumbnail" alt="Archive" />
</div>';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  /* Field: Moderation note popup */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['ui_name'] = 'Moderation note popup';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_moderation_note';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[view]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fbaass' => 'fbaass',
  );
  $handler->display->display_options['qtip_instance'] = '';
  $handler->display->display_options['path'] = 'user/mylistings';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My listings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-lantra-awards';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My articles */
  $handler = $view->new_display('page', 'My articles', 'my_articles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My articles';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Please find below details of all your articles. Here you can edit, preview, post and save all your articles.

Posting your article not only helps promote you and your business to all Lantra Business Centre users but we will promote your article via our social media networks, giving you an even greater audience.

Posting your article is simple and straightforward. Add your article here or follow the link on the left-hand menu.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
    'article' => 'article',
  );
  $handler->display->display_options['path'] = 'myprofile/myarticles';

  /* Display: My jobs */
  $handler = $view->new_display('block', 'My jobs', 'my_jobs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jobs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job' => 'job',
  );

  /* Display: LA Codes */
  $handler = $view->new_display('page', 'LA Codes', 'la_codes');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_also_known_as_code' => 'field_also_known_as_code',
    'field_ofqual_code' => 'field_ofqual_code',
    'field_old_latic_code' => 'field_old_latic_code',
    'field_product_code' => 'field_product_code',
    'field_quartz_latin_code' => 'field_quartz_latin_code',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_product_code';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_also_known_as_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ofqual_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_old_latic_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quartz_latin_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* Field: Content: Product code */
  $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
  $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
  $handler->display->display_options['fields']['field_product_code']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_product_code']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_product_code']['multi_type'] = 'ol';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['path'] = 'la_codes';

  /* Display: No profile link */
  $handler = $view->new_display('block', 'No profile link', 'no_profile_link');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = 'Please create your Business Listing';
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['path'] = 'profile-business_profile[uid]/edit';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['empty'] = 'Please create your Business Listing';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Course report */
  $handler = $view->new_display('page', 'Course report', 'entity_report');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lantra Awards Courses';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'la_course' => 'la_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'course-report';

  /* Display: Report DOC Export */
  $handler = $view->new_display('views_data_export', 'Report DOC Export', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Course / product type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  /* Field: Scottish Q */
  $handler->display->display_options['fields']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['table'] = 'field_data_field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['ui_name'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['label'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scottish_qualification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: English Q */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'field_data_field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['ui_name'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['label'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['ui_name'] = 'Language';
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'course-report-doc';
  $handler->display->display_options['displays'] = array(
    'entity_report' => 'entity_report',
    'default' => 0,
    'my_listings' => 0,
    'my_articles' => 0,
    'la_codes' => 0,
    'no_profile_link' => 0,
  );

  /* Display: Report CSV Export */
  $handler = $view->new_display('views_data_export', 'Report CSV Export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Course / product type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  /* Field: Scottish Q */
  $handler->display->display_options['fields']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['table'] = 'field_data_field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['ui_name'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['label'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scottish_qualification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: English Q */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'field_data_field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['ui_name'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['label'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['ui_name'] = 'Language';
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'course-report-csv';
  $handler->display->display_options['displays'] = array(
    'entity_report' => 'entity_report',
    'default' => 0,
    'my_listings' => 0,
    'my_articles' => 0,
    'la_codes' => 0,
    'no_profile_link' => 0,
  );

  /* Display: Report XLS Export */
  $handler = $view->new_display('views_data_export', 'Report XLS Export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Course / product type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  /* Field: Scottish Q */
  $handler->display->display_options['fields']['field_scottish_qualification']['id'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['table'] = 'field_data_field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['field'] = 'field_scottish_qualification';
  $handler->display->display_options['fields']['field_scottish_qualification']['ui_name'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['label'] = 'Scottish Q';
  $handler->display->display_options['fields']['field_scottish_qualification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scottish_qualification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: English Q */
  $handler->display->display_options['fields']['field_qualification_level']['id'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['table'] = 'field_data_field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['field'] = 'field_qualification_level';
  $handler->display->display_options['fields']['field_qualification_level']['ui_name'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['label'] = 'English Q';
  $handler->display->display_options['fields']['field_qualification_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['ui_name'] = 'Language';
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_category']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'course-report-xls';
  $handler->display->display_options['displays'] = array(
    'entity_report' => 'entity_report',
    'default' => 0,
    'my_listings' => 0,
    'my_articles' => 0,
    'la_codes' => 0,
    'no_profile_link' => 0,
  );
  $translatables['my_content_views'] = array(
    t('Master'),
    t('Lantra Awards Courses'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div id="design-cast">
     <h4><p>Key</p></h4>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/edit.png" class="img-responsive img-thumbnail" alt="Edit" />
        <div class="name">Edit
            <br /></div>
    </div>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/notes.png" class="img-responsive img-thumbnail" alt="Notes" />
        <div class="name">Notes
            <br /></div>
    </div>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/submit.png" class="img-responsive img-thumbnail" alt="Submit" />
        <div class="name">Submit
            <br /></div>
    </div>
    <div class="member">
        <img src="../sites/all/themes/lantra_awards/images/icons/archive.png" class="img-responsive img-thumbnail" alt="Archive" />
        <div class="name">Archive
            <br /></div>
    </div>
</div>
</br>'),
    t('You have not yet created any jobs.'),
    t('author'),
    t('Workbench'),
    t('Title'),
    t('Course / product type'),
    t('Scottish Q'),
    t('English Q'),
    t('Language'),
    t('Category'),
    t('Edit link'),
    t('All'),
    t('My listings'),
    t('Please find below details of your business listing and any course or job vacancies which you have posted.
Each listing can be previews (by selecting the link on the title), edited and sent for approval.'),
    t('My business profile (new)'),
    t('</br>'),
    t('<div class="red_label">
   <p>Displaying @start - @end of @total</p>
</div>'),
    t('<div class="button">
   <a href="https://www.lantra.co.uk/node/add/job">Create a job</a>
</div>
<div class="button">
   <a href="https://www.lantra.co.uk/node/add/la_course">Create a course</a>
</div>
'),
    t('<div class="red_label_right">
   <p>You have [%n] remaining</p>
</div>
</br>'),
    t('Vid'),
    t('Type'),
    t('Status'),
    t('<div class="member">
    <img src="../sites/all/themes/lantra_awards/images/icons/edit.png" class="img-responsive img-thumbnail" alt="Edit" />
</div>'),
    t('<div class="member">
   <img src="../sites/all/themes/lantra_awards/images/icons/submit.png" class="img-responsive img-thumbnail" alt="Submit" />
</div>'),
    t('<div class="member">
   <img src="../sites/all/themes/lantra_awards/images/icons/archive.png" class="img-responsive img-thumbnail" alt="Archive" />
</div>'),
    t('My articles'),
    t('Please find below details of all your articles. Here you can edit, preview, post and save all your articles.

Posting your article not only helps promote you and your business to all Lantra Business Centre users but we will promote your article via our social media networks, giving you an even greater audience.

Posting your article is simple and straightforward. Add your article here or follow the link on the left-hand menu.'),
    t('My jobs'),
    t('Jobs'),
    t('LA Codes'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Nid'),
    t('Product code'),
    t('Edit'),
    t('No profile link'),
    t('Please create your Business Listing'),
    t('Course report'),
    t('Report DOC Export'),
    t('Report CSV Export'),
    t('Report XLS Export'),
  );
  $export['my_content_views'] = $view;

  return $export;
}
