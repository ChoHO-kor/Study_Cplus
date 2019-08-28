#pragma once
#include "Monster.h"
class WildPig :
	public Monster
{
public:
	WildPig();
	~WildPig();

	virtual void BeginPlay() override;
	virtual void Process() override;
	virtual void Render() override;
};

