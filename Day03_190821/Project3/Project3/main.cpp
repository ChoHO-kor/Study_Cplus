#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define
#define N 10000
#define MAXNUMBER 10000

int ChoiceNumber(int Max)
{
	return rand() % Max + 1;
}
//Space vs Time
int main()
{
	//rand() : �������� �ٲ����ʴ� ù �ʱⰪ�� ������
	//printf("%d\n", rand());
	//printf("%d\n", rand());
//----------------------------------------------------------
	//rand: ������ �� ���� �ϳ��� ������ �����Ѵ�.
	//������ ������ 0~RAND_MAX �����̸� RAND_MAX�� 0x7fff�̹Ƿ�, �ᱹ ������ ������ 0~32767 �̴�.
	//srand : rand �Լ������� �����Ǵ� ������ �����ѵ�
	//srand�� �̿�, �ð� ���� �Ű��� �ʱ�ȭ�ϸ� �������� �ʰ� �ұ�Ģ���� ������ �����ȴ�.
	/*srand(time(nullptr));

	//nullptr�� C++11�� �߰��� ���ο� keyword �̸�, null pointer�� �ǹ��մϴ�.
	//�̰��� �߿��� ������ ������ ����ô� NULL�̶�� ���� ���ǰ�
	//0L �̱� ������ �»������� ȥ�������� �� �ۿ� ������ ��� issue�� �ذ��� �� �ֱ� �����Դϴ�.

	printf("%d\n", rand() % 50 + 1);
	printf("%d\n", rand() % 50 + 1);
	printf("%d\n", rand() % 50 + 1);*/
//-----------------------------------------------------------
	//1. ���� �� ���� ��ġ�� �ʵ��� ����
	/*int Numbers[5];
	srand(time(nullptr));*/

//-----------------------------------------------------------
	//���� �� ���� ��ġ�� �ʵ��� ���� 1
	/*for (int i = 0; i < 3; i++)
	{
		Numbers[i] = rand() % 50;
		if (Numbers[i]);
	}*/
//-----------------------------------------------------------
	//���� �� ���� ��ġ�� �ʵ��� ���� 2(��)
	//int Numbers[3];
	//srand(time(nullptr));

	////�ڷ翡 �� �����
	//int RandomNumbers[50];
	//for (int i = 0; i < 50; i++)
	//{
	//	RandomNumbers[i] = i + 1;
	//}

	////�� ����
	//for (int i = 0; i < 100; i++)
	//{
	//	int first = rand() % 50;
	//	int second = rand() % 50;
	//	int Temp = RandomNumbers[first];
	//	RandomNumbers[first] = RandomNumbers[second];
	//	RandomNumbers[second] = Temp;

	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	Numbers[i] = RandomNumbers[i];
	//	printf("����%d : %d\n", i + 1, Numbers[i]);
	//}
//-----------------------------------------------------------
	//���� �� ���� ��ġ�� �ʵ��� ���� 3
	//ù ���� ����
	//Numbers[1] = rand() % 50 + 1;
	////���ڸ� 3�� ��������
	//for (int i = 1; i <= 3; i++)
	//{
	//	//�� ���ڸ� �̾Ƽ�
	//	int NewNumber = rand() % 50 + 1;
	//	//������ ���� �����ڵ�� ��, ������ �ش�NewNumber�� �ٽ� �̰� ���ϱ�
	//	for (int j = 1; j < i; j++)
	//	{
	//		bool dd = Numbers[i] == NewNumber;
	//		while (dd) {
	//			for (int j = 1; j < i; j++)
	//			{
	//				int NewNumber = rand() % 50 + 1;
	//			}
	//		}
	//		Numbers[j] = NewNumber;
	//	}

	//	printf("����%d : %d\n", i , Numbers[i]);
	//}
//-----------------------------------------------------------
	//���� �� ���� ��ġ�� �ʵ��� ���� 3(��)
	//ù ���� ����
	//Numbers[0] = rand() % 50 + 1;
	////���ڸ� 3�� ��������
	//for (int i = 0; i < 5; i++)
	//{
	//	//�� ���ڸ� �̾Ƽ�
	//	int j = 0;
	//	while (true)//break������ ���
	//	{	
	//		bool bCan = true;
	//		int NewNumber = rand() % 50 + 1;
	//		for (j = 0; j < i; j++)
	//		{
	//			if (Numbers[j] == NewNumber) {
	//				bCan = false;
	//			}
	//		}
	//		if (bCan)
	//		{
	//			Numbers[j] = NewNumber;
	//			break;
	//		}

	//	}
	//	printf("����%d : %d\n", i+1 , Numbers[i]);
	//}
//-----------------------------------------------------------
	//2.
	int Numbers[N];
	srand(time(nullptr));

	//�ڷ翡 �� �����
	int RandomNumbers[MAXNUMBER];
	for (int i = 0; i < MAXNUMBER; i++)
	{
		RandomNumbers[i] = i + 1;
	}
	//�� ����
	for (int i = 0; i < MAXNUMBER; i++)
	{
		int first = rand() % 50;
		int second = rand() % 50;
		int Temp = RandomNumbers[first];
		RandomNumbers[first] = RandomNumbers[second];
		RandomNumbers[second] = Temp;

	}

	for (int i = 0; i < N; i++)
	{
		Numbers[i] = RandomNumbers[i];
		printf("����%d : %d\n", i + 1, Numbers[i]);
	}
//-----------------------------------------------------------
//-----------------------------------------------------------

//-----------------------------------------------------------
	return 0;
}