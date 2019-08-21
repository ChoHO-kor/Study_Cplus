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
	//rand() : 랜덤으로 바뀌지않는 첫 초기값을 정해줌
	//printf("%d\n", rand());
	//printf("%d\n", rand());
//----------------------------------------------------------
	//rand: 예측할 수 없는 하나의 난수를 생성한다.
	//난수의 범위는 0~RAND_MAX 까지이며 RAND_MAX는 0x7fff이므로, 결국 난수의 범위는 0~32767 이다.
	//srand : rand 함수만으로 생성되는 난수는 일정한데
	//srand를 이용, 시간 값을 매개로 초기화하면 일정하지 않고 불규칙적인 난수가 생성된다.
	/*srand(time(nullptr));

	//nullptr은 C++11에 추가된 새로운 keyword 이며, null pointer를 의미합니다.
	//이것이 중요한 이유는 기존에 써오시던 NULL이라는 것의 정의가
	//0L 이기 때문에 태생적으로 혼돈스러울 수 밖에 없었던 몇가지 issue를 해결할 수 있기 때문입니다.

	printf("%d\n", rand() % 50 + 1);
	printf("%d\n", rand() % 50 + 1);
	printf("%d\n", rand() % 50 + 1);*/
//-----------------------------------------------------------
	//1. 숫자 가 절대 곂치지 않도록 적용
	/*int Numbers[5];
	srand(time(nullptr));*/

//-----------------------------------------------------------
	//숫자 가 절대 곂치지 않도록 적용 1
	/*for (int i = 0; i < 3; i++)
	{
		Numbers[i] = rand() % 50;
		if (Numbers[i]);
	}*/
//-----------------------------------------------------------
	//숫자 가 절대 곂치지 않도록 적용 2(쌤)
	//int Numbers[3];
	//srand(time(nullptr));

	////자루에 공 만들기
	//int RandomNumbers[50];
	//for (int i = 0; i < 50; i++)
	//{
	//	RandomNumbers[i] = i + 1;
	//}

	////공 섞기
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
	//	printf("숫자%d : %d\n", i + 1, Numbers[i]);
	//}
//-----------------------------------------------------------
	//숫자 가 절대 곂치지 않도록 적용 3
	//첫 숫자 적기
	//Numbers[1] = rand() % 50 + 1;
	////숫자를 3번 뽑을거임
	//for (int i = 1; i <= 3; i++)
	//{
	//	//새 숫자를 뽑아서
	//	int NewNumber = rand() % 50 + 1;
	//	//이전에 뽑은 모든숫자들과 비교, 같으면 해당NewNumber를 다시 뽑고 비교하기
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

	//	printf("숫자%d : %d\n", i , Numbers[i]);
	//}
//-----------------------------------------------------------
	//숫자 가 절대 곂치지 않도록 적용 3(쌤)
	//첫 숫자 적기
	//Numbers[0] = rand() % 50 + 1;
	////숫자를 3번 뽑을거임
	//for (int i = 0; i < 5; i++)
	//{
	//	//새 숫자를 뽑아서
	//	int j = 0;
	//	while (true)//break때까지 계속
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
	//	printf("숫자%d : %d\n", i+1 , Numbers[i]);
	//}
//-----------------------------------------------------------
	//2.
	int Numbers[N];
	srand(time(nullptr));

	//자루에 공 만들기
	int RandomNumbers[MAXNUMBER];
	for (int i = 0; i < MAXNUMBER; i++)
	{
		RandomNumbers[i] = i + 1;
	}
	//공 섞기
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
		printf("숫자%d : %d\n", i + 1, Numbers[i]);
	}
//-----------------------------------------------------------
//-----------------------------------------------------------

//-----------------------------------------------------------
	return 0;
}