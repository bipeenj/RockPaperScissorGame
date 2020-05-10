#pragma once
#include "GameObject.h"
class Paper :
	public GamePropObject
{
public:
	Paper();
	~Paper();
	int GetTypeNumber(VisitorBase* visitorIn);
};

