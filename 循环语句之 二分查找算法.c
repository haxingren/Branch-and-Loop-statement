#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//折半查找，也叫二分查找，用于高效地找出有序数组中的指定数据
//原理的一次次筛选一半的数组，从而仅靠一次查找就可以排除一半的数据
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//这是一组有序数组
	int k = 71;//这是要从有序数组里查找的数据

	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("found, the subscript is %d\n", mid);
			break;

		}
	}

	if (left > right)
	{
		printf("unfound\n");
	}
	
	return 0;
}