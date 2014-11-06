var MongoClient = require('mongodb').MongoClient;


// ------- Now Create Data --------
var dataList = [];

var USstates = ["Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", 
"Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Idaho", "Illinois", "Indiana", 
"Iowa", "Kansas","Kentucky"];

var ChineseProvinces = ["Shandong", "Hebei", "Beijing", "Shanghai", "Henan",
"Hubei", "Hunan", "Jiangxi", "Guangdong", "Qinghai", "Xizang", "Xinjiang", "Neimenggu","Tianjin",
"Liaoning"];

var cities = ["London","Tokyo","Paris","New York","Washington","Hongkong","Taibei",
"Seoul","Mascow","Rome","Budapest","Rio","Bacelona", "Berlin", "Singapore"];

for (var i = 0; i < 2500; i++) 
{
    var stateIndex = Math.floor((Math.random() * Number(USstates.length)));
    var provinceIndex = Math.floor((Math.random() * Number(ChineseProvinces.length)));
    var cityIndex = Math.floor((Math.random() * Number(cities.length)));

    dataList.push("{\"index\": \""+i+"\", \"states\": \""+ USstates[stateIndex] +"\", 
                    \"province\": \""+ ChineseProvinces[provinceIndex] +"\", 
                    \"cities\": \""+ cities[cityIndex] +"\",}");
};

dataList.push("{\"index\": \""+2500+"\", \"states\":\""+USstates[0]+"\", \"province\":\""+ChineseProvinces[0]+"\", 
                \"city\":\""+cities[0]+"\"}");


var title = "{\"DATA\": [" + dataList + "]}";
var titleObject = JSON.parse(title);

MongoClient.connect('http://127.0.0.1:1337/hw14', function(err, db) {
    if(err) throw err;

    var newCollection = db.collection('hw14');
    newCollection.insert(titleObject.Collection, function(err, result) {    
        if(err) throw err;
        newCollection.find({ }).toArray(function (err, docs) {
            if(err) throw err;

            docs.forEach(function (doc) {
                console.log('Index: ' + doc['index'] + ' US has state: ' + doc['states'] + ' while China has province ' 
                            + doc['province'] + ' , while the city ' + doc['city'] + ' is in the world. ');
            });

            db.close(function (err) {
                if(err) throw err;
            });
        });
    });
});