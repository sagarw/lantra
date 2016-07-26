<?php

/**
 * @file
 *  Administrative functions for Workbench Profile.
 */


/**
 * Administration form for profile redirect preferences.
 */
function workbench_profile_admin_form($form, &$form_state) {

  $form['redirect'] = array(
    '#type' => 'radios',
    '#title' => 'Redirect preferences',
    '#description' => t('Select where you want to go after creating a new profile from within the Workbench interface.'),
    '#default_value' => variable_get('workbench_profile_redirect', 'my_workbench'),
    '#options' => array(
      'my_workbench' => t('My Workbench'),
      'profile_view' => t('Profile page'),
      'create_more' => t('Keep creating'),
    ),
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}


/**
 * Form submit handler for moderation profile administration.
 */
function workbench_profile_admin_form_submit($form, &$form_state) {
  variable_set('workbench_profile_redirect', $form_state['values']['redirect']);
  drupal_set_message(t('Your settings have been saved.'));
}
