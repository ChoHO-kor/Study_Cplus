#pragma once
class Map
{
public:
	Map();
	~Map();

	void Initialize();
	int Size;
	//char Tile[10] = { ' ', '-', '|', 'P', 'G', 'M' };
	char Tile[10] = { ' ', '-', '|'};
		
	int data[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{2,0,0,1,0,0,0,0,0,2},
	{2,1,0,0,0,0,1,0,0,2},
	{2,2,0,0,0,0,0,0,0,2},
	{2,2,0,0,1,0,2,2,0,2},
	{2,0,0,0,1,0,2,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,1,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{1,1,1,1,1,1,1,1,1,1},
	};

	void Render();
};

