#pragma once
#include "Player.h"

class User :
	public Player
{

public:
	User();
	~User();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn);
};

