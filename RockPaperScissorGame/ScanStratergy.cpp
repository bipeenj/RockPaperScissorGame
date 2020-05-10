#include "pch.h"
#include "ScanStratergy.h"
#include "String.h"
#include <iostream>
ScanStratergy::ScanStratergy()
{
}


ScanStratergy::~ScanStratergy()
{
}

GamePropObject * ScanStratergy::getGameObject(VisitorBase* visitorIn)
{
	auto msg = "Please input your choice for option ROCK?PAPER?SCISSOR:\n";
	std::cout << msg;
	
	return nullptr;
}
