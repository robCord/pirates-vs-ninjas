#pragma once
#include "GameStructure.h"
#include <string>

class Character : public GameStructure
{
public:
	std::string Name;
	int GetHealth();
	void setHealth(int health);
	void DisplayCharacterStats();
private:
	int Health;
};

