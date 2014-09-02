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

	countryList myCountryList;			// create an empty list

	string newCountryName;
	cout << "Enter the name of the country you want to add at the end of the list: ",
		cin >> newCountryName;
	cout << endl;

	myCountryList.addToEndOfTheList(newCountryName);

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			myCountryList.addToEndOfTheList(line);			// populate from plain text
		}
		myfile.close();
	}

	else
	{
		cout << "Unable to open file" << endl;
		exit(-1);
	}

	myCountryList.searchNode();						// search the list

	cout << endl;
	cout << "		Rank of richest countries in the world" << endl;
	myCountryList.printList();							// display plain text form of the list

	system("PAUSE");
	return 0;
}

