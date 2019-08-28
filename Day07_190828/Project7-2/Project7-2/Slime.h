#pragma once
#include "Monster.h"
class Slime :
	public Monster
{
public:
	Slime();
	~Slime();

	virtual void BeginPlay() override;
	virtual void Process() override;
	virtual void Render() override;
};

