#include "Pirates.h"
#include "Character.h"
#include <iostream>

void Pirates::UseSword()
{
	std::cout << "Swinging sword!";
}

Pirates::Pirates()
{
	std::cout << "\nThis Pirate has washed up on shore, ready to fight!\n";
}

void Pirates::help() {
	std::cout << "This is Pirate help! Trying swinging the sword!\n";
}
