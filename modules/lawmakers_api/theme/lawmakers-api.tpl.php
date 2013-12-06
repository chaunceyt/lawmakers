<?php
/**
 * @file
 * Theme file for NG Lawmakers API
 */

/**
 * Implements theme_hook().
 *
 * Lawmakers Page.
 */
function theme_lawmakers_api(&$variables) {
  $output = '';
  $node = $variables['node'];
  $full_title = $node->title . ' ' . $node->firstname . ' ' . $node->lastname;
  drupal_set_title($full_title);

  $lawmakers_image_size = '200x250';
  $image_data = array(
    'path' => drupal_get_path('module', 'lawmakers') . '/images/' . $lawmakers_image_size . '/' . $node->bioguide_id . '.jpg',
  );

  $output .= '<div class="image" style="float: left; margin-right: 20px">' . theme('image', $image_data) . '</div>';
  $output .= '<div class="party-info"> ' . $node->party . ' ' . $node->state . '</div>';
  $output .= '<div class="congress-office">' . $node->congress_office . '</div>';
  $output .= '<div class="congress-phone">' . $node->phone . '</div>';
  $output .= '<div class="congress-fax">' . $node->fax . '</div>';
  $output .= '<div class="congress-website">' . $node->website . '</div>';
  $output .= '<div class="congress-contact-form">' . $node->webform . '</div>';
  $output .= '<p/>';

  $output .= '<h3>Committees</h3>';
  $list_items = $variables['committees']['results'];
  $output .= '<ul class="committees-list">';
  foreach ($list_items as $list_item) {
    $output .= '<li class="committee-name"> ' . $list_item['name'] . ' </li>';
  }
  $output .= '</ul>';

  /*$bills = $variables['bills'];
  print_r($bills);
  $votes = $variables['votes'];
  print_r($votes);*/
 return $output;
}
