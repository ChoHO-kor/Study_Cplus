#include "Engine.h"
#include <iostream>
//iostream은 c++표준이라 .h가아님

#include <vector>
#include <list>
//#include <map>

using namespace std;//이거쓰면 앞에 std::안써도됨

int main()
{
	//Engine engine;
	//클래스를 이렇게 만들면 메모리에 만들어서 계속 들고있음. 따라서 포인터로 사용
	Engine* engine = new Engine();

	//(*engine).Run(); 는 번거로우니 ->로 표기가능
	engine->Run();

	delete engine;
	engine = nullptr;

	//engine.bIsRunning = false; 시작전 이와같은일이 발생할수있으니 접근을 제한해야함,
	//선언한 Engine.h에서 public이 아닌 private로 사용하자
//----------------------------------------------------------------------------------
	return 0;
}

void STLTest()
{
	//--------------------------------------------------------------------
	vector<int> v;
	list<int> l;
	int a[5];

	for (int i = 0; i < 5; ++i)
	{
		v.push_back(i);
		l.push_back(i);
		a[i] = i;
	}

	//v.erase(v[3]);

	//반복자
	/*for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;

	}*/
	//Vector
	//for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	/*for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}*/
	for (auto iter : v)
	{
		cout << iter << endl;
	}
	//List - 숫자면 이거써야함
	//for (list<int>::iterator iter = l.begin(); iter != l.end(); ++iter)
	/*for (auto iter = l.begin(); iter != l.end(); ++iter)
	{
		cout << *iter << endl;
	}*/

	//인덱스 사용 안할경우, 숫자경우X
	for (auto iter : a)
	{
		cout << iter << endl;
	}

}