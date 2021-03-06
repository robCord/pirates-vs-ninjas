#include "Character.h"
#include <iostream>

int Character::GetHealth()
{
	
	return Health;
}

//In the setter method check health before setting the value,
//if the new Health value will be less than zero,
//then set the property Health to zeroand display "Character has Expired..." to the screen.
void Character::setHealth(int health)
{
	if(health < 0)
	{
		health = 0;
		std::cout << std::endl << "\n" << Name <<  ", has expired with zero health left...\n";
	}

	
	Health = health;
}
//display current character health 
void Character::DisplayCharacterStats()
{
	std::cout << Name << " Has health has a current health of " << GetHealth() << std::endl;
	
}
//character uses talk method to display text 
void Character::Talk(std::string stuffToSay)
{
	std::cout << "\nOur character says: " << stuffToSay << std::endl;
}
//character uses talk method and string name to display text and name set earlier 
void Character::Talk(std::string stuffToSay, std::string name)
{
	std::cout << std::endl << name << ", says: " << stuffToSay << std::endl;
}
//virtual attack that returns 10 hitpoints 
int Character::Attack()
{
	return 10;
}
//help is used to display text 
void Character::help()
{
	std::cout << "\nThis is NPC help\n";
}


