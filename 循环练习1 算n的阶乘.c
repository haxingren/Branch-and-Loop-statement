#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	////我的方法
	//int n = 0;
	//int sum = 1;

	//scanf("%d", &n);
	//for (; n != 0; n--)//这里表达式1不知道该怎么初始化
	//{
	//	sum = sum * n;
	//}
	//printf("%d\n", sum);

	//标准方法
	int n = 0;
	int i = 0;
	int sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	return 0;
}