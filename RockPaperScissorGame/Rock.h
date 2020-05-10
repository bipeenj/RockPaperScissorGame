#pragma once
#include "GameObject.h"
class Rock :
	public GamePropObject
{
public:
	Rock();
	~Rock();

	int GetTypeNumber(VisitorBase* visitorIn);
};

