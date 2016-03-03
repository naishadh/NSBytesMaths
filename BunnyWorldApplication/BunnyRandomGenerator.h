#pragma once
#include<string>
#include<cstdlib>
#include<random>


using namespace std;

static const double PROBABILITY = 2.20;
static const int H100  = 100;
static const int H999 = 999;
class BunnyRandomGenerator
{
private:
	bool m_BoolNum;
	int m_IntNum;
	string m_String;
	int ColorMaxNum;
	int colorMinNum;
	
public:
	BunnyRandomGenerator(void);
	virtual ~BunnyRandomGenerator(void);

	bool RandomBooleanGenerator();
	int RandomIntGenerator();
	string RandomStringGenerator();

	bool LessThan2perChance();

	int RandomIntGenerator(int min, int max);

private:
	
};

