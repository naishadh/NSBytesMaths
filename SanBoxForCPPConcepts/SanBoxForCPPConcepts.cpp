// SanBoxForCPPConcepts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "LinkedList.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//
	{
	LinkedList list;
	list.AddNode(10);
	list.AddNode(20);
	list.AddNode(30);
	list.AddNode(50);
	list.AddNode(60);
	list.AddNode(70);
	list.AddNode(80);
	//Node* header = list.CreateHeadNode();
	cout << "Printing all ======================"<<endl;
	list.PritLinkedList();
	cout << "Deleting 10 ======================"<<endl;
	list.DeleteNode(10);
	list.PritLinkedList();
	cout << "Deliting 50 ======================"<<endl;
	list.DeleteNode(50);
	list.PritLinkedList();
	cout << "Deleting 80======================"<<endl;
	list.DeleteNode(80);
	list.PritLinkedList();
	}


	getchar();
	return 0;
}

