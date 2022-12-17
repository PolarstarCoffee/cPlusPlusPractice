#include <iostream>
#include "vPet.h"
using namespace std;



int main() //C++ NEEDS a main function to actually intialize 
{
	vPet Garland(150, false); //initalizes a new virtual pet, utilizing the vPet.h and vPet.cpp files 
	Garland.feedPet(100);

	vPet Tristessa;
	Tristessa.feedPet(20);

	cout << "Garland weighs: " << Garland.getWeight() << endl;
	cout << "Tristessa weighs: " << Tristessa.getWeight() << endl;

	if (Garland.isHungry()) //small hungry test
	{
		cout << "Garland hungers" << endl;
	}
	else
	{
		cout << "Garland is satiated" << endl;
	}
	if (Tristessa.isHungry()) //small hungry test
	{
		cout << "Tristessa hungers" << endl;
	}
	else
	{
		cout << "Tristessa is satiated" << endl;
	}


	return 0;
}