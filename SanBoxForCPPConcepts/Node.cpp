#include "stdafx.h"
#include "Node.h"


Node::Node(void)
{
	next = NULL;
	
}

Node::Node(int &m_data) 
{
	data = m_data;
	next = NULL;
	
}

Node::~Node(void)
{
	delete next;
}



void Node::SetData(int m_Data)
{
	data = m_Data;
}


void Node::SetNextNode(Node* nextNode)
{
	next = nextNode;
}


