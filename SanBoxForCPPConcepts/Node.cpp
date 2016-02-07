#include "stdafx.h"
#include "Node.h"


Node::Node(void)
{
	
}

Node::Node(int &m_data) 
{
	data = m_data;
	next = nullptr;
	
}

Node::~Node(void)
{
}



void Node::SetData(int m_Data)
{
	data = m_Data;
}


void Node::SetNextNode(Node* nextNode)
{
	next = nextNode;
}


