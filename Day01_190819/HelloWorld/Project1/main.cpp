/*
//#포함하다 <이걸(~.헤더)>  회색글씨# : 전처리기(미리 처리함) <경로>  stdio = std input output
#include <stdio.h>

//entry point
int main()
{

	char c[12] = "Hello Wordl";

	printf("123\n");
	printf(c);
	printf("\n%s\n",c);
}*/
#include <stdio.h>

int main()
{
	// 인자 확인 : Ctrl + Shift + Spacebar
	//printf = print Format
	printf("1. 3+4 = 첫번째인자%d,두번째인자%d", 3 + 4,4+5);
	//로컨변수는 RAM에서 처리함
	int _X=3;
	//int 1X = 3; - 변수명 앞에 숫자가 오면 안됨
	int Y=4;
	printf("\n2. 3+4 = %d", _X+Y);
	
	int SumOfInteger = _X + Y;
	printf("\n2. 3+4 = %d+%d = %d", _X,Y, SumOfInteger);

	return 0;
}