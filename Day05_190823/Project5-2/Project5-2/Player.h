#pragma once
class Player
{
public:
	//������
	Player();
	//�Ҹ���
	~Player();

	int X;
	int Y;

	void initialize();

	char Shape;
	void Move(int KeyCode, class Map* map);
	void Render();
};

