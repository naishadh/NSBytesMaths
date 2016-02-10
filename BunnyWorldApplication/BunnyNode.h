#pragma once
#include"Bunny.h"
class BunnyNode
{
public:
	Bunny bunny;
	BunnyNode *next;
public:
	BunnyNode(void);
	~BunnyNode(void);
	BunnyNode::BunnyNode(Bunny &m_bunny) ;
	
	void SetBunnyData(Bunny m_bunny);
	void SetNextBunny(BunnyNode *nextNode);
	BunnyNode& GetNextBunny();
	Bunny& GetBunnyData();
};

