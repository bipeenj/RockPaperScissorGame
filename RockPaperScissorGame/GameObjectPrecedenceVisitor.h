#pragma once
#include "VisitorBase.h"
class GameObjectPrecedenceVisitor :
	public VisitorBase
{
public:
	GameObjectPrecedenceVisitor();
	~GameObjectPrecedenceVisitor();
	
	virtual int TotalGameObjectTypes() { return 3; }
	virtual int Visit(Rock* objIn);
	virtual int Visit(Paper* objIn) ;
	virtual int Visit(Scissor* objIn);

};

