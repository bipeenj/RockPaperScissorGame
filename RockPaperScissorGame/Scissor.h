#pragma once
#include "GameObject.h"
class Scissor :
	public GamePropObject
{
public:
	Scissor();
	~Scissor();
	int GetTypeNumber(VisitorBase* visitorIn);
};

