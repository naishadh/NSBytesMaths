#include "stdafx.h"
#include<iostream>
#include "Utility.h"
#include "Employee.h"

using namespace std; 

Utility::Utility(void)
{
}


Utility::~Utility(void)
{
}

int Utility :: Foo()
{
	cout << "Foo is printing...After batch file introduced..."<<endl;
	return 0;
}

void Utility :: foo1()
{
	cout << "Foo1 is printing...After batch file introduced..."<<endl;
}

