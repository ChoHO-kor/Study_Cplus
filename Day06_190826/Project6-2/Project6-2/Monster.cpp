#include "Monster.h"
#include "Map.h"
#include "GameplayStatics.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

Monster::Monster()
{
	X = 5;
	Y = 5;
	Shape = 'M';
	srand(time(nullptr));
}


Monster::~Monster()
{
}

//몬스터별 다른 행동패턴
void Monster::Move(int KeyCode, class Map* map)
{

	int NewX = X;
	int NewY = Y;

	//이동 패턴
	int Direction = rand() % 4;

	if (Direction == 0)
	{
		NewY--;
	}
	else if (Direction == 1)
	{
		NewY++;
	}
	else if (Direction == 2)
	{
		NewX--;
	}
	else if (Direction == 3)
	{
		NewX++;
	}

	if (map->data[NewY][NewX] == 0)
	{
		X = NewX;
		Y = NewY;
	}
}

void Monster::Tick(int KeyCode, class Map* map)
{
	Move(KeyCode, map);
}

void Monster::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);
}
