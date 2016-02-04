#pragma once
#include"Bunny.h"
class Node
{
private : 
	Bunny bunnyNode;
	Node *nextBunny;

public:
	Node(void);
	virtual ~Node(void);

	void SetBunny(int m_data);
	void SetNext(Node *nextNode);
	Node* GetNext();
	int GetBunny();
};

