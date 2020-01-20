#pragma once
#include "Character.h"
class Pirates :
	public Character
{
public:

	Pirates();
	void UseSword();
	void help() override;
private:
};

