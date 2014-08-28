#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>

#include "country.h"

using namespace std;

// ======================================================================
countryList::countryList()								//CTOR
{
	tail = new Node;
	tail->countryName = "NULL";
	tail->p = 0;					// initial condition: point to NULL

	head->countryName = "NULL";
	head->p = tail;
}//CTOR

countryList::~countryList()						// DTOR
{
	Node *temp1;								// delete Head
	temp1 = head;
	delete temp1;

	Node *temp2;
	temp2 = head->p;

	while (temp2 != 0)
	{
		temp1 = temp2;
		delete temp2;
		temp2 = temp1->p;
	}
}

void countryList::newNode(string newCountry)			// add at the end of the list
{
	Node* temp = new Node;
	tail->p = temp;
	temp->countryName = newCountry;
	temp->p = 0;
}

Node* makeNode(string nameOfCountry)
{
	Node* temp = new Node;
	temp->countryName = nameOfCountry;
	temp->p = 0;
	return temp;
}

void countryList::addNode(Node* anotherNode)
{
	Node* temp = head->p;
	head->p = anotherNode;
	anotherNode->p = temp;
}

void countryList::searchNode()
{
	string myCountryName;
	cout << "Enter the country name you're searching for: ",
		cin >> myCountryName;

	Node* temp = head->p;

	while (temp->countryName != myCountryName && temp->p != 0)
	{
		temp = temp->p;
		if (temp->countryName == myCountryName)
		{
			cout << "Yayyy! Got it: " << myCountryName << endl;
			break;
		}
		else
		{
			cout << "Nahhh," << myCountryName << "is not in the list" << endl;
		}
	}

}