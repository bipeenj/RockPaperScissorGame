// RockPaperScissorGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "User.h"
#include "Computer.h"
#include "GameObjectPrecedenceVisitor.h"
#include <string>
#include "Player.h"
#include "GameObject.h"
#include <list>

int main()
{
	GameObjectPrecedenceVisitor logicVisitor;
    std::cout << "Welcome to game of Rock paper Scissor !\n Enter your name: "; 
	std::string name;
	std::cin >> name;
	User newUser(name);
	newUser.getGameObject(&logicVisitor);
	Computer opponent;
	opponent.getGameObject(&logicVisitor);
	std::list<Player*> players = { &newUser,&opponent };
	std::list<Player*> Winners;
	
	int gameTypeCount = logicVisitor.TotalGameObjectTypes();
	int counter = 0;
	for (auto it = players.begin(); it != players.end(); ++it)
	{
		auto obj = *it;
		int counter2 = 0;
		for (auto itNext = players.begin()  ; itNext != players.end(); ++itNext)
		{
			if (counter2 <= counter)
			{
				counter2++;
				continue;
			}
			counter2++;
			auto obj2 = *itNext;
			int firstNo  = obj->getProp()->GetTypeNumber(&logicVisitor);
			int secondNo = obj2->getProp()->GetTypeNumber(&logicVisitor);
			auto resultNo = (gameTypeCount + firstNo - secondNo) % gameTypeCount;
			if (resultNo != 0)
			{
				if ((resultNo % 2) > 0)
				{
					Winners.push_back(obj);
				}
				else
					Winners.push_back(obj2);
			}
			
		}
		counter++;
	}
	Winners.unique();
}
