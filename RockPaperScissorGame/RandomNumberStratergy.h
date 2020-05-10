#pragma once
#include "Stratergy.h"
class RandomNumberStratergy :
	public Stratergy
{
public:
	RandomNumberStratergy();
	~RandomNumberStratergy();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn);
};

