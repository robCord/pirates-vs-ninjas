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

	//create some pirates
	Pirates brown_coat_pirates;
	//give pirates name
	brown_coat_pirates.Name = "John Ravier";
	//health check
	
	return 0;
}