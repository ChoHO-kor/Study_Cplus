// <> : c언어 정규문법 , "" : 커스텀 문법
#include "util.h"
#include <stdio.h>


//int, char, float, void,  bool
void CheckOdd(int number)
{
	//홀수인지 짝수인지 판별 - 2나눠서 남는값 확인
	//*나눌때는 %d가아닌 %f를 써줘야하고 쓰고나서도 그냥 3.0같은 수가아닌 3.0f와 같이 사용해야 한다.
	bool check = number % 2 == 1;

	if (check)
	{
		printf("홀수\n");
	}
	else
	{
		printf("짝수\n");
	}
}

int CalculateOddSum(int number)
{
//6.
//입력된 숫자(자연수)가 홀수 이면 1부터 해당 홀수까지의 합 구하기
// 짝수이면 2부터 해당짝수까지의 합 구하기
	int sum = 0;

	//1.
	//bool check = number % 2 == 1;
	//if (check)
	//{
	//	//홀수
	//		for (int i = 1; i <= number; i=i+2)
	//		{
	//			sum = sum + i;
	//		}
	//}
	//else
	//{
	//	//짝수
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
	//	//홀수
	//	i = 1;
	//}
	//else {
	//	//짝수
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