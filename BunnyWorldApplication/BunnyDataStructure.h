#pragma once
#include"BunnyNode.h"
class BunnyDataStructure
{
private:
	BunnyNode *head;
		
public:
	BunnyDataStructure(void);
	~BunnyDataStructure(void);

	void AddBunny(Bunny addBunny);
	void DeleteBunny(Bunny deleteBunny);
	int GetCount();
	Bunny GetBunnyONIndex(int index);
	void PrintBunnyList();
	BunnyNode* GetNextBunny(BunnyNode* curBunny);
};

