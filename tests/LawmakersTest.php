<?php
/**
 * @file
 * LawmakersTest.php
 */

// @TODO: handle this better.
require_once '../../../../../../includes/bootstrap.inc';
define('DRUPAL_ROOT', '../../../../../../');

$_SERVER['REMOTE_ADDR'] = '127.2.2.1';
$_SERVER['REQUEST_METHOD'] = 'get';

drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

class LawmakersTest extends PHPUnit_Framework_TestCase {

  /**
   * Create Lawmakers Test.
   */
  public function testCreateLawmakers() {
    $lawmaker = lawmakers_test_data();
    $lawmaker['username'] = $lawmaker['firstname'] . '_' . $lawmaker['lastname'];
    $lawmaker['title'] = 'Justice';
    $mapped_data = entity_create('lawmakers', $lawmaker);

    lawmakers_save($mapped_data);
    $this->assertEquals(!empty($mapped_data->lawmakers_id), TRUE);

    lawmakers_delete($mapped_data);
    $deleted_entity = lawmakers_load($mapped_data->lawmakers_id);
    $this->assertEquals(empty($deleted_entity->lawmakers_id), TRUE);
  }
}

/**
 * Helper function provide test data.
 */
function lawmakers_test_data() {
  $items = array();
  $data = 'Rep,Gary,J.,Ackerman,,,D,NY,5,1,M,202-225-2601,202-225-1589,http://ackerman.house.gov/,http://www.house.gov/writerep,2111 Rayburn House Office Building,A000022,26970,H4NY07011,400003,N00001143,repgaryackerman,http://www.opencongress.org/wiki/Gary_Ackerman,http://youtube.com/RepAckerman,RepAcherman,,,1942-11-19';

  $header = 'title,firstname,middlename,lastname,name_suffix,nickname,party,state,district,in_office,gender,phone,fax,website,webform,congress_office,bioguide_id,votesmart_id,fec_id,govtrack_id,crp_id,twitter_id,congresspedia_url,youtube_url,facebook_id,official_rss,senate_class,birthdate';

  $headers = explode(',', $header);
  $lawmakers = explode(',', $data);

  $total_headers_items = count($headers);

  for ($i = 0; $i < $total_headers_items; $i++) {
    $items[$headers[$i]] = $lawmakers[$i];
  }
  return $items;
}
