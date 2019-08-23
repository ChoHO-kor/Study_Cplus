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
}


Monster::~Monster()
{
}

void Monster::initialize()
{
}

void Monster::Move(class Map* map)
{
	int NewX = X;
	int NewY = Y;

	//이동 패턴
	int Direction = rand() % 4;

	if (Direction == 0)
	{
		Y--;
	}
	else if (Direction == 1)
	{
		Y++;
	}
	else if (Direction == 2)
	{
		X--;
	}
	else if (Direction == 3)
	{
		X++;
	}

	if (map->data[NewY][NewX] == 0)
	{
		X = NewX;
		Y = NewY;
	}
}

void Monster::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);
}
