// SanBoxForCPPConcepts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "LinkedList.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int  a = 100;
	int   *b = &a;
	int  **c = &b;

	cout << "a :"<< a <<endl;
	cout << "*b :"<< *b <<endl;
	cout << "**c :"<< **c <<endl;

	*b = 200;

	cout << "a :"<< a <<endl;
	cout << "*b :"<< *b <<endl;
	cout << "**c :"<< **c <<endl;

	**c = 300;

	cout << "a :"<< a <<endl;
	cout << "*b :"<< *b <<endl;
	cout << "**c :"<< **c <<endl;
//
	LinkedList list;
	list.AddNode(10);
	list.AddNode(20);
	//Node* header = list.CreateHeadNode();
	list.PritLinkedList();
	


	getchar();
	return 0;
}

