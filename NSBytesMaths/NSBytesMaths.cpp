// NSBytesMaths.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "Utility.h"
#include"Employee.h"

using namespace std;

template<class T>
T Max1(T &t1, T &t2)
{
	return t1>t2?t1:t2;
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	Employee  emp1 ("naishadh","shroff",(float)79000.10);
	Employee emp2 ("prachi","shroff",(float)92000.55);

	Employee higher = Max1(emp1,emp2);
	
	cout << "Salary of " << higher.GetEmployeeName()<< " is Higher "<< endl;

	/*if(emp2 < emp1)
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

	if(1000<emp1 && 10000<emp2)
	{
		cout << "Both are earning good. Earn some more...Do something...."<< endl;
	}*/
	/*cout << "Hellow world !!! From home computer"<< endl;
	cout << "Hi from work computer..."<< endl;
	Utility u ;
	u.Foo();
	u.foo1();
	getchar();*/
	getchar();
	return 0;
}

