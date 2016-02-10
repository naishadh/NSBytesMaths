#include "stdafx.h"
#include "BunnyNode.h"


BunnyNode::BunnyNode(void)
{
	next = NULL;
	
}

BunnyNode::BunnyNode(Bunny &m_data) 
{
	bunny = m_data;
	next = NULL;
	
}

BunnyNode::~BunnyNode(void)
{
	delete next;
}



void BunnyNode::SetBunnyData(Bunny m_Data)
{
	bunny = m_Data;
}


void BunnyNode::SetNextBunny(BunnyNode* nextNode)
{
	next = nextNode;
}