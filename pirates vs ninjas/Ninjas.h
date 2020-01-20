#pragma once
#include "Character.h"
class Ninjas :
	public Character
{
public:
	//sets function for use in other files 
	Ninjas();
	void ThrowStars();
	int Attack() override;
	void help() override;
	
	
private:
};

