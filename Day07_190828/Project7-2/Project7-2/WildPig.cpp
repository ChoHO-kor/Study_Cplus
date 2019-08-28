#include "WildPig.h"
#include <iostream>

using namespace std;

WildPig::WildPig()
{
}


WildPig::~WildPig()
{
}

void WildPig::BeginPlay()
{
	cout << "WildPig::BeginPlay()" << endl;
}

void WildPig::Process()
{
	cout << "WildPig::Process()" << endl;
}

void WildPig::Render()
{
	cout << "WildPig::Render()" << endl;
}