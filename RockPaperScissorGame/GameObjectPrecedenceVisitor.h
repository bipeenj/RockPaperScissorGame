#pragma once
#include "VisitorBase.h"
class GameObjectPrecedenceVisitor :
	public VisitorBase
{
public:
	GameObjectPrecedenceVisitor();
	~GameObjectPrecedenceVisitor();
	
	virtual int Visit(Rock* objIn);
	virtual int Visit(Paper* objIn) ;
	virtual int Visit(Scissor* objIn);

	virtual GamePropObject* Compare(Rock* objIn, Paper* objIn2);
	virtual GamePropObject* Compare(Paper* objIn, Scissor* obj2);
	virtual GamePropObject* Compare(Scissor* objIn, Rock* obj2) ;
};

