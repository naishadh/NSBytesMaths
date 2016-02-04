#pragma once
#include "Node.h"
class LinkedList
{
private:
	Node *head;
	Node *temp;
	
public:
	LinkedList(void);
	~LinkedList(void);

	Node* GetHead();
	void AddNode(Node* addNode);
	Node* DeleteNode(int data);
	void PritLinkedList();

private:
	Node* CreateHeadNode();
};

