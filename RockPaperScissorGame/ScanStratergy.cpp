#include "pch.h"
#include "ScanStratergy.h"
#include <String>
#include <iostream>
#include "Rock.h"
#include "Paper.h"
#include "VisitorBase.h"
#include"Scissor.h"
ScanStratergy::ScanStratergy()
{
}


ScanStratergy::~ScanStratergy()
{
}

GamePropObject * ScanStratergy::getGameObject(VisitorBase* visitorIn)
{
	std::string msg = visitorIn->getUserMessage();
	
	auto rock = new Rock;
	auto paper = new Paper;
	auto scissor = new Scissor;
	GamePropObject* retVal = nullptr;
	int rockint = visitorIn->Visit(rock);
	auto  rockInt = std::to_string (rockint);
	msg += rockInt;
	msg += "\n Paper is:";
	int paperint = visitorIn->Visit(paper);
	auto paperInt = std::to_string(paperint);
	msg += paperInt;
	msg += "\n Scissor is is:";
	auto scissorint = visitorIn->Visit(scissor);
	auto scissorInt = std::to_string(scissorint);
	msg += scissorInt+"\n";
	std::cout << msg;
	std::string userValue;
	std::cin >> userValue;
	int i_userval = std::stoi(userValue);

	if (rockint == i_userval)
	{
		retVal = rock;
		delete paper;
		delete scissor;
	}
	else if (paperint == i_userval)
	{
		retVal = paper;
		delete rock;
		delete scissor;
	}
	else if (scissorint == i_userval)
	{
		retVal = scissor;
		delete paper;
		delete rock;
	}
	return retVal;
}
