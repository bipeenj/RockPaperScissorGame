#pragma once
#include "Stratergy.h"
class ScanStratergy :
	public Stratergy
{
public:
	ScanStratergy();
	~ScanStratergy();
	virtual GamePropObject* getGameObject(VisitorBase* visitorIn);
};

