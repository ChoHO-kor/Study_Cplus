#pragma once
#include "Actor.h"
class Player : public Actor
{
public:
	Player();
	~Player();

	virtual void BeginPlay() override;
	virtual void Process() override;
	virtual void Render() override;
};

