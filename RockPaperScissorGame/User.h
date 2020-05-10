#pragma once
#include "Player.h"

class User :
	public Player
{
private:
	std::string m_Name = "Player";

public:
	User(std::string nameIn);
	~User();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn);
	virtual std::string getName() { return m_Name; }
};

