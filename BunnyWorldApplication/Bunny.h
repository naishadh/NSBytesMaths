
/*

Bunny.h
Naishadh Shroff


Each bunny object must have
Sex: Male, Female (random at creation 50/50)
color: white, brown, black, spotted
age : 0-10 (years old)
Name : randomly chosen at creation from a list of bunny names.
Bunny father: name of the bunny fathered him/her
Bunny mother: name of the bunny mothered him/her
Bunny Sibling : Brothers, sisters
radioactive_mutant_vampire_bunny: true/false (decided at time of bunny creation 2% chance of true)

*/

#pragma once
#include<string>
#include "stdafx.h"
#include<iostream>

using namespace std;

enum BunnyGender
{
	MALE,FEMALE
};

enum BunnyColor
{
	WHITE,BROWN,BLACK,SPOTTED
};

class Bunny
{
private:
	int age;
	BunnyGender gender;
	string name;
	BunnyColor color;
	bool isMutant;
	/// Advance pointers to store father, mother, siblling.

public:
	Bunny(void);
	~Bunny(void);

	void SetAge(int m_age);
	int GetAge();

	string GetBunnyName();
	void SetBunnyName(string name);

	void SetColor(BunnyColor bColor);
	BunnyColor GetColor();

	void SetBunnyMutant(bool mutant);
	bool GetBunnyMutant();

	void SetBunnyGender(BunnyGender m_Gender);
	BunnyGender GetBunnyGender();
	
	void PrintBunnyObject();

};

