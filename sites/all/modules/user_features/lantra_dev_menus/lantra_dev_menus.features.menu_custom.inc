<?php
/**
 * @file
 * lantra_dev_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function lantra_dev_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-dev-testing.
  $menus['menu-dev-testing'] = array(
    'menu_name' => 'menu-dev-testing',
    'title' => 'Dev & Testing',
    'description' => 'Functionality which is not in the full admin UI yet.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Dev & Testing');
  t('Functionality which is not in the full admin UI yet.');

  return $menus;
}
