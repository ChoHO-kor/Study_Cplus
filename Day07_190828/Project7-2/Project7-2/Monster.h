#pragma once
#include "Actor.h"
class Monster :	public Actor
{
public:
	Monster();
	~Monster();

	virtual void BeginPlay() override;
	virtual void Process() override;
	virtual void Render() override;
};

