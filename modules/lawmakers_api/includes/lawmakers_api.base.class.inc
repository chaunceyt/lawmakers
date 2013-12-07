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
    $cache_key = md5($apiUrl);
    $cache_data = cache_get($cache_key);

    if (isset($cache_data->data)) {
      $response = $cache_data->data;
    }
    else {
      $response_data = drupal_http_request($apiUrl);
      $response = drupal_json_decode($response_data->data);
      cache_set($cache_key, $response);
    }

    return $response;
  }

}
