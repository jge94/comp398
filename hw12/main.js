/*------ main -----*/

// get the other linkedList file (like #include "linkedList.h")
var fs = require('fs')
eval(fs.readFileSync('./linkedList.js')+'');

var countryList = new countryList();

countryList.populate("countries.txt");
countryList.toConsole();
countryList.append("Cuba");

countryList.search("China");
countryList.display();