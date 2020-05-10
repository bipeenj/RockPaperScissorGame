#pragma once
class GamePropObject
{
protected:
	GamePropObject();
public:
	
	virtual ~GamePropObject();
	virtual int GetTypeNumber() = 0;
};

