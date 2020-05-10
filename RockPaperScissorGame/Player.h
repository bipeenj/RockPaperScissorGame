#pragma once
class Stratergy;
class Player
{
protected:

	Stratergy* m_GameObjectStrat = nullptr;
	Player();
public:
	
	virtual ~Player();
};

