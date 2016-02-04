// BunnyWorldApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bunny.h"
#include <thread>
#include<iostream>
#include<chrono>

static unsigned ThreadSleep = 1;

int _tmain(int argc, _TCHAR* argv[])
{
	


	Bunny b1;
	b1.SetAge(0);
	b1.SetBunnyMutant(false);
	b1.SetColor(BunnyColor::BLACK);

	Bunny b2;
	b2.SetAge(0);
	b2.SetBunnyMutant(false);
	b2.SetColor(BunnyColor::BLACK);

	BunnyRandomGenerator random;
	for (int i=0;i<100;i++)
	{
		/*b1.PrintBunnyObject();
		b1.SetAge(1+(b1.GetAge()));
		

		b2.PrintBunnyObject();
		b2.SetAge(1+(b1.GetAge()));*/

		Bunny b1;
		Bunny b2;
		b1.SetBunnyGender(BunnyGender::MALE);
		b2.SetBunnyGender(BunnyGender::FEMALE);
		Bunny b3(b1,b2);



		cout << "----------------------"<<endl;
		b1.PrintBunnyObject();
		b2.PrintBunnyObject();
		b3.PrintBunnyObject();
		cout << "----------------------"<<endl;
		this_thread ::sleep_for(chrono::seconds(ThreadSleep));
		
	}

	
	getchar();

	return 0;
}

