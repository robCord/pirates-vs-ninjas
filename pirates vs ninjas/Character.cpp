#include "Character.h"
#include <iostream>

int Character::GetHealth()
{
	
	return Health;
}

void Character::setHealth(int health)
{
	Health = health;
}
void Character::DisplayCharacterStats()
{
	std::cout << "The black clothed ninja named " << Name << " Has health has a current health of " << GetHealth() << std::endl;
}