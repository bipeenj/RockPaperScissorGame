#include "pch.h"
#include "User.h"
#include"ScanStratergy.h"
#include "VisitorBase.h"
User::User()
{
	m_GameObjectStrat = new ScanStratergy;
}


User::~User()
{
}

GamePropObject * User::getGameObject(VisitorBase* visitorIn)
{
	return m_GameObjectStrat->getGameObject();;
}
