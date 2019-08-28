#pragma once
#include "Object.h"
class Actor : public Object
{
public:
	Actor();
	~Actor();

	//Event �Լ�
	// =0 : �����ȵ� ��������, ���� ä����
	virtual void BeginPlay() = 0;
	virtual void Process() = 0;
	virtual void Render() = 0;
};

