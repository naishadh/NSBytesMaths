// BunnyWorldApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bunny.h"
#include <thread>
#include<iostream>
#include<chrono>
#include "BunnyDataStructure.h"
#include "BunnySociety.h"

static unsigned ThreadSleep = 1;

int _tmain(int argc, _TCHAR* argv[])
{
	
	BunnySociety bunnySociety;
	bunnySociety.InitializeBunnySociety();

	bunnySociety.StartBunnySociety();

	getchar();

	return 0;
}

