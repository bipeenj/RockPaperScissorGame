#pragma once
class GamePropObject;
class VisitorBase;
class Stratergy
{
protected:
	Stratergy();
public:
	
	~Stratergy();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn ) = 0;
};

