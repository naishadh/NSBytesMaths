#include "stdafx.h"
#include "BunnyRandomGenerator.h"


BunnyRandomGenerator::BunnyRandomGenerator(void)
{
}


BunnyRandomGenerator::~BunnyRandomGenerator(void)
{
}

bool BunnyRandomGenerator :: RandomBooleanGenerator()
{
	return rand()%2 ;// < PROBABILITY * ((double) RAND_MAX+1);
}