#include "pch.h"
#include "Computer.h"
#include "RandomNumberStratergy.h"

Computer::Computer()
{
	m_GameObjectStrat = new RandomNumberStratergy;
}


Computer::~Computer()
{
}
