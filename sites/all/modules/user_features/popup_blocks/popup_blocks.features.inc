<?php
/**
 * @file
 * popup_blocks.features.inc
 */

/**
 * Implements hook_popupblock_defaults().
 */
function popup_blocks_popupblock_defaults() {
  return array(
    'views:job_views-apply_modal' => array(
      'active' => 1,
      'format' => 'Left block',
      'title-length' => 10,
    ),
  );
}

/**
 * Implements hook_popupformat_defaults().
 */
function popup_blocks_popupformat_defaults() {
  return array(
    'Default click' => array(
      'label' => 'Default click',
      'origin' => 'bottom-left',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'style' => 'White',
      'opacity' => '1.0',
      'width' => 400,
      'activate' => 'click',
      'close' => 1,
      'ajax' => 0,
      'teaser' => 0,
      'inline' => 0,
      'flat' => 0,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
    'Default hover' => array(
      'label' => 'Default hover',
      'origin' => 'bottom-left',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'style' => 0,
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
      'close' => 0,
      'ajax' => 0,
      'teaser' => 0,
      'inline' => 0,
      'flat' => 0,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
    'Default node' => array(
      'label' => 'Default node',
      'origin' => 'bottom-left',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'style' => 0,
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
      'close' => 0,
      'ajax' => 0,
      'teaser' => 1,
      'inline' => 0,
      'flat' => 0,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
    'Flat popup menu' => array(
      'label' => 'Flat popup menu',
      'origin' => 'top-right',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'style' => 0,
      'opacity' => '1.0',
      'width' => 200,
      'activate' => 'hover',
      'close' => 0,
      'ajax' => 0,
      'teaser' => 0,
      'inline' => 0,
      'flat' => 1,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
    'Left block' => array(
      'label' => 'Left block',
      'origin' => 'top-right',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'style' => 0,
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
      'close' => 0,
      'ajax' => 0,
      'teaser' => 0,
      'inline' => 0,
      'flat' => 0,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
    'Popup menu' => array(
      'label' => 'Popup menu',
      'origin' => 'top-right',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'style' => 0,
      'opacity' => '1.0',
      'width' => 200,
      'activate' => 'hover',
      'close' => 0,
      'ajax' => 0,
      'teaser' => 0,
      'inline' => 0,
      'flat' => 0,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
    'Right block' => array(
      'label' => 'Right block',
      'origin' => 'top-left',
      'expand' => 'bottom-left',
      'effect' => 'default',
      'style' => 0,
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
      'close' => 0,
      'ajax' => 0,
      'teaser' => 0,
      'inline' => 0,
      'flat' => 0,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
  );
}
