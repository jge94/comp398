var countryList = function()
{
	this.head = null;
	this.tail = null;
};

var countryNode = function(countryName)
{
	this.value = countryName;
	this.next = null;
};

// print to console
countryList.prototype.toConsole = function(){
	temp = this.head;
	var outputString = "";
	while(temp != null) 
	{
		outputString += temp.countryName;
		outputString += " ";
		temp = temp.next;
	};
	console.log(outputString);
};

// add a single node to the end of the list
countryList.prototype.append = function(countryName)
{
	var newNode = new countryNode(countryName);

	if(this.head == null) {
		this.head = newNode;
		this.tail = newNode;
	}
	else 
	{
		tempNode = this.head;

		while (tempNode.next != null) 
		{
			tempNode = tempNode.next;
		}

		tempNode.next = newNode;
		this.tail = newNode;
	}
};

// populate the list from a flat file database
countryList.prototype.populate = function(fileName)
{
	var fs = require('fs');
	var fileNameList = fs.readFileSync(fileName, "utf8");	
	fileNameList = fileNameList.split("\n");
	
	for(var i = 0; i < fileNameList.length; i++) 
	{
    	this.append(fileNameList[i]);
	}
};

// search the list for a value
countryList.prototype.search = function(countryName)
{
	temp = this.head;

	while(temp != null) 
	{
		if(temp.countryName == countryName)
		{
			console.log("Found!!");
			return true;
		}
		temp = temp.next;
	};

	console.log("Not Found...");
	return false;
};

// display a plaintext form of the list
countryList.prototype.display = function()
{
	temp = this.head;

	outputString = "";
	while(temp != null) 
	{
		outputString += temp;
		outputString += "\n";
		temp = temp.next;
	};

	fs.writeFile("output.txt", outputString, function(err) {
    	if (err) 
    	{
        	console.log(err);
    	} 
    	else 
    	{
        	console.log("Directly displayed.");
    	}
	});
};