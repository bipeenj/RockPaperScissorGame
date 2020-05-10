#pragma once
class VisitorBase;
class GamePropObject
{
protected:
	GamePropObject();
public:
	
	virtual ~GamePropObject();
	virtual int GetTypeNumber(VisitorBase* visitorIn) = 0;
};

