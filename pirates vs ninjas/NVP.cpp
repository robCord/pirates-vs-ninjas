#include <iostream>
#include <string>


#include "Character.h"
#include "gamedriver.h"
#include "GameStructure.h"
#include "Ninjas.h"
#include "Pirates.h"

int main()
{
	//display intro
	GameDriver game_driver;
	game_driver.DisplayIntro();

	//create some ninjas
	Ninjas black_clothes_ninjas;
	//gave ninja a name
	black_clothes_ninjas.Name = "Jet Lee";
	//set health
	black_clothes_ninjas.setHealth(100);
	//health check
	black_clothes_ninjas.DisplayCharacterStats();
	//test ninja fight
	std::cout << "\nThe ninja gets capped! Errr I mean shot!";
	black_clothes_ninjas.setHealth(-30);
	black_clothes_ninjas.DisplayCharacterStats();
	//make ninja talk
	black_clothes_ninjas.Talk("Ninjas are the superior warrior!");
	black_clothes_ninjas.Talk("Ninjas are the superior warrior!", black_clothes_ninjas.Name);
	//calling help for info
	black_clothes_ninjas.help();

	//character code
	Character NPC;
	NPC.help();
	
	
	//create some pirates
	Pirates brown_coat_pirates;
	//give pirates name
	brown_coat_pirates.Name = "John Ravier";
	//set health
	brown_coat_pirates.setHealth(100);
	//health check
	brown_coat_pirates.DisplayCharacterStats();
	//test pirate fight
	std::cout << "\nThe pirate gets shan-!  sorry I mean cut!";
	brown_coat_pirates.setHealth(-30);
	brown_coat_pirates.DisplayCharacterStats();
	//make pirates talk
	brown_coat_pirates.Talk("Pirates are the top dogs here!");
	brown_coat_pirates.Talk("Pirates are the top dogs here!", brown_coat_pirates.Name);
	
	return 0;
}