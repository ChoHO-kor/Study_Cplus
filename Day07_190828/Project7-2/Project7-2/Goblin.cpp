#include "Goblin.h"
#include <iostream>

using namespace std;

Goblin::Goblin()
{
}


Goblin::~Goblin()
{
}

void Goblin::BeginPlay()
{
	cout << "Goblin::BeginPlay()" << endl;
}

void Goblin::Process()
{
	cout << "Goblin::Process()" << endl;
}

void Goblin::Render()
{
	cout << "Goblin::Render()" << endl;
}
