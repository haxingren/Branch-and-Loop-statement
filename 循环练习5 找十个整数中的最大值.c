#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int arr[10] = { 1,3,24,23,41,52,3,16,8,5 };
	int n = 0;
	int max = 0;
	for (n = 0, max = arr[0]; n <= 10; n++)
	{
		if (max < arr[n])
			max = arr[n];
	}
	printf("%d\n", max);
	return 0;
}