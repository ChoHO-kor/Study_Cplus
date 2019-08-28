#include "Slime.h"
#include <iostream>

using namespace std;

Slime::Slime()
{
}


Slime::~Slime()
{
}

void Slime::BeginPlay()
{
	cout << "Slime::BeginPlay()" << endl;
}

void Slime::Process()
{
	cout << "Slime::Process()" << endl;
}

void Slime::Render()
{
	cout << "Slime::Render()" << endl;
}
