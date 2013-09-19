// Behavioral Testing: Lawmakers

var casper = require("casper").create();
var environment = casper.cli.get('environment');
var link = 'http://' + environment;

var casper = require('casper').create({
  verbose: false,
  logLevel: "debug"
});

casper.start(link + '/user', function() {
  this.test.assertExists('#user-login');
  this.fill('form#user-login', {
      'name': 'admin'
    , 'pass': 'admin'
  }, true);
});

casper.then(function() {
  this.test.assertExists('.profile');
});

casper.thenOpen(link + '/admin/content/lawmakers/add');

casper.then(function() {
  this.test.assertExists('#lawmakers-form');
  this.test.assertExists('form#lawmakers-form');
  this.fill('form#lawmakers-form', {
        'username': 'Grey_Goose',
        'title': 'Rep',
        'firstname': 'Grey',
        'middlename': 'J',
        'lastname': 'Goose',
        'name_suffix': 'GG',
        'nickname': 'GreyGoose',
        'party': 'D',
        'state': 'NY',
        'district': '5',
        'in_office': '1',
        'gender': 'M',
        'phone': '202-225-2601',
        'fax': '202-225-1589',
        'website': 'http://ackerman.house.gov/',
        'webform': 'http://www.house.gov/writerep',
        'congress_office': '2111 Rayburn House Office Building',
        'bioguide_id': 'A000022',
        'votesmart_id': '26970',
        'fec_id': 'H4NY07011',
        'govtrack_id': '400003',
        'crp_id': 'N00001143',
        'eventful_id': '12234567789',
        'sunlight_old_id': '987654321',
        'twitter_id': 'repgaryackerman',
        'congresspedia_url': 'http://www.opencongress.org/wiki/Gary_Ackerman',
        'youtube_url': 'http://youtube.com/RepAckerman',
        'official_rss': 'http://google.com',
        'senate_class': 'http://google.com'
    }, false);
    this.click('#edit-submit');
}); 
 
casper.then(function() {
  //this.test.assertHttpStatus(302);
  this.test.assertDoesntExist('.messages.error');
});

casper.then(function() {
  this.test.assertExists('.lawmakers-name');
  this.test.assertSelectorHasText('.lawmakers-name','Rep. Grey Goose');
  this.clickLabel('Edit');  
});

casper.then(function() {
  this.test.assertExists('#lawmakers-form');
  this.test.assertExists('form#lawmakers-form');
  this.fill('form#lawmakers-form', {
    'title': 'Sen',
  }, false);
  this.click('#edit-submit');
});

casper.then(function() {
  this.test.assertHttpStatus(302);
  this.test.assertExists('.lawmakers-name');
  this.test.assertSelectorHasText('.lawmakers-name','Sen. Grey Goose');
  this.test.assertSelectorHasText('.party','D NY  5');
  this.test.assertSelectorHasText('.congress_office','2111 Rayburn House Office Building');
  this.test.assertSelectorHasText('.phone','tel: 202-225-2601');
  this.test.assertSelectorHasText('.fax','fax: 202-225-1589');
});  

casper.run(function() {
  this.test.renderResults(true, 0, this.cli.get('save') || false);
  this.exit();
});
