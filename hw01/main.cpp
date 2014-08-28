// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "country.h"

using namespace std;

int main()
{
	string line;
	ifstream myfile("countries.txt");

	countryList myCountryList;			// create empty list
	string newCountry;
	cout << "Enter the name of the country you want to add at the end of the list: ",
		cin >> newCountry;
	cout << endl;

	myCountryList.newNode(newCountry);

	// plain text
	if (myfile.is_open())
	{
		cout << "			Rank of richest countries in the world" << endl;
		while (getline(myfile, line))
		{
			cout << line << endl;
			Node* newCountry = myCountryList.makeNode(line);
			myCountryList.addNode(newCountry);				// populate from plain text
		}
		myfile.close();
	}

	else
	{
		cout << "Unable to open file" << endl;
	}


	system("PAUSE");
	return 0;
}

