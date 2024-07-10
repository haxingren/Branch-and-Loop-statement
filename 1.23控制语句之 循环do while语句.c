#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	////do while循环
	int a = 0;
	do
	{
		printf("%d ", a);
		a++;
	} while (a <= 10);
	//因为是先运行，后判断，所以do while 循环至少要进行一次
	//有局限性，所以较少使用

}
