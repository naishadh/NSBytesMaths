#include "stdafx.h"
#include "Node.h"


Node::Node(void)
{
}


Node::~Node(void)
{
}

void Node::SetData(int m_Data)
{
	data = m_Data;
}
int Node::GetData()
{
	return data;
}

void Node::SetNextNode(Node* nextNode)
{
	next = nextNode;
}

Node* Node::GetNextNode()
{
	return	next;
}
