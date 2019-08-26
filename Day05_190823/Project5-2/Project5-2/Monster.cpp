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

//���ͺ� �ٸ� �ൿ����
void Monster::Move(class Map* map)
{

	int NewX = X;
	int NewY = Y;

	//�̵� ����
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

void Monster::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);
}
