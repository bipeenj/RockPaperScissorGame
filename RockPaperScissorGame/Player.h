#pragma once
class Stratergy;
class GamePropObject;
class VisitorBase;
class Player
{
protected:

	Stratergy* m_GameObjectStrat = nullptr;
	Player();
public:
	
	virtual ~Player();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn) = 0;
};

