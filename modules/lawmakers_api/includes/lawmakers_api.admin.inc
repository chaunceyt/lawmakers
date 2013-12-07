<?php
/**
 * @file
 * Lawmakers API Admin section.
 */

function lawmakers_api_admin_callback() {
  
  $form = array();

  $form['sunlightlabs_apikey'] = array(
    '#type' => 'textfield',
    '#title' => t('SunlightLabs API Key'),
    '#default_value' => variable_get('sunlightlabs_apikey', ''),
    '#size' => 60,
    '#maxlenght' => 60,
  );
  
  $form['votesmart_apikey'] = array(
    '#type' => 'textfield',
    '#title' => t('Project Vote Smart API Key.'),
    '#default_value' => variable_get('votesmart_apikey', ''),
    '#size' => 60,
    '#maxlenght' => 60,
  );

  $form['opensecrets_apikey'] = array(
    '#type' => 'textfield',
    '#title' => t('CRP\'s OpenSecrets API Key.'),
    '#default_value' => variable_get('opensecrets_apikey', ''),
    '#size' => 60,
    '#maxlenght' => 60,
  );
  
  $form['fec_apikey'] = array(
    '#type' => 'textfield',
    '#title' => t('Federal Election Commission API Key.'),
    '#default_value' => variable_get('fec_apikey', ''),
    '#size' => 60,
    '#maxlenght' => 60,
  );

  return system_settings_form($form);
}

