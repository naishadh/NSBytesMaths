#include "stdafx.h"
#include "Employee.h"


Employee::Employee(void)
{
}


Employee::~Employee(void)
{
}

Employee::Employee(string firstName,string lastName,float mSalary)
	: firstname(firstName),
	lastname(lastName),
	salary(mSalary)
{

}

string Employee :: GetEmployeeName()
{
	return firstname + " "+ lastname;
}

bool Employee :: operator<(Employee &emp)
{
	return salary < emp.salary;
}