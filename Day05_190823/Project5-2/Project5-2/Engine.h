#pragma once
class Engine
{
public:
	Engine();
	~Engine();

	//�̸��ٲٱ� : Ctrl + RR
	/*void Input();
	void Tick();
	void Render();
	bool bIsRunning;*/
	void Run();
	
private:
	bool bIsRunning;
	int KeyCode;

	void Input();
	void Tick();
	void Render();

	class Player* player;
	class Map* map;
	class Monster* monster;
	class Goal* goal;
	class GameMode* gamemode;
};