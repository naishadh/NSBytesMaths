
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

using namespace std;
class Bunny
{
private:
	int age;
	bool gender;
	string name;


public:
	Bunny(void);
	~Bunny(void);

	void SetAge(int m_age);
	int GetAge();
};

