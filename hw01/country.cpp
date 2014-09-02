#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>

#include "country.h"

using namespace std;

countryList::countryList()						//CTOR
{
	currentNode = new Node;
	currentNode->countryName = "NULL";
	currentNode->p = 0;
	head = currentNode;
	tail = currentNode;
}//CTOR

countryList::~countryList()						// DTOR
{
	Node *front, *back;
	front = head;
	while (front->p != 0)
	{
		back = front;
		delete back;
		front = front->p;
	}
}


void countryList::addToEndOfTheList(string newCountryName)
{
	Node* temp = new Node;
	temp->countryName = newCountryName;
	temp->p = 0;

	tail->p = temp;
	tail = temp;
}


void countryList::searchNode()
{
	string myCountryName;
	cout << "Enter the country you're searching for: ",
		cin >> myCountryName;

	Node* temp = head->p;

	bool Found = false;
	while (temp->p != 0)
	{
		if (temp->countryName == myCountryName)
		{
			cout << "Yayyy! Got it: " << myCountryName << endl;
			Found = true;
			break;
		}
		temp = temp->p;
	}
	
	if (Found == false)
	{
		cout << "Nahhh, " << myCountryName << "is not in the list" << endl;
	}

}

void countryList::printList()
{
	Node* temp = head->p;

	while (temp->p != 0)
	{
		cout << temp->countryName << endl;
		temp = temp->p;
	}
}