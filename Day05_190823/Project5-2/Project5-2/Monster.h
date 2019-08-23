#pragma once
class Monster
{
public:
	Monster();
	~Monster();

	int X;
	int Y;

	void initialize();

	char Shape;
	void Move(class Map* map);
	void Render();

};