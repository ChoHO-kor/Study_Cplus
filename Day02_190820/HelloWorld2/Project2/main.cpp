#include <stdio.h>
#include "util.h"

//1.
//#include<stdio.h>
//entry point
//int main()
//{}
//2.int, char, unsigned char, float, long long, double (�ٽ� : int, char, float)
//3. for (i=0;i<10;i++)
//{
//}
//4. int function()
//{
//}
//int CalculateSum(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	return sum;
//}

int main()
{
//------------------------------------------------------
	/*1
	printf("�ȴ��ȴ�\n");
	//�������� ���� �ۼ��ϸ� �ƽ�Ű�� ����
	char X = 65;
	printf("X(c) : %c\n", X);
	printf("X(d) : %d\n", X);

	unsigned char x = 255;
	unsigned char y = 255;
	int sum = x + y;
	printf("%d", sum);
	unsigned char sum2 = x+y;
	//char�� 254�� �ѱ�� ���� - 2��8��(0~254,255��)�� �Ѱ�
	printf("\n%d", sum2);*/

//------------------------------------------------------
	/*2
	int i = 0;
	int kor[10];
	int math[10];
	int sum2[10];

	for (i=0;i<10;i++)
	{ 
	kor[i] = 100;
	math[i] = 0;
	sum2[i] = kor[i] + math[i];
	printf("%d\n", sum2[i]);
	}
	*/
//------------------------------------------------------
	//10���� ���� - 9���� �Ⱦ������� 0
	/*int kor[10] = { 100,20,30,40,50,60,70,80,90 };
	int math[10] = { 100,20,30,40,50,60,70,80,90 };
	int sum3[10];

	for (int k = 0; k < 10; k++)
	{
		sum3[k] = kor[k] + math[k];
		printf("%d\n", sum3[k]);
	}
	*/
//------------------------------------------------------
	/*3 for��
	
	//�����ֱ�
	for (int q = 1; q < 6; q++)
	{
		//�����ֱ�
		for (int j = 0; j < q; j++)
		{
			//�����ֱ� �ۼ�
			printf("*");
		}
		//�����ֱ� �ٹٲ�
		printf("\n");
		}
	*/
	/*
	//�Է� : scanf,get(����)
	int count;
	//scanf("%d", count); - ����(&�������)
	scanf("%d", &count);

	//�����ֱ�
	for (int i = 0; i < count; i++)
	{
		//�����ֱ�
		for (int j = 0; j < i+1; j++)
		{
			//�����ֱ� �ۼ�
			printf("*");
		}
		//�����ֱ� �ٹٲ�
		printf("\n");
	}
	*/
//------------------------------------------------------
//�Ųٷ�
	/*
	//�Է� : scanf,get(����)
	//�����ϸ� �ʱⰪ�� ����ؾ��� ��찡 �����Ѵٸ� �ۼ��ϴ� ������ ������(����ó�� �ʱⰪ0�� �ߵ��ȵɼ��ֱ⶧��)
	int count=0;
	//scanf("%d", count); - ����(&�������)
	printf("���Է� : ");
	scanf("%d", &count);

	//�����ֱ�
	for (int i = 0;i < count; i++)
	{
		//�����ֱ� - �����ֱ�1���� count, 2���� count-1
		for (int j = 0; j < count-i; j++)
		{
			//�����ֱ� �ۼ�
			printf("*");
		}
		//�����ֱ� �ٹٲ�
		printf("\n");
	}
	*/
//------------------------------------------------------
//�Է¹��� �ڿ����� n�̶� �Ҷ� 1~n ������ ��
	//int n=0;
	//int rn=0;
	////scanf("%d", count); - ����(&�������)
	//printf("n�� �Է� : ");
	//scanf("%d", &n);

	//for (int i = 1; i <= n; i++)
	//{
	//	rn = rn + i;
	//}
	//printf("n : %d", rn);
//------------------------------------------------------
	/*4
	int n = 0;
	scanf("%d", &n);

	printf("sum : %d\n", CalculateOddSum(n));

	int Rsum = CalculateOddSum(n);
	printf("Rsum : %d", Rsum);*/
//------------------------------------------------------
	//5.
	//int n = 0;

	//scanf("%d",&n);
	////+,-,*,%(���������ϱ�)
	//CheckOdd(n);
//------------------------------------------------------
//6. �Էµ� ����(�ڿ���)�� Ȧ�� �̸� Ȧ���� �� ���ϱ�
// ¦���̸� ¦���� �� ���ϱ�
	int n = 0; \
	printf("�Էµ� ����(�ڿ���)�� Ȧ�� �̸� Ȧ���� �� ���ϱ� ¦���̸� ¦���� �� ���ϱ� \n�Է� : ");
	scanf("%d",&n);
	printf("Sum : %d", CalculateOddSum(n));
//------------------------------------------------------
	//0 : Ŭ����
	return 0;
}
