#pragma once
#include "Object.h"
class Actor : public Object
{
public:
	Actor();
	~Actor();

	//Event 함수
	// =0 : 구현안된 껍데기임, 쓸때 채워라
	virtual void BeginPlay() = 0;
	virtual void Process() = 0;
	virtual void Render() = 0;
};

