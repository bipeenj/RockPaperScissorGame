#include "pch.h"
#include "GameObjectPrecedenceVisitor.h"
#include"Paper.h"
#include"Rock.h"
#include"Scissor.h"

GameObjectPrecedenceVisitor::GameObjectPrecedenceVisitor()
{
}


GameObjectPrecedenceVisitor::~GameObjectPrecedenceVisitor()
{
}

int GameObjectPrecedenceVisitor::Visit(Rock * objIn)
{
	return 0;
}

int GameObjectPrecedenceVisitor::Visit(Paper * objIn)
{
	return 1;
}

int GameObjectPrecedenceVisitor::Visit(Scissor * objIn)
{
	return 2;
}

std::string GameObjectPrecedenceVisitor::getUserMessage()
{
	return "Please input your choice for option ROCK?PAPER?SCISSOR:\n Where: \n Rock is ";
}

