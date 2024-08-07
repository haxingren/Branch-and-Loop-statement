#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


int main()
{
	int num = 0;
	for (num = 10000; num <= 99999; num++)
	{
		int i = 0;
		int sum = 0;
		for (i = 1; i <= 4; i++)
		{
			int k = (int)pow(10, i);
			sum =+ (num / k) * (num % k);
		}
		if (sum == num)
			printf("%d ", sum);
	}
	return 0;
}