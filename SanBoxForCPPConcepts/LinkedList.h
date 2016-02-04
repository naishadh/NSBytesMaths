#pragma once
#include "Node.h"
class LinkedList
{
private:
	Node *head;
		
public:
	LinkedList(void){head=nullptr;};
	~LinkedList(void);

	void AddNode(int data);
	void DeleteNode(int data);
	void PritLinkedList();

};

