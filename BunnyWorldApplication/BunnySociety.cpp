#include "stdafx.h"
#include "BunnySociety.h"


BunnySociety::BunnySociety()
{
}


BunnySociety::~BunnySociety()
{
}

bool BunnySociety::InitializeBunnySociety()
{
	
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
	return false;
}

int BunnySociety::GetBunnyNumbers()
{

	return 0;
}
