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
	Node(Node& newNode);
	Node (int data,Node& nextNode);

	void SetData(int m_data);
	void SetNextNode(Node &nextNode);

	int GetData();
};

