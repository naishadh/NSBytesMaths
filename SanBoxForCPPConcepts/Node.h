#pragma once
#include<iostream>

using namespace std;
class Node
{
private:
	int num;
	Node *next;
public:
	Node(void);
	~Node(void);
	Node(Node& newNode);
	Node (int data,Node* nextNode);

	Node AddNode(int data,Node* nextNode);
	Node DeleteNode(Node* deleteNode);

	void PrintNodeData(Node* node)
	{
		cout << "Node Data: " << num <<endl;
	}
};

