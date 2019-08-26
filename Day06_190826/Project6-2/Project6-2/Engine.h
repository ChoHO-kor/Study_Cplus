#pragma once
#include <vector>

using namespace std;

class Engine
{
public:
	Engine();
	~Engine();

	//이름바꾸기 : Ctrl + RR
	/*void Input();
	void Tick();
	void Render();
	bool bIsRunning;*/
	void Run();
	vector<class Actor*> actors;

private:
	bool bIsRunning;
	int KeyCode;

	void Input();
	void Tick();
	void Render();

	//class Player* player;
	//class Map* map;

	//vector <class Monster*> monsters;
	///*class Monster* monster;
	//class Monster* monster2;*/

	//class Goal* goal;
	class GameMode* gameMode;

	
};