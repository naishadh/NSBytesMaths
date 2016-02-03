// BunnyWorldApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bunny.h"
#include <thread>
#include<iostream>
#include<chrono>

static unsigned ThreadSleep = 3;

int _tmain(int argc, _TCHAR* argv[])
{
	Bunny b1;
	b1.SetAge(0);
	b1.SetBunnyMutant(false);
	b1.SetColor(BunnyColor::BLACK);
	b1.SetBunnyName("BunnyName1");

	for (int i=0;i<10;i++)
	{
		b1.PrintBunnyObject();
		b1.SetAge(1+(b1.GetAge()));
		this_thread ::sleep_for(chrono::seconds(ThreadSleep));
		
	}

	
	getchar();

	return 0;
}

