#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster()
{
}


Monster::~Monster()
{
}

void Monster::BeginPlay()
{
	cout << "Monster::BeginPlay()" << endl;
}

void Monster::Process()
{
	cout << "Monster::Process()" << endl;
}

void Monster::Render()
{
	cout << "Monster::Render()" << endl;
}
