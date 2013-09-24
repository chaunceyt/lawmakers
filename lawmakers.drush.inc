<?php
/**
 * @file
 * Lawmaker Drush script.
 */

/**
 * Implements hook_drush_command().
 */
function lawmakers_drush_command() {
  $items = array();
  $items['import-lawmakers'] = array(
    'callback' => 'lawmakers_import_csv_data',
    'description' => dt('Import Lawmakers from csv file.'),
  );
  return $items;
}

/**
 * Drush callback.
 */
function lawmakers_import_csv_data() {
  $lawmakers = _lawmakers_parse_csv();
  foreach ($lawmakers as $lawmaker) {
    $lawmaker = entity_create('lawmakers', $lawmaker);
    $username = $lawmaker->firstname . '_' . $lawmaker->lastname;
    $lawmaker->username = $username;
    lawmakers_save($lawmaker);
  }
  drush_log('Import complete', 'success');
}


/**
 * Helper function to parse csv.
 */
function _lawmakers_parse_csv() {
  $items = array();
  $file = drupal_get_path('module', 'lawmakers') . "/data/legislators.csv";

  $rows = array_map('str_getcsv', file($file));
  $header = array_shift($rows);
  foreach ($rows as $row) {
    $items[] = array_combine($header, $row);
  }

  return $items;
}
