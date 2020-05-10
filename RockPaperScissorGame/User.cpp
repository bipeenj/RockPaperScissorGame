#include "pch.h"
#include "User.h"
#include"ScanStratergy.h"

User::User()
{
	m_GameObjectStrat = new ScanStratergy;
}


User::~User()
{
}

GamePropObject * User::getGameObject()
{
	return m_GameObjectStrat->getGameObject();;
}
