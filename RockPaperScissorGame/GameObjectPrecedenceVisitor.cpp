#include "pch.h"
#include "GameObjectPrecedenceVisitor.h"


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
