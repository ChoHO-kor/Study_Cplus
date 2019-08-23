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
	std::cout << "Engine Constructor" << std::endl;

	player = new Player();
	goal = new Goal();
	monster = new Monster();
	map = new Map();
	gamemode = new GameMode();

}

Engine::~Engine()
{
	delete player;
	player = nullptr;
	delete goal;
	goal = nullptr;
	delete monster;
	monster = nullptr;
	delete map;
	map = nullptr;
	delete gamemode;
	gamemode = nullptr;
	system("cls");
	std::cout << "############################## Engine Destructor ###############################" << std::endl;

}

void Engine::Input()
{
	KeyCode = _getch();
}

void Engine::Tick()
{
	//Á¾·á
	if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
	else if (KeyCode == 224)
	{
		return;
	}

	player->Move(KeyCode, map);
	monster->Move(map);
	EGameOverType result = gamemode->CheckRule(player, monster, goal);
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

	//int result = gamemode->CheckRule(player, monster,goal);
	////1 : Å»Ãâ ,-1 : Á×À½ 
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
	monster->Render();
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
