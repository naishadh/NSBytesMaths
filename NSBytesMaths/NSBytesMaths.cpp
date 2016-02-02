// NSBytesMaths.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "Utility.h"
#include"Employee.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	
	Employee  emp1 ("naishadh","shroff",79000.10);
	Employee emp2 ("prachi","shroff",92000.55);

	if(emp2 < emp1)
	{
		cout << "Salary of " << emp1.GetEmployeeName()<< " <  " << emp2.GetEmployeeName()<< endl;
	}
	if(emp2 > emp1)
	{
		cout << "Salary of " << emp2.GetEmployeeName()<< " >  " << emp1.GetEmployeeName()<< endl;
	}
	if(emp2 = emp1)
	{
		cout << "Salary of " << emp2.GetEmployeeName()<< " =  " << emp1.GetEmployeeName()<< endl;
	}
	if(emp2 != emp1)
	{
		cout << "Salary of " << emp2.GetEmployeeName()<< " !=  " << emp1.GetEmployeeName()<< endl;
	}
	if(emp2 >= emp1)
	{
		cout << "Salary of " << emp2.GetEmployeeName()<< " >=   " << emp1.GetEmployeeName()<< endl;
	}
	if(emp2 <= emp1)
	{
		cout << "Salary of " << emp2.GetEmployeeName()<< " <=  " << emp1.GetEmployeeName()<< endl;
	}
	/*cout << "Hellow world !!! From home computer"<< endl;
	cout << "Hi from work computer..."<< endl;
	Utility u ;
	u.Foo();
	u.foo1();
	getchar();*/
	getchar();
	return 0;
}

