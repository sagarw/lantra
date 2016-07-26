<?php
/**
 * @file
 * feed_imports.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feed_imports_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'lantra_profiles';
  $feeds_importer->config = array(
    'name' => 'Lantra Profiles',
    'description' => 'Lantra Profiles',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Business name',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Summary',
            'target' => 'field_summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'field_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Contact Name',
            'target' => 'field_contact_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Job Title',
            'target' => 'field_job_title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Telephone',
            'target' => 'field_telephone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Mobile Number',
            'target' => 'field_mobile_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Fax Number',
            'target' => 'field_fax_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Region',
            'target' => 'field_region',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Industry',
            'target' => 'field_industry',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'E-mail',
            'target' => 'user_mail',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Uid',
            'target' => 'field_business_owner',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'business',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['lantra_profiles'] = $feeds_importer;

  return $export;
}
