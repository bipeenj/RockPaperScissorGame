#pragma once
#include <string>
class Stratergy;
class GamePropObject;
class VisitorBase;
class Player
{
protected:

	Stratergy* m_GameObjectStrat = nullptr;
	GamePropObject* m_GameObj;
	Player();
public:
	
	virtual ~Player();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn) = 0;
	virtual  std::string getName() = 0;
};

