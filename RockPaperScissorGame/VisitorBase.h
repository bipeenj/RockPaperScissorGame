#pragma once
class Rock;
class Paper;
class Scissor;
class VisitorBase
{
public:
	VisitorBase();
	virtual ~VisitorBase();
	virtual int Visit(Rock* objIn) =0 ;
	virtual int Visit(Paper* objIn) = 0;
	virtual int Visit(Scissor* objIn) = 0;
};

