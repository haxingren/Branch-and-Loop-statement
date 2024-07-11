#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int a = 0;
	//int b = 2;
	//int ret = 1;
	//int sum = 0;
	//for (b = 1; b <= 10; b++)
	//{
	//	for (a = 1, ret = 1; a <= b; a++)
	//	{
	//		ret = ret * a;
	//	}
	//	sum = sum + ret;
	//}
	//printf("%d\n", sum);//这个太复杂

	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d\n", sum);//这个就简洁许多
	return 0;
}