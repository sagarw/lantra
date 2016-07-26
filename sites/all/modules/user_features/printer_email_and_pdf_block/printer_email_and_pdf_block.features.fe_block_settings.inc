<?php
/**
 * @file
 * printer_email_and_pdf_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function printer_email_and_pdf_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['print_ui-print-links'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'print-links',
    'module' => 'print_ui',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lantra_awards' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_awards',
        'weight' => 17,
      ),
      'lantra_main' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'lantra_main',
        'weight' => -67,
      ),
      'professional_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'professional_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
