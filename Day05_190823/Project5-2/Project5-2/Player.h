#pragma once
class Player
{
public:
	//持失切
	Player();
	//社瑚切
	~Player();

	int X;
	int Y;

	void initialize();

	char Shape;
	void Move(int KeyCode, class Map* map);
	void Render();
};

