#include "pch.h"
#include "Rock.h"
#include "VisitorBase.h"

Rock::Rock()
{
}


Rock::~Rock()
{
}

int Rock::GetTypeNumber(VisitorBase * visitorIn)
{
	return visitorIn->Visit(this);
}
