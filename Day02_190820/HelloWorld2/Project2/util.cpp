// <> : c��� ���Թ��� , "" : Ŀ���� ����
#include "util.h"
#include <stdio.h>


//int, char, float, void,  bool
void CheckOdd(int number)
{
	//Ȧ������ ¦������ �Ǻ� - 2������ ���°� Ȯ��
	//*�������� %d���ƴ� %f�� ������ϰ� �������� �׳� 3.0���� �����ƴ� 3.0f�� ���� ����ؾ� �Ѵ�.
	bool check = number % 2 == 1;

	if (check)
	{
		printf("Ȧ��\n");
	}
	else
	{
		printf("¦��\n");
	}
}

int CalculateOddSum(int number)
{
//6.
//�Էµ� ����(�ڿ���)�� Ȧ�� �̸� 1���� �ش� Ȧ�������� �� ���ϱ�
// ¦���̸� 2���� �ش�¦�������� �� ���ϱ�
	int sum = 0;

	//1.
	//bool check = number % 2 == 1;
	//if (check)
	//{
	//	//Ȧ��
	//		for (int i = 1; i <= number; i=i+2)
	//		{
	//			sum = sum + i;
	//		}
	//}
	//else
	//{
	//	//¦��
	//	for (int i = 2; i <= number; i=i + 2)
	//	{
	//		sum = sum + i;
	//	}
	//}
//-------------------------------------------------------------------
	//2.
	//int i;
	//bool check = number % 2 == 1;

	//if (check){ 
	//	//Ȧ��
	//	i = 1;
	//}
	//else {
	//	//¦��
	//	i = 2;
	//}

	//	//for (i; i <= number; i = i + 2)
	//	for (i; i <= number; i += 2)
	//	{
	//		//sum = sum + i;
	//		sum += i;
	//	}
//---------------------------------------------------------------
	//3.
	//for (i; i <= number; i = i + 2)
	for (int i= number % 2; i <= number; i += 2)
	{
		//sum = sum + i;
		sum += i;
		printf("now i : %d\n", i);
	}
//---------------------------------------------------------------
	return sum;
}