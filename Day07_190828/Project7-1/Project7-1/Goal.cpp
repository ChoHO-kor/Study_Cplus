#include "Goal.h"
#include <stdio.h>
#include "GameplayStatics.h"

Goal::Goal()
{
	X = 8;
	Y = 8;
	Shape = 'G';
	ForegroundColor = YELLOW;
}


Goal::~Goal()
{
}


void Goal::Render()
{
	Character::Render();
	/*GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);*/
}