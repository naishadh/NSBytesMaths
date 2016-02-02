#pragma once
#include <string>
#include<iostream>

using namespace std;

class Employee
{
private:
	string firstname;
	string lastname;
	float salary;
public:
	Employee(void);
	Employee(string firstName,string lastName,float salary);
	virtual ~Employee(void);
};

