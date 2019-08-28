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
	std::cout << "###################게임 시작#######################\nEngine Constructor" << std::endl;
	
	gameMode = new GameMode();
}

Engine::~Engine()
{
	for (auto actor : actors)
	{
		delete actor;
		actor = nullptr;
	}
	actors.clear();

	delete gameMode;
	gameMode = nullptr;
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

	/*player->Move(KeyCode, map);
	for (auto monster : monsters)
	{
		monster->Move(map);

	}*/
	for (auto actor : actors)
	{
		//actors[0]은 무조건 맵
		actor->Tick(KeyCode,(Map*)actors[0]);
	}

	EGameOverType result = gameMode->CheckRule(actors);
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
	}

}

void Engine::Render()
{
	//for (auto monster : monsters)
	for (auto monster : actors)
	{
		monster->Render();
	}
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
