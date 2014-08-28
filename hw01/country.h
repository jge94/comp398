#ifndef COUNTRY
#define COUNTRY

#include "stdafx.h"
#include <iostream>
#include <string>

struct Node
{
	string countryName;
	Node *p;
};

class countryList
{
public:

	countryList();													// Default CTOR

	~countryList();												// DTOR

	void newNode(string newCountry);
	Node* makeNode(string nameOfCountry);
	void addNode(Node* anotherNode);
	void searchNode();

	Node *head;
	Node *tail;

};// class countryList

#endif