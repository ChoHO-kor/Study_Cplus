#include "Engine.h"
#include <iostream>
//iostream�� c++ǥ���̶� .h���ƴ�

//STL
#include <vector>
#include <list>
//#include <map>
#include "Character.h"
#include "Player.h"
#include "Map.h"
#include "Map2.h"
#include "Goal.h"
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildPig.h"

using namespace std;//�̰ž��� �Ʒ��� std������ �տ� std::�Ƚᵵ��

int main()
{
	//Engine engine;
	//Ŭ������ �̷��� ����� �޸𸮿� ���� ��� �������. ���� �����ͷ� ���
	//engine.bIsRunning = false; ������ �̿Ͱ������� �߻��Ҽ������� ������ �����ؾ���, ������ Engine.h���� public�� �ƴ� private�� �������
	//Engine* engine = new Engine();
	////(*engine).Run(); �� ���ŷο�� ->�� ǥ�Ⱑ��
	//engine->Run();
	//delete engine;
	//engine = nullptr;

	//Actor* c = new Player();
	//Actor* c = new Actor();
	//Actor* c = new Character();
	//Actor* c = new Monster();
	//c->Render();

	//vector(Actor*) actors;
	//actors.push_back(new Player());
	//actors.push_back(new Player());
	//actors.push_back(new Player());
	//actors.push_back(new Player());
	
	Engine* engine = new Engine();
	//0 : map
	engine->actors.push_back(new Map());
	//1 : goal
	engine->actors.push_back(new Goal());
	//2 : player
	engine->actors.push_back(new Player());
	
	//other monsters
	engine->actors.push_back(new Goblin());
	engine->actors.push_back(new Slime());
	engine->actors.push_back(new WildPig());

	engine->Run();
	delete engine;
	engine = nullptr;

//----------------------------------------------------------------------------------
	return 0;
}

void STLTest()
{
	//--------------------------------------------------------------------
	vector<int> v;
	list<int> l;
	int a[6];

	for (int i = 0; i < 5; ++i)
	{
		v.push_back(i);
		l.push_back(i);
		a[i] = i;
	}

	//v.erase(v[3]);

	//�ݺ���
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
	//List - ���ڸ� �̰Ž����
	//for (list<int>::iterator iter = l.begin(); iter != l.end(); ++iter)
	/*for (auto iter = l.begin(); iter != l.end(); ++iter)
	{
		cout << *iter << endl;
	}*/

	//�ε��� ��� ���Ұ��, ���ڰ��X
	for (auto iter : a)
	{
		cout << iter << endl;
	}

}