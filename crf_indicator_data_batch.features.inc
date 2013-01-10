<?php
/**
 * @file
 * crf_indicator_data_batch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_indicator_data_batch_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crf_indicator_data_batch_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crf_indicator_data_batch_node_info() {
  $items = array(
    'indicator_data_batch' => array(
      'name' => t('Indicator Values'),
      'base' => 'node_content',
      'description' => t('A complete batch of Indicator Data for a specific CRF Request.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
