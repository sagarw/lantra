<?php
/**
 * @file
 * la_course_flags.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function la_course_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "LA Course (Nationwide) Approved".
  $flags['la_course_approved'] = array(
    'entity_type' => 'flagging',
    'title' => 'LA Course (Nationwide) Approved',
    'global' => 1,
    'types' => array(
      0 => 'la_course_pending_approval',
    ),
    'flag_short' => 'Approve',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Decline',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -9,
    'show_in_links' => array(
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'la_course_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "LA Course (Local) Approved".
  $flags['la_course_local_approved'] = array(
    'entity_type' => 'flagging',
    'title' => 'LA Course (Local) Approved',
    'global' => 1,
    'types' => array(
      0 => 'la_course_local_pending_approval',
    ),
    'flag_short' => 'Approve',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Decline',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -10,
    'show_in_links' => array(
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'la_course_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "LA Course (Local) Pending Approval".
  $flags['la_course_local_pending_approval'] = array(
    'entity_type' => 'node',
    'title' => 'LA Course (Local) Pending Approval',
    'global' => 0,
    'types' => array(
      0 => 'la_course',
    ),
    'flag_short' => 'Request Approval',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Decline',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'PDF' => 0,
      'print' => 0,
      'token' => 0,
      'learner_view' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'la_course_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "LA Course (Nationwide) Pending Approval".
  $flags['la_course_pending_approval'] = array(
    'entity_type' => 'node',
    'title' => 'LA Course (Nationwide) Pending Approval',
    'global' => 0,
    'types' => array(
      0 => 'la_course',
    ),
    'flag_short' => 'Request Approval',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Decline',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'PDF' => 0,
      'print' => 0,
      'token' => 0,
      'learner_view' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'la_course_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Locally".
  $flags['locally'] = array(
    'entity_type' => 'node',
    'title' => 'Locally',
    'global' => 0,
    'types' => array(
      0 => 'la_course',
    ),
    'flag_short' => 'Add',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -16,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'token' => 0,
      'learner_view' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'la_course_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Nationwide".
  $flags['nationwide'] = array(
    'entity_type' => 'node',
    'title' => 'Nationwide',
    'global' => 0,
    'types' => array(
      0 => 'la_course',
    ),
    'flag_short' => 'Add',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -15,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'token' => 0,
      'learner_view' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'la_course_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "LA Course Requires Approval".
  $flags['requires_approval'] = array(
    'entity_type' => 'node',
    'title' => 'LA Course Requires Approval',
    'global' => 1,
    'types' => array(
      0 => 'la_course',
    ),
    'flag_short' => 'Enable',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Disable',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -11,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'PDF' => 0,
      'print' => 0,
      'token' => 0,
      'learner_view' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'la_course_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
