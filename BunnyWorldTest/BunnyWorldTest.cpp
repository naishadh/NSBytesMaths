// BunnyWorldTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../BunnyWorldApplication/BunnyDataStructure.h"
#include "../BunnyWorldApplication/BunnySociety.h"
#include <iostream>
#include <string>
using namespace std;

TEST(testStack, simpletest) {

	{




			Bunny b1;
			b1.SetAge(0);
			b1.SetBunnyMutant(false);
			b1.SetColor(BunnyColor::BLACK);
			EXPECT_EQ(BunnyColor::BLACK, b1.GetColor());
			EXPECT_EQ(false, b1.GetBunnyMutant());
			EXPECT_EQ(0, b1.GetAge());




	}


	

}

TEST(BunnySocietyInit, InitializeWithFiveBunnies)
{
	BunnySociety bunnySocTest;
	bool isInitialized = bunnySocTest.InitializeBunnySociety();
	EXPECT_EQ(true, isInitialized);

	int initBunnyNum = bunnySocTest.GetBunnyNumbers();
	EXPECT_EQ(5, initBunnyNum);


	getchar();
}

