#include "pch.h"
#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
	delete m_GameObj;
	m_GameObj = nullptr;
	delete m_GameObjectStrat;
	m_GameObjectStrat = nullptr;
}
