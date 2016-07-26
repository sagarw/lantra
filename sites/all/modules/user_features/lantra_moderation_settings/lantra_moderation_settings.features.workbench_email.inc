<?php
/**
 * @file
 * lantra_moderation_settings.features.workbench_email.inc
 */

/**
 * Implements hook_workbench_email_export().
 */
function lantra_moderation_settings_workbench_email_export() {
  $items = array(
    'draft:needs_review:administrator' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 1,
      'role' => 'administrator',
    ),
    'draft:needs_review:Editor' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 0,
      'role' => 'Editor',
    ),
    'draft:needs_review:original author' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 1,
      'automatic' => 1,
      'role' => 'original author',
    ),
    'draft:needs_review:Premium Plus Training Provider' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 1,
      'role' => 'Premium Plus Training Provider',
    ),
    'draft:needs_review:Premium Training Provider' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 0,
      'role' => 'Premium Training Provider',
    ),
    'needs_review:draft:administrator' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 0,
      'automatic' => 1,
      'role' => 'administrator',
    ),
    'needs_review:draft:Editor' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 0,
      'automatic' => 0,
      'role' => 'Editor',
    ),
    'needs_review:draft:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 1,
      'automatic' => 1,
      'role' => 'original author',
    ),
    'needs_review:draft:Premium Plus Training Provider' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 0,
      'automatic' => 1,
      'role' => 'Premium Plus Training Provider',
    ),
    'needs_review:draft:Premium Training Provider' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 0,
      'automatic' => 0,
      'role' => 'Premium Training Provider',
    ),
    'needs_review:published:administrator' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'author' => 0,
      'automatic' => 1,
      'role' => 'administrator',
    ),
    'needs_review:published:Editor' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'author' => 0,
      'automatic' => 0,
      'role' => 'Editor',
    ),
    'needs_review:published:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'author' => 1,
      'automatic' => 1,
      'role' => 'original author',
    ),
    'needs_review:published:Premium Plus Training Provider' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'author' => 0,
      'automatic' => 1,
      'role' => 'Premium Plus Training Provider',
    ),
    'needs_review:published:Premium Training Provider' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'author' => 0,
      'automatic' => 0,
      'role' => 'Premium Training Provider',
    ),
  );
  return $items;
}
