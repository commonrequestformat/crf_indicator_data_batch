<?php
/**
 * @file
 * crf_indicator_data_batch.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_indicator_data_batch_user_default_permissions() {
  $permissions = array();

  // Exported permission: create indicator_data_batch content.
  $permissions['create indicator_data_batch content'] = array(
    'name' => 'create indicator_data_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any indicator_data_batch content.
  $permissions['delete any indicator_data_batch content'] = array(
    'name' => 'delete any indicator_data_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own indicator_data_batch content.
  $permissions['delete own indicator_data_batch content'] = array(
    'name' => 'delete own indicator_data_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any indicator_data_batch content.
  $permissions['edit any indicator_data_batch content'] = array(
    'name' => 'edit any indicator_data_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own indicator_data_batch content.
  $permissions['edit own indicator_data_batch content'] = array(
    'name' => 'edit own indicator_data_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
