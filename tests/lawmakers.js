// Behavioral Testing: Lawmakers

var casper = require("casper").create();
var environment = casper.cli.get('environment');
var link = 'http://' + environment;

var casper = require('casper').create({
  verbose: true,
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


casper.run(function() {
  this.test.renderResults(true, 0, this.cli.get('save') || false);
  this.exit();
});
