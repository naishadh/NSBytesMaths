// SanBoxForCPPConcepts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 100;
	int *b = &a;
	int **c = &b;

	cout << "A :"<< endl;
	getchar();
	return 0;
}

