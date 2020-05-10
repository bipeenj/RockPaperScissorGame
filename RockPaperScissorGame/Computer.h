#pragma once
#include "Player.h"
#include <string>
class Computer :
	public Player
{

public:
	Computer();
	~Computer();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn);
	virtual std::string getName() { return "Computer"; }
};

