#ifndef  VPET_H_
#define VPET_H_
#endif // ! VPET_H_
//practice on user defined types (classes) for c++, here is a virtual pet program I studied off of a YouTube video
//Header files are used for defining interfaces 

class vPet
{
	//Data members or Function Members / What is private or public 

public:
	vPet(int weight, bool hungry); // Specialized Constructor, used to initalize the data members and functions
	vPet(); //Default constructor 

	//Member Functions

	void feedPet(int amount);
	bool isHungry();
	double getWeight();

private: 
	//Data Members 
	double weight;
	bool hungry;
};