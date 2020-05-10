#pragma once
class GamePropObject;
class Stratergy
{
protected:
	Stratergy();
public:
	
	~Stratergy();
	virtual GamePropObject* getGameObject() = 0;
};

