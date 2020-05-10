#include "pch.h"
#include "Paper.h"
#include "VisitorBase.h"

Paper::Paper()
{
}


Paper::~Paper()
{
}

int Paper::GetTypeNumber(VisitorBase * visitorIn)
{
	return visitorIn->Visit(this);
}
