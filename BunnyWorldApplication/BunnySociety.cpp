#include "stdafx.h"
#include "BunnySociety.h"
#include <thread>

BunnySociety::BunnySociety()
{
}


BunnySociety::~BunnySociety()
{
}

bool BunnySociety::InitializeBunnySociety()
{
	
	for (int i = 0; i < 5; i++)
	{
		Bunny b1;
		b1.SetBunnyGender(BunnyGender::MALE);
		bunnyDatastructure.AddBunny(b1);
	}
	return false;
}

int BunnySociety::GetBunnyNumbers()
{

	return 0;
}

int BunnySociety::StartBunnySociety()
{
	/// Starting the society printing.
	BunnySocietyPrint();

	//do
	{
		{
			///If a bunny becomes older than 10 years old, it dies.
			///Radioactive vampire bunnies do not die until they reach age 50.
			/// First step increase everybody's age.
			for (int i = 0; i < bunnyDatastructure.GetCount(); i++)
			{
				Bunny bunny = bunnyDatastructure.GetBunnyONIndex(i);
				int bunnyAge = bunny.GetAge();
				if (bunny.GetBunnyMutant())
				{
					if (bunnyAge >= 50)
					{
						cout << "Mutant Bunny Killed :::" + bunny.GetBunnyName()<<endl;
						bunnyDatastructure.DeleteBunny(bunny);
					}

				}
				else
				{
					if(bunnyAge >= 10)
					{
						cout << "Bunny Killed :::" + bunny.GetBunnyName() << endl;
						bunnyDatastructure.DeleteBunny(bunny);
					}
				}
				

			}

		}

		{
			///Each turn afterwards the bunnies age 1 year.

			for (int i = 0; i < bunnyDatastructure.GetCount(); i++)
			{
				Bunny bunny = bunnyDatastructure.GetBunnyONIndex(i);

				bunny.PrintBunnyObject();

			}
		}

		//thread(100);

		
	} 
	//while (bunnyDatastructure.GetCount() > 0);

	

	return 0;
}

void BunnySociety::BunnySocietyPrint()
{
	bunnyDatastructure.PrintBunnyList();
}
