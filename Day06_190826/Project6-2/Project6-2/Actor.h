#pragma once
class Actor
{
public:
	Actor();
	~Actor();

//공유불가 상속도불가private
//상속허용? protected
//protected:
	virtual void Input();
	virtual	void Tick(int KeyCode, class Map* map);
	virtual void Render();
};

