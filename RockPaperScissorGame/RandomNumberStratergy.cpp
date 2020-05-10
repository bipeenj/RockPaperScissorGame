#include "pch.h"
#include "RandomNumberStratergy.h"
#include <math.h>
#include<time.h>
#include <iostream>
#include "Rock.h"
#include "Paper.h"
#include "VisitorBase.h"
#include"Scissor.h"

RandomNumberStratergy::RandomNumberStratergy()
{
}


RandomNumberStratergy::~RandomNumberStratergy()
{
}

GamePropObject * RandomNumberStratergy::getGameObject(VisitorBase* visitorIn)
{
	auto rock = new Rock;
	int rockint = visitorIn->Visit(rock);
	auto paper = new Paper;
	int paperint = visitorIn->Visit(paper);
	auto scissor = new Scissor;
	auto scissorint = visitorIn->Visit(scissor);
	srand(time(0));
	int num = rand();
	GamePropObject* retVal = nullptr;
	if (rockint == num)
	{
		retVal = rock;
		delete paper;
		delete scissor;
	}
	else if (paperint == num)
	{
		retVal = paper;
		delete rock;
		delete scissor;
	}
	else if (scissorint == num)
	{
		retVal = scissor;
		delete paper;
		delete rock;
	}

	return retVal;
}
