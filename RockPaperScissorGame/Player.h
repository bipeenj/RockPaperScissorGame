#pragma once
class Stratergy;
class GamePropObject;
class Player
{
protected:

	Stratergy* m_GameObjectStrat = nullptr;
	Player();
public:
	
	virtual ~Player();
	virtual GamePropObject* getGameObject() = 0;
};

