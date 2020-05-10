#pragma once
class Rock;
class Paper;
class Scissor;
class GamePropObject;
class VisitorBase
{
protected:
	VisitorBase();
public:
	
	virtual ~VisitorBase();
	virtual int Visit(Rock* objIn) =0 ;
	virtual int Visit(Paper* objIn) = 0;
	virtual int Visit(Scissor* objIn) = 0;

	virtual GamePropObject* Compare(Rock* objIn, Paper* objIn2) = 0;
	virtual GamePropObject* Compare(Paper* objIn,Scissor* obj2) = 0;
	virtual GamePropObject* Compare(Scissor* objIn,Rock* obj2) = 0;
};

