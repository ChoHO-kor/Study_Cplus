#include "Engine.h"
//#include <iostream>
//iostream�� c++ǥ���̶� .h���ƴ�
int main()
{
	//Engine engine;
	//Ŭ������ �̷��� ����� �޸𸮿� ���� ��� �������.
	//���� �����ͷ� ���
	Engine* engine = new Engine();

	//(*engine).Run(); �� ���ŷο�� ->�� ǥ�Ⱑ��
	engine->Run();

	delete engine;
	engine = nullptr;

	//engine.bIsRunning = false; ������ �̿Ͱ������� �߻��Ҽ������� ������ �����ؾ���,
	//������ Engine.h���� public�� �ƴ� private�� �������

	return 0;
}