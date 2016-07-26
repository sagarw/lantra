<?php
/**
 * @file
 * course_search_container_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function course_search_container_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'container_block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'container_block_course_search';
  $fe_block_boxes->body = '<?php
$block = module_invoke(\'block\', \'block_view\', \'8\');
print render($block[\'content\']);

$block = module_invoke(\'mefibs\', \'block_view\', \'4791ba69c9f07580b2e8123dfcdb7243\');
print render($block[\'content\']);

?>';

  $export['container_block_course_search'] = $fe_block_boxes;

  return $export;
}
