<?php
/**
 * @file
 * themekey_settings.features.inc
 */

/**
 * Implements hook_themekey_features_rule_chain().
 */
function themekey_settings_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'themekey_ui:node_triggers_theme',
      'operator' => '=',
      'value' => 'static',
      'theme' => 'default',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'themekey_settings',
    ),
    'string' => '"themekey_ui:node_triggers_theme = static >>> triggered"',
    'childs' => array(),
  ),
);

return $rules;
}
