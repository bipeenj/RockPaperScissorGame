#include "pch.h"
#include "Computer.h"
#include "RandomNumberStratergy.h"
#include "VisitorBase.h"
Computer::Computer()
{
	m_GameObjectStrat = new RandomNumberStratergy;
}


Computer::~Computer()
{
}

GamePropObject * Computer::getGameObject(VisitorBase* visitorIn)
{
	m_GameObj = m_GameObjectStrat->getGameObject(visitorIn);

	return m_GameObj;
}
