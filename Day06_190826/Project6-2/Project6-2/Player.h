#pragma once
#include "Character.h"

class Player : public Character
{
public:
	//생성자
	Player();
	//소멸자
	~Player();


	//재정의 하겠다!
	virtual void Tick(int KeyCode, class Map* map) override;
	virtual void Render() override;
protected:
	virtual void Move(int KeyCode, class Map* map) override;
};

