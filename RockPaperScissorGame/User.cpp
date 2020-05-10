#include "pch.h"
#include "User.h"
#include"ScanStratergy.h"
#include "VisitorBase.h"
User::User(std::string nameIn)
{
	m_GameObjectStrat = new ScanStratergy;
	m_Name = nameIn;
}


User::~User()
{
}

GamePropObject * User::getGameObject(VisitorBase* visitorIn)
{
	m_GameObj =  m_GameObjectStrat->getGameObject(visitorIn);

	return m_GameObj;
}
