/*
//#�����ϴ� <�̰�(~.���)>  ȸ���۾�# : ��ó����(�̸� ó����) <���>  stdio = std input output
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
	// ���� Ȯ�� : Ctrl + Shift + Spacebar
	//printf = print Format
	printf("1. 3+4 = ù��°����%d,�ι�°����%d", 3 + 4,4+5);
	//���������� RAM���� ó����
	int _X=3;
	//int 1X = 3; - ������ �տ� ���ڰ� ���� �ȵ�
	int Y=4;
	printf("\n2. 3+4 = %d", _X+Y);
	
	int SumOfInteger = _X + Y;
	printf("\n2. 3+4 = %d+%d = %d", _X,Y, SumOfInteger);

	return 0;
}