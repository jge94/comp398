// node.h -- these are the NODES on the list
#ifndef a_Node
#define a_Node

//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
// NODE for ONE Node
typedef
struct aNode
{
	string countryName;

	struct aNode  *p;	// pointer to next node in the list

}Node;

#endif