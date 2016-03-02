#pragma once
#include "BunnyDataStructure.h"

class BunnySociety
{
private:
	BunnyDataStructure  bunnyDatastructure;
	BunnyRandomGenerator random;
public:
	
	BunnySociety();
	virtual ~BunnySociety();
	bool InitializeBunnySociety();
	int GetBunnyNumbers();
	int StartBunnySociety();
	void BunnySocietyPrint();
};

