#include "pch.h"
#include "Scissor.h"
#include "VisitorBase.h"

Scissor::Scissor()
{
}


Scissor::~Scissor()
{
}

int Scissor::GetTypeNumber(VisitorBase * visitorIn)
{
	return visitorIn->Visit(this);
}
