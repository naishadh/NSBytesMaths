#include "stdafx.h"
#include "Bunny.h"


Bunny::Bunny(void)
{
	gender = (BunnyGender) randGenerator.RandomBooleanGenerator();
	color = (BunnyColor) randGenerator.RandomIntGenerator();
	name = "Bunny" + (randGenerator.RandomStringGenerator());
	age = (BunnyColor) randGenerator.RandomIntGenerator();
	isMutant = randGenerator.LessThan2perChance();
	
}

Bunny::Bunny(Bunny father,Bunny mother): color(mother.color)
{
	gender = (BunnyGender) randGenerator.RandomBooleanGenerator();
	name = "Bunny" + (randGenerator.RandomStringGenerator());
	age = 0;
	isMutant = randGenerator.LessThan2perChance();
	
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

void Bunny:: SetBunnyGender(BunnyGender m_Gender)
{
	gender = m_Gender;
}

BunnyGender Bunny :: GetBunnyGender()
{
	return gender;
}

string Bunny:: GetBunnyGenderStr()
{
	return gender==BunnyGender::MALE?BunnyMaleGender:BunnyFemaleGender;
}

string Bunny:: GetBunnyColorStr()
{
	string bunnycolor;
	switch (color)
	{
	case WHITE:
		bunnycolor=WHITECOLOR;
		break;
	case BROWN:
		bunnycolor=BROWNCOLOR;
		break;
	case BLACK:
		bunnycolor=BLACKCOLOR;
		break;
	case SPOTTED:
		bunnycolor=SPOTTEDCOLOR;
		break;
	default:
		bunnycolor=NOCOLOR;
		break;
	}
	return bunnycolor;
}

void Bunny :: PrintBunnyObject()
{
	cout << GetBunnyName()<< "   -   "<< GetAge() <<"   -   "<<GetBunnyMutant() << "   -   " <<GetBunnyColorStr() << "   -   "<<GetBunnyGenderStr() <<endl;
}