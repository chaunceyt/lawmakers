<?php
/**
 * @file
 * Base Class for API Wrapper
 */

/**
 * Implements base class for Lawmakers API wrappers.
 */
class lawmakersApi {

  protected function lawmakers_api_key($provider) {
    $apiKey = variable_get($provider . '_apikey');
    if (!empty($apiKey)) {
      return $apiKey;
    }
    else {
      watchdog('lawmakers_api', $provider . 'API Key is missing');
    }
  }

  protected function lawmakers_api_response($apiUrl) {
    $response = drupal_http_request($apiUrl);
    return drupal_json_decode($response->data);
  }

}
