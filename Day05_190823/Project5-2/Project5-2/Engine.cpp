#include "Engine.h"
#include <iostream>
#include "Player.h"
#include "Map.h"
#include "Goal.h"
#include "Monster.h"
#include <conio.h>
#include "GameMode.h"


Engine::Engine()
{
	bIsRunning = true;
	std::cout << "###################게임 시작#######################Engine Constructor" << std::endl;

	player = new Player();
	goal = new Goal();

	monsters.push_back(new Monster());
	monsters.push_back(new Monster());
	monsters.push_back(new Monster());
	monsters.push_back(new Monster());

	//monster = new Monster();
	//monster2 = new Monster();
	//monster2->Shape = 'N';

	map = new Map();
	gamemode = new GameMode();

}

Engine::~Engine()
{
	delete player;
	player = nullptr;
	delete goal;
	goal = nullptr;

	//메모리 누수정리
	for (auto monster : monsters)
	{
		delete monster;
		monster = nullptr;
	}
	//벡터 삭제
	monsters.erase(monsters.begin(), monsters.end());

	//delete monster;
	//monster = nullptr;
	delete map;
	map = nullptr;
	delete gamemode;
	gamemode = nullptr;
	system("cls");
	std::cout << "##############################게임 오버###############################Engine Destructor" << std::endl;

}

void Engine::Input()
{
	KeyCode = _getch();
}

void Engine::Tick()
{
	//종료
	if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
	else if (KeyCode == 224)
	{
		return;
	}

	player->Move(KeyCode, map);
	
	for (auto monster : monsters)
	{
		monster->Move(map);

	}
	//monster->Move(map);
	//monster2->Move(map);

	/*EGameOverType result = gamemode->CheckRule(player, monster, goal);
	switch (result)
	{
	case EGameOverType::Dead:
	{
		bIsRunning = false;
	}
		break;
	case EGameOverType::Escape:
	{
		bIsRunning = false;
	}
		break;
	default:
		break;
	}
	EGameOverType result2 = gamemode->CheckRule(player, monster2, goal);
	switch (result2)
	{
	case EGameOverType::Dead:
	{
		bIsRunning = false;
	}
	break;
	case EGameOverType::Escape:
	{
		bIsRunning = false;
	}
	break;
	default:
		break;
	}*/

	//int result = gamemode->CheckRule(player, monster,goal);
	////1 : 탈출 ,-1 : 죽음 
	//if (result == 1)
	//{
	//	bIsRunning = false;
	//}
	//else if (result == -1)
	//{
	//	bIsRunning = false;
	//}

}

void Engine::Render()
{
	map->Render();
	player->Render();

	for (auto monster : monsters)
	{
		monster->Render();
	}
	//monster->Render();
	//monster2->Render();
	goal->Render();
}

void Engine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}
