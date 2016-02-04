#pragma once
#include<iostream>

using namespace std;
class Node
{
private:
	int data;
	Node *next;
public:
	Node(void);
	~Node(void);
	
	void SetData(int m_data);
	void SetNextNode(Node *nextNode);
	Node* GetNextNode();
	int GetData();
};

