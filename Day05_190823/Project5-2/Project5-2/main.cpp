#include "Engine.h"
//#include <iostream>
//iostream은 c++표준이라 .h가아님
int main()
{
	//Engine engine;
	//클래스를 이렇게 만들면 메모리에 만들어서 계속 들고있음.
	//따라서 포인터로 사용
	Engine* engine = new Engine();

	//(*engine).Run(); 는 번거로우니 ->로 표기가능
	engine->Run();

	delete engine;
	engine = nullptr;

	//engine.bIsRunning = false; 시작전 이와같은일이 발생할수있으니 접근을 제한해야함,
	//선언한 Engine.h에서 public이 아닌 private로 사용하자

	return 0;
}