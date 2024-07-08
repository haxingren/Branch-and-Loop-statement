#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int larger1 = a > b ? a : b;
//	int larger2 = c > d ? c : d;
//	int max = larger1 > larger2 ? larger1 : larger2;
//	printf("%d\n", max);
//	return 0;
//}

int main()
{
	int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	//先假设数组里第一个数字是最大值
	int max = arr[0];
	i = 1;
	while (i < 4)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		i++;
	}
	printf("%d\n", max);
	return 0;
}