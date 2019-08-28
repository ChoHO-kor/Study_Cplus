#pragma once
#include "Monster.h"
class Goblin :
	public Monster
{
public:
	Goblin();
	~Goblin();

	virtual void BeginPlay() override;
	virtual void Process() override;
	virtual void Render() override;
};

