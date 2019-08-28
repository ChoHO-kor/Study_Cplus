#pragma once
#include "Character.h"

//골은 액터다
class Goal : public Character
{
public:
	Goal();
	~Goal();

	/*char Shape;
	void Render();*/
	virtual void Render() override;
};