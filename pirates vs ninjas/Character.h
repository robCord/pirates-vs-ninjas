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
	//overloading polymorphism
	void Talk(std::string stuffToSay);
	void Talk(std::string stuffToSay, std::string name);
	virtual int Attack();
	void help() override;
private:
	int Health;
};

