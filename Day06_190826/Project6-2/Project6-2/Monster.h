#pragma once
#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	~Monster();

	//void Move(class Map* map);
	//void Render();
	virtual void Tick(int KeyCode, class Map* map) override;
	virtual void Render() override;

protected:
	virtual void Move(int KeyCode, class Map* map) override;

};