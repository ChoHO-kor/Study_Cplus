#include <stdio.h>
#include "util.h"

//1.
//#include<stdio.h>
//entry point
//int main()
//{}
//2.int, char, unsigned char, float, long long, double (핵심 : int, char, float)
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
	printf("안뇽안뇽\n");
	//문자형에 정수 작성하면 아스키로 나옴
	char X = 65;
	printf("X(c) : %c\n", X);
	printf("X(d) : %d\n", X);

	unsigned char x = 255;
	unsigned char y = 255;
	int sum = x + y;
	printf("%d", sum);
	unsigned char sum2 = x+y;
	//char은 254를 넘길수 없음 - 2의8승(0~254,255개)이 한계
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
	//10개의 공간 - 9개면 안쓴공간은 0
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
	/*3 for문
	
	//세로주기
	for (int q = 1; q < 6; q++)
	{
		//가로주기
		for (int j = 0; j < q; j++)
		{
			//가로주기 작성
			printf("*");
		}
		//세로주기 줄바꿈
		printf("\n");
		}
	*/
	/*
	//입력 : scanf,get(숫자)
	int count;
	//scanf("%d", count); - 에러(&써줘야함)
	scanf("%d", &count);

	//세로주기
	for (int i = 0; i < count; i++)
	{
		//가로주기
		for (int j = 0; j < i+1; j++)
		{
			//가로주기 작성
			printf("*");
		}
		//세로주기 줄바꿈
		printf("\n");
	}
	*/
//------------------------------------------------------
//거꾸로
	/*
	//입력 : scanf,get(숫자)
	//가능하면 초기값을 사용해야할 경우가 존재한다면 작성하는 습관을 들이자(예외처리 초기값0이 발동안될수있기때문)
	int count=0;
	//scanf("%d", count); - 에러(&써줘야함)
	printf("값입력 : ");
	scanf("%d", &count);

	//세로주기
	for (int i = 0;i < count; i++)
	{
		//가로주기 - 세로주기1에서 count, 2에서 count-1
		for (int j = 0; j < count-i; j++)
		{
			//가로주기 작성
			printf("*");
		}
		//세로주기 줄바꿈
		printf("\n");
	}
	*/
//------------------------------------------------------
//입력받은 자연수를 n이라 할때 1~n 까지의 합
	//int n=0;
	//int rn=0;
	////scanf("%d", count); - 에러(&써줘야함)
	//printf("n값 입력 : ");
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
	////+,-,*,%(나머지구하기)
	//CheckOdd(n);
//------------------------------------------------------
//6. 입력된 숫자(자연수)가 홀수 이면 홀수의 합 구하기
// 짝수이면 짝수의 합 구하기
	int n = 0; \
	printf("입력된 숫자(자연수)가 홀수 이면 홀수의 합 구하기 짝수이면 짝수의 합 구하기 \n입력 : ");
	scanf("%d",&n);
	printf("Sum : %d", CalculateOddSum(n));
//------------------------------------------------------
	//0 : 클리어
	return 0;
}
