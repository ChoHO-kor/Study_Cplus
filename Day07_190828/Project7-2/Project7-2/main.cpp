#include "Engine.h"
//#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Slime.h"
#include "WildPig.h"
#include "Goblin.h"

int main()
{
	/*Engine* engine = new Engine;
	engine->Run();

	delete engine;
	engine = nullptr;*/
	
	//Actor* a = new Actor(); - 순수가상함수는 쓸수없음
//---------------------------------------
	Engine* engine = new Engine;

	engine->AddActor(new Player());
	engine->AddActor(new Goblin());
	engine->AddActor(new Goblin());
	engine->AddActor(new Goblin());
	engine->AddActor(new Slime());
	engine->AddActor(new WildPig());
	engine->AddActor(new WildPig());
	engine->AddActor(new Slime());
	engine->AddActor(new Slime());

	engine->Run();

	delete engine;
	engine = nullptr;
//-----------------------
	return 0;
}