#pragma once
#include<iostream>

using namespace std;
class Node
{
public:
	int data;
	Node *next;
public:
	Node(void);
	~Node(void);
	Node::Node(int &m_data) ;
	
	void SetData(int m_data);
	void SetNextNode(Node *nextNode);
	Node& GetNextNode();
	int& GetData();
};

