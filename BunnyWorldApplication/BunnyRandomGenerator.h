#pragma once
#include<string>
#include<cstdlib>

using namespace std;

static const double PROBABILITY = 2.20;
class BunnyRandomGenerator
{
private:
	bool m_BoolNum;
	int m_IntNum;
	string m_String;
	
public:
	BunnyRandomGenerator(void);
	virtual ~BunnyRandomGenerator(void);

	bool RandomBooleanGenerator();
	int RandomIntGenerator();
	string RandomStringGenerator();
};

