#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

#define ARROW 224
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,2,0,1,0,0,0,0,2},
	{2,0,2,0,1,0,0,0,0,2},
	{2,0,2,0,0,2,0,0,0,2},
	{2,0,2,0,0,0,2,0,0,2},
	{2,0,2,0,0,0,0,2,0,2},
	{2,0,1,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,4,2},
	{1,1,1,1,1,1,1,1,1,1},
};



char MapTile[10] = { ' ', '-', '|','P','G','M' };

bool bIsRunning = true;
bool Good = false;

int PlayerX = 0;
int PlayerY = 0;
int KeyCode = 0;
int MonsterX = 0;
int MonsterY = 0;
int Random = 0;

void PlayerInit()
{
	PlayerX = 1;
	PlayerY = 1;

	//���ӽ��۽� ������ ��ġ�� ���ͻ��� �� �̵�
	//���� �ش� ������ ����
	MonsterX = 5;
	MonsterY = 5;

}

void End()
{
	bIsRunning = false;
}

void PlayerMove()
{
	int OldPlayerX = PlayerX;
	int OldPlayerY = PlayerY;
	int OldMonsterX = MonsterX;
	int OldMonsterY = MonsterY;

	if (KeyCode == ARROW) {
		Random = (rand() % 5) + 1;
		if (Random == 1)
		{	
			MonsterY--;
		}
		else if(Random ==2)
		{
			MonsterY++;
		}
		else if (Random == 3)
		{
			MonsterX--;
		}
		else if (Random == 4)
		{
			MonsterX++;
		}

 
	}
	//72 80 75 77
	if (KeyCode == UP)
	{
		PlayerY--;
	}
	else if (KeyCode == DOWN)
	{
		PlayerY++;
	}
	else if (KeyCode == LEFT)
	{
		PlayerX--;
	}
	else if (KeyCode == RIGHT)
	{
		PlayerX++;
	}
	//������ ������ 1�̸� ���� ����!
	int NewPlayerX = PlayerX;
	int NewPlayerY = PlayerY;
	int NewMonsterX = MonsterX;
	int NewMonsterY = MonsterY;


	if (map[NewMonsterY][NewMonsterX] == 1 || map[NewMonsterY][NewMonsterX] == 2 || map[NewMonsterY][NewMonsterX] == 4)//�ƴϸ� map[NewPlayerY][NewPlayerX] == 0�� ��쿡�� �̵�
	{
		MonsterX = OldMonsterX;
		MonsterY = OldMonsterY;
	}
	else
	{
		map[OldMonsterY][OldMonsterX] = 0;
	}
	map[MonsterY][MonsterX] = 5;

	if (map[NewPlayerY][NewPlayerX] == 1 || map[NewPlayerY][NewPlayerX] == 2)//�ƴϸ� map[NewPlayerY][NewPlayerX] == 0�� ��쿡�� �̵�
	{
		PlayerX = OldPlayerX;
		PlayerY = OldPlayerY;
	}
	else
	{
		//���ǿ� ����������� �̵�����
		//������ġ ����
		map[OldPlayerY][OldPlayerX] = 0;
		// �÷��̾��� ��ġ (3:�÷��̾�׸�)	
	}
	
	if (map[PlayerY][PlayerX] == 4)
	{
		Good = true;
		End();
	}
	else if (map[PlayerY][PlayerX] == 5)
	{
		End();
	}

	map[PlayerY][PlayerX] = 3;

	}

//�Է�
void Input()
{
	KeyCode = getch();

}

//�׼�
void Process()
{
	if (KeyCode == 'q')
	{
		bIsRunning = false;
	}

	PlayerMove();
}

void Render()
{
	system("cls");
	printf("\n%d\n", KeyCode);
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			printf("%c", MapTile[map[y][x]]);
		}
		//�ٹٲ�
		printf("\n");
	}

}


int main()
{
	PlayerInit();
	srand(time(nullptr));
	while (bIsRunning)
	{
		Input();
		Process();
		//���Ƿ� �����̴� ���� ����
		Render();

	}
	system("cls");
	if (Good)
	{
		printf("\n#############�� ��##############\n");
	}
	else
	{
		printf("\n#############�� ��##############\n");
	}
	
	return 0;
}