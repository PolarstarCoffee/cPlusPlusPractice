#include "vPet.h"
using namespace std;


vPet::vPet(int w, bool hun) :weight(w),hungry(hun) //initalizer list (more elegant) Specialized constructor
{
	//weight = w;
	//hungry = hun; //another way of initalizing data members aside from the intializer list 
}
vPet::vPet() :weight(100), hungry(true) //Default constructor 
{

}

void vPet::feedPet(int amt) //feedpet implementation 
{
	if (amt >= 0.5 * weight)
	{
		hungry = false;
	}
	else
	{
		hungry = true;
	}
	weight = weight + 0.25 * amt;

}

double vPet::getWeight() //getWeight implementation 
{
	return weight;
}
bool vPet::isHungry() //isHungry implementation
{
	return hungry;
}