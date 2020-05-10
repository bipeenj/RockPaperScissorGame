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
	return 2;
}

int GameObjectPrecedenceVisitor::Visit(Paper * objIn)
{
	return 3;
}

int GameObjectPrecedenceVisitor::Visit(Scissor * objIn)
{
	return 1;
}

GamePropObject * GameObjectPrecedenceVisitor::Compare(Rock * objIn, Paper * objIn2)
{
	return objIn2;
}

GamePropObject * GameObjectPrecedenceVisitor::Compare(Paper * objIn, Scissor * obj2)
{
	return obj2;
}

GamePropObject * GameObjectPrecedenceVisitor::Compare(Scissor * objIn, Rock * obj2)
{
	return obj2;
}
