#include "stdafx.h"
#include "BunnyRandomGenerator.h"


BunnyRandomGenerator::BunnyRandomGenerator(void) : colorMinNum(0),ColorMaxNum(4)
{
}


BunnyRandomGenerator::~BunnyRandomGenerator(void)
{
}

bool BunnyRandomGenerator :: RandomBooleanGenerator()
{
	return static_cast<bool>(rand()%2) ;// < PROBABILITY * ((double) RAND_MAX+1);
}

int BunnyRandomGenerator :: RandomIntGenerator()
{
		return RandomIntGenerator(1,4);
     
}

string BunnyRandomGenerator::RandomStringGenerator()
{
	int num = RandomIntGenerator(100,999);

	return to_string(num);

}

int BunnyRandomGenerator :: RandomIntGenerator(int min, int max)
{
	std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(min,max); // define the range

     return distr(eng) ; // generate numbers
}

bool BunnyRandomGenerator :: LessThan2perChance()
{
	return static_cast<bool> (rand()%100< 2);
}