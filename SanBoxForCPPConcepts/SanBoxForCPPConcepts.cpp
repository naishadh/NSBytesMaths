// SanBoxForCPPConcepts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "LinkedList.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//
	LinkedList list;
	list.AddNode(10);
	list.AddNode(20);
	list.AddNode(30);
	list.AddNode(50);
	list.AddNode(60);
	list.AddNode(70);
	list.AddNode(80);
	//Node* header = list.CreateHeadNode();
	list.PritLinkedList();
	


	getchar();
	return 0;
}

