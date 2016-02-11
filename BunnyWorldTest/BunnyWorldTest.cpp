// BunnyWorldTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../BunnyWorldApplication/BunnyDataStructure.h"
#include <iostream>
#include <string>
using namespace std;

TEST(testStack, simpletest) {

	{


		{

			Bunny b1;
			b1.SetAge(0);
			b1.SetBunnyMutant(false);
			b1.SetColor(BunnyColor::BLACK);
			EXPECT_EQ(BunnyColor::BLACK, b1.GetColor());
			EXPECT_EQ(false, b1.GetBunnyMutant());
			EXPECT_EQ(0, b1.GetAge());

			Bunny b2;
			b2.SetAge(0);
			b2.SetBunnyMutant(false);
			b2.SetColor(BunnyColor::BLACK);

			BunnyDataStructure  bunnyDatastructure;

			BunnyRandomGenerator random;
			for (int i = 0; i < 10; i++)
			{
				/*b1.PrintBunnyObject();
				b1.SetAge(1+(b1.GetAge()));


				b2.PrintBunnyObject();
				b2.SetAge(1+(b1.GetAge()));*/

				Bunny b1;
				Bunny b2;
				b1.SetBunnyGender(BunnyGender::MALE);
				b2.SetBunnyGender(BunnyGender::FEMALE);
				Bunny b3(b1, b2);

				bunnyDatastructure.AddBunny(b1);
				bunnyDatastructure.AddBunny(b2);
				bunnyDatastructure.AddBunny(b3);

				/*cout << "----------------------"<<endl;
				b1.PrintBunnyObject();
				b2.PrintBunnyObject();
				b3.PrintBunnyObject();
				cout << "----------------------"<<endl;
				this_thread ::sleep_for(chrono::seconds(ThreadSleep));*/

			}
			//bunnyDatastructure.PrintBunnyList();


		}




	}


	getchar();

}

