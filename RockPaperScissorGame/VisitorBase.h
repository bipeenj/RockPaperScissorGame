#pragma once
class Rock;
class Paper;
class Scissor;
class GamePropObject;
# include<string>
class VisitorBase
{
protected:
	VisitorBase();
public:
	
	virtual ~VisitorBase();
	virtual int Visit(Rock* objIn) =0 ;
	virtual int Visit(Paper* objIn) = 0;
	virtual int Visit(Scissor* objIn) = 0;
	virtual int TotalGameObjectTypes() = 0;
	virtual std::string getUserMessage() = 0;
};

