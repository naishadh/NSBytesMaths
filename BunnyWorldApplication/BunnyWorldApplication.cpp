// BunnyWorldApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bunny.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Bunny b1;
	b1.SetAge(0);
	b1.SetBunnyMutant(false);
	b1.SetColor(BunnyColor::BLACK);
	b1.SetBunnyName("BunnyName1");

	getchar();

	return 0;
}

