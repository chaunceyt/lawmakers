<?php
/**
 * @file
 * The file for admin forms and functionality for the lawmakers entity
 */

/**
 * Implements hook_form().
 */
function lawmakers_form($form, &$form_state, $lawmakers = NULL) {
  $form = array();

  $form['username'] = array(
    '#title' => t('Username'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->username) ? $lawmakers->username : '',
    '#description' => t('Fake User Name assigned to Lawmaker.'),
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->title) ? $lawmakers->title : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['firstname'] = array(
    '#title' => t('First Name'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->firstname) ? $lawmakers->firstname : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['middlename'] = array(
    '#title' => t('Middle Name'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->middlename) ? $lawmakers->middlename : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['lastname'] = array(
    '#title' => t('Last Name'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->lastname) ? $lawmakers->lastname : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['name_suffix'] = array(
    '#title' => t('Name Suffix'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->name_suffix) ? $lawmakers->name_suffix : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['nickname'] = array(
    '#title' => t('Nick Name'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->nickname) ? $lawmakers->nickname : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['party'] = array(
    '#title' => t('Party'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->party) ? $lawmakers->party : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['state'] = array(
    '#title' => t('State'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->state) ? $lawmakers->state : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['district'] = array(
    '#title' => t('District'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->district) ? $lawmakers->district : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['in_office'] = array(
    '#title' => t('In Office'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->in_office) ? $lawmakers->in_office : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['gender'] = array(
    '#title' => t('Gender'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->gender) ? $lawmakers->gender : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['phone'] = array(
    '#title' => t('Phone'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->phone) ? $lawmakers->phone : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['fax'] = array(
    '#title' => t('Fax'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->fax) ? $lawmakers->fax : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['website'] = array(
    '#title' => t('Web Site'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->website) ? $lawmakers->website : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['webform'] = array(
    '#title' => t('Web Form'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->webform) ? $lawmakers->webform : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['congress_office'] = array(
    '#title' => t('Congress Office'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->congress_office) ? $lawmakers->congress_office : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['bioguide_id'] = array(
    '#title' => t('Bio Guide ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->bioguide_id) ? $lawmakers->bioguide_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['votesmart_id'] = array(
    '#title' => t('Vote Smart ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->votesmart_id) ? $lawmakers->votesmart_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['fec_id'] = array(
    '#title' => t('FEC ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->fec_id) ? $lawmakers->fec_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['govtrack_id'] = array(
    '#title' => t('GovTrack ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->govtrack_id) ? $lawmakers->govtrack_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['crp_id'] = array(
    '#title' => t('CRP ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->crp_id) ? $lawmakers->crp_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['eventful_id'] = array(
    '#title' => t('EventFul ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->eventful_id) ? $lawmakers->eventful_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['sunlight_old_id'] = array(
    '#title' => t('Old Sunlight ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->sunlight_old_id) ? $lawmakers->sunlight_old_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['twitter_id'] = array(
    '#title' => t('Twitter ID'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->twitter_id) ? $lawmakers->twitter_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['congresspedia_url'] = array(
    '#title' => t('CongressPedia URL'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->congresspedia_url) ? $lawmakers->congresspedia_url : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['youtube_url'] = array(
    '#title' => t('Youtube URL'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->youtube_url) ? $lawmakers->youtube_url : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['official_rss'] = array(
    '#title' => t('Official RSS Feed'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->official_rss) ? $lawmakers->official_rss : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['senate_class'] = array(
    '#title' => t('Senate Class'),
    '#type' => 'textfield',
    '#default_value' => isset($lawmakers->senate_class) ? $lawmakers->senate_class : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  field_attach_form('lawmakers', $lawmakers, $form, $form_state);

  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#value' => isset($lawmakers->lawmakers_id) ? t('Update Lawmaker') : t('Save Lawmaker'),
    ),
    'delete_link' => array(
      '#markup' => isset($lawmakers->lawmakers_id) ? l(t('Delete'), 'admin/content/lawmakers/manage/' . $lawmakers->lawmakers_id . '/delete', array('attributes' => array('id' => array('lawmakers-delete-' . $lawmakers->lawmakers_id), 'class' => array('button remove')), 'query' => array('destination' => 'admin/content/lawmakers'))) : ''));
  return $form;
}

/**
 * Implements hook_form_validate().
 */
function lawmakers_form_validate($form, &$form_state) {
}

/**
 * Implements hook_form_submit().
 */
function lawmakers_form_submit($form, &$form_state) {
  $lawmakers = entity_ui_form_submit_build_entity($form, $form_state);
  $lawmakers->save();
  drupal_set_message(t('@username lawmaker has been saved.', array('@username' => $lawmakers->username)));
  // $form_state['redirect'] = 'admin/content/lawmakers';
  $form_state['redirect'] = 'lawmakers/' . $lawmakers->lawmakers_id;
}

/**
 * Confirmation before bulk deleting lawmakers.
 */
function lawmakers_bulk_delete($form, &$form_state, $lawmakers_ids) {
  $lawmakers_ids = explode('|', $lawmakers_ids);
  $lawmakers = lawmakers_load_multiple($lawmakers_ids);

  $form = array();
  $form_state['lawmakers_ids'] = $lawmakers_ids;

  $variables = array(
    'type' => 'ul',
    'items' => array(),
    'title' => '',
    'attributes' => array(),
  );

  foreach ($lawmakers as $lawmaker) {
    $variables['items'][] = $lawmaker->username;
  }

  $form['summary'] = array(
    '#markup' => theme_item_list($variables),
  );

  return confirm_form($form, t('Delete all lawmakers?'), 'admin/content/lawmakers', t('Placeholder description'), t('Delete all'), t('Cancel'));
}

/**
 * Implements hook_submit().
 */
function lawmakers_bulk_delete_submit($form, &$form_state) {
  $lawmakers_ids = $form_state['lawmakers_ids'];
  lawmakers_delete_multiple($lawmakers_ids);

  drupal_set_message(t('lawmakers deleted'));
  drupal_goto('admin/content/lawmakers');
}
