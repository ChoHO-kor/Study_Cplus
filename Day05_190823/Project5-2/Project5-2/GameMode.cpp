#include "GameMode.h"
#include "Goal.h"
#include "Player.h"
#include "Monster.h"

GameMode::GameMode()
{
	
}


GameMode::~GameMode()
{

}

EGameOverType GameMode::CheckRule(Player * player, Monster * monster, Goal * goal)
{
	if (player->X == monster->X &&
		player->Y == monster->Y)
	{
		//return -1;
		return EGameOverType::Dead;
	}
	else if (player->X == goal->X &&
		player->Y == goal->Y)
	{
		//return 1;
		return EGameOverType::Escape;
	}


	return EGameOverType::Playing;
}

