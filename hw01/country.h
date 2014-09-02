#ifndef COUNTRY
#define COUNTRY

#include "stdafx.h"
#include "Node.h"
#include <iostream>
#include <string>


class countryList
{
public:

	countryList();												// Default CTOR

	~countryList();												// DTOR

	void addToEndOfTheList(string newCountryName);				// add Node to the end of the list
	void searchNode();											// search for a country
	void printList();											// print the entire list to console

	Node *head;
	Node *tail;
	Node *currentNode;

};// class countryList

#endif
