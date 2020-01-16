#pragma once
#include "Character.h"
class Ninjas :
	public Character
{
public:
	Ninjas();
	void ThrowStars();
	int Attack() override;
	void help() override;
	
	
private:
};

