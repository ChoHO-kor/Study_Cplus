#pragma once
#include "Character.h"

//���� ���ʹ�
class Goal : public Character
{
public:
	Goal();
	~Goal();

	/*char Shape;
	void Render();*/
	virtual void Render() override;
};