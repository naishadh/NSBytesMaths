#include "stdafx.h"
#include "Bunny.h"


Bunny::Bunny(void)
{
}


Bunny::~Bunny(void)
{
}

void Bunny::SetAge(int m_age)
{
	age = m_age;
}

int Bunny:: GetAge()
{
	return age;
}

void Bunny::SetBunnyMutant(bool mutant)
{
	isMutant = mutant;
}

bool Bunny:: GetBunnyMutant()
{
	return isMutant;
}
void Bunny::SetColor(BunnyColor m_color)
{
	color = m_color;
}

BunnyColor Bunny:: GetColor()
{
	return color;
}
void Bunny::SetBunnyName(string m_name)
{
	name = m_name;
}

string Bunny:: GetBunnyName()
{
	return name;
}