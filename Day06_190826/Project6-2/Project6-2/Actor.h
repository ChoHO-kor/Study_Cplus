#pragma once
class Actor
{
public:
	Actor();
	~Actor();

//�����Ұ� ��ӵ��Ұ�private
//������? protected
//protected:
	virtual void Input();
	virtual	void Tick(int KeyCode, class Map* map);
	virtual void Render();
};
