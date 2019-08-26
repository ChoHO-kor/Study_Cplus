#include "GameMode.h"
#include "Goal.h"
#include "Player.h"
#include "Monster.h"
#include <vector>
#include "Character.h"
#include "Actor.h"

using namespace std;

GameMode::GameMode()
{
	
}


GameMode::~GameMode()
{

}

EGameOverType GameMode::CheckRule(vector<class Actor*> actors)
{
	Player* player = dynamic_cast<Player*>(actors[2]);
	Goal* goal = dynamic_cast<Goal*>(actors[1]);

	if (!player || !goal)
	{
		return EGameOverType::Playing;
	}

	if (player->X == goal->X &&
		player->Y == goal->Y)
	{
		//return 1;
		return EGameOverType::Escape;
	}

	for (int i = 3; i < actors.size(); ++i)
	{
		Monster* monster = dynamic_cast<Monster*>(actors[i]);

		if (!monster)
		{
			continue;
		}
		if (player->X == monster->X &&
			player->Y == monster->Y)
		{
			return EGameOverType::Dead;
		}
	}

	return EGameOverType::Playing;
}



//EGameOverType GameMode::CheckRule(Player * player,Monster * monster,Goal * goal)
//if (player->X == monster->X &&
//	player->Y == monster->Y)
//{
//	//return -1;
//	return EGameOverType::Dead;
//}
//else if (player->X == goal->X &&
//	player->Y == goal->Y)
//{
//	//return 1;
//	return EGameOverType::Escape;
//}
