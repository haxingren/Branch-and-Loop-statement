#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	int ret = 0;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= x; y++)
		{
			int ret = x * y;
			//printf("%d * %d = %2d ", x, y, ret);//右对齐
			printf("%d * %d = %-2d ", x, y, ret);//左对齐
			//if (x == y)
			//	break;
		}
		printf("\n");
	}
	return 0;
}