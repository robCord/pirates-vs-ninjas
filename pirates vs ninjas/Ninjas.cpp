#include "Ninjas.h"
#include <iostream>


void Ninjas::ThrowStars()
{
	std::cout << "\nThrowing stars! \n";
}

int Ninjas::Attack()
{
	// create ab override attack method in both subclasses of the character class
	//using polymorphism and set attack return values at 25 hp
	return 25;
	
}

void Ninjas::help()
{
	std::cout << "\nThis is Ninja help! Try throwing your ninja stars!\n";
}


Ninjas::Ninjas()
{
	std::cout << "\nThis Ninja has finished its training from the constructor!\n";
}

