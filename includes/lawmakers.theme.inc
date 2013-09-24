<?php
/**
 * @file
 * lawmakers.theme.inc
 */

/**
 * Theme lawmaker full page.
 */
function theme_lawmakers_full($variables) {
  $output = '';
  $lawmakers = $variables['lawmakers'];
  $lawmakers_image_size = '200x250';
  $image_data = array(
    'path' => drupal_get_path('module', 'lawmakers') . '/images/' . $lawmakers_image_size . '/' . $lawmakers->bioguide_id . '.jpg',
  );

  $output .= '<div class="lawmakers_meta">';

  // Lazy...
  $output .= '<div class="image" style="float: left; margin-right: 20px">' . theme('image', $image_data) . '</div>';
  $output .= '<div class="lawmakers-name">' . trim($lawmakers->title) . '. ' . trim($lawmakers->firstname)  . ' ' . trim($lawmakers->lastname) . '</div>';
  $output .= '<div class="party">' . $lawmakers->party . ' ' . $lawmakers->state  . '  ' . $lawmakers->district . '</div>';
  $output .= '<div class="congress_office">' . $lawmakers->congress_office .  '</div>';
  $output .= '<div class="phone">tel: ' . $lawmakers->phone .  '</div>';
  $output .= '<div class="fax">fax: ' . $lawmakers->fax .  '</div>';

  if (!empty($lawmakers->website)) {
    $output .= '<div class="website"> ' . l(t('website'), $lawmakers->website, array('attributes' => array('target' => '_blank'))) . '</div>';
  }

  if (!empty($lawmakers->webform)) {
    $output .= '<div class="contact_form">' . l(t('contact form'), $lawmakers->webform) .  '</div>';
  }

  $output .= '<div class="social_media">Social Info</div>';

  if (!empty($lawmakers->twitter_id)) {
    $output .= '<div class="twitter">' . l(t('twitter'), 'http://twitter.com/' . $lawmakers->twitter_id, array('attributes' => array('target' => '_blank'))) . '</div>';
  }

  if (!empty($lawmakers->youtube_url)) {
    $output .= '<div class="youtube">' . l(t('youtube'), $lawmakers->youtube_url, array('attributes' => array('target' => '_blank'))) . '</div>';
  }

  if (user_access('administer lawmakers entities') && isset($lawmakers->lawmakers_id)) {
    $edit_link = '<ul class="tabs primary"><li>';
    $edit_link .= l(t('Edit'), 'admin/content/lawmakers/manage/' . $lawmakers->lawmakers_id, array('attributes' => array('class' => 'admin-edit-link')));
    $edit_link .= '</li></ul>';
    $output .= $edit_link;
  }

  $output .= '</div>';

  return $output;
}
