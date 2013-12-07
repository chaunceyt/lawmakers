<?php
/**
 * @file
 * Sunlightlabs Congress API Wrapper
 */


/**
 * Implements SunlightLabs class.
 */
class SunlightLabs extends lawmakersApi {

  private $url = 'http://congress.api.sunlightfoundation.com/';

  /**
   * Implements By latitude/longitude.
   *
   * @param string method
   *   Method string legislators, districts
   *
   * @param int lat
   *   Latitude.
   *
   * @param int lng
   *   Longitude.
   */
  public function byLatLng($method, $lat, $lng) {
    $apiUrl = $this->url . $method . '/locate?latitude=' . $lat . '&longitude=' . $lng .'&apikey=' . $this->lawmakers_api_key('sunlightlabs');
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements By zip code.
   *
   * @param string method
   *   Method string legislators, districts
   *
   * @param int zipcode
   *   Zip code.
   */
  public function byZipCode($method, $zipcode) {
    $apiUrl = $this->url . $method . '/locate?zip=' . $zipcode .'&apikey=' . $this->lawmakers_api_key('sunlightlabs');
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements legislators filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/legislators.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function legislatorsFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'legislators?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements committees filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/committees.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function committeesFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'committees?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements bills filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/bills.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function billsFilter($query, $is_search = FALSE) {
    if (!is_array($query)) {
      // throw warning
    }
    if ($is_search) {
      $apiUrl = $this->url . 'bills/search?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&'. http_build_query($query);
    }
    else {
      $apiUrl = $this->url . 'bills?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&'. http_build_query($query);
    }
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements amendments filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/amendments.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function amendmentsFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'amendments?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements nominations filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/nominations.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function nominationsFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'nominations?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements votes filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/votes.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function votesFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'votes?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements floor updates filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/floor_updates.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function floorUpdatesFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'floor_updates?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($apiUrl);
  }

  /**
   * Implements hearings filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/hearings.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function hearingsFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'hearings?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($response->data);
  }

  /**
   * Implements upcoming bills filtering on fields.
   *
   * Read API: http://sunlightlabs.github.io/congress/upcoming_bills.html
   *
   * @param array query
   *   Query array.
   *
   * @returns array
   *   Json decoded array.
   */
  public function upcomingBillsFilter($query) {
    if (!is_array($query)) {
      // throw warning
    }
    $apiUrl = $this->url . 'upcoming_bills?apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    return $this->lawmakers_api_response($apiUrl);
  }

}


/**
 * Implements partyTime class.
 */
class partyTime {

  private $url = 'http://politicalpartytime.org/api/v1/';

  /**
   * Implements event method.
   *
   * Read API: http://sunlightlabs.github.io/partytime-docs/
   *
   * @param string method
   *   Method is a string event, lawmaker, host.
   */
  public function event($method, $query) {
    if (empty($method)) {
      // return warning
    }

    if (is_array($query)) {
      $apiUrl = $this->url . $method . '/?format=json&apikey=' . $this->lawmakers_api_key('sunlightlabs') .'&' . http_build_query($query);
    }
    else {
      $apiUrl = $this->url . $method . '/'. $query .'/?format=json&apikey=' . $this->lawmakers_api_key('sunlightlabs');
    }

    return $this->lawmakers_api_response($apiUrl);
  }

}
