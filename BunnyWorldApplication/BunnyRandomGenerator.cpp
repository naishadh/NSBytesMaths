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
	/*double randDouble = rand()/static_cast<double>(RAND_MAX+1);
	randDouble = colorMinNum + static_cast<int>( randDouble * (ColorMaxNum - colorMinNum) );
	return randDouble;
*/
	std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1, 4); // define the range

     return distr(eng) ; // generate numbers

}