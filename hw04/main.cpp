// MarkDownToHTML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	ifstream inputMDFile("MarkDownFile.md");

	if (!inputMDFile.is_open())
	{ 
		cout << "Can't open file" << endl;
		exit(-1);
	}

	ofstream outputHTMLfile;
	outputHTMLfile.open("HTMLFile.html");

	if (!outputHTMLfile.is_open())
	{
		cout << "Can't open file" << endl;
		exit(-1);
	}


	inputMDFile.close();
	outputHTMLfile.close();

	system("PAUSE");
	return 0;
}