#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//输出ASCII码79 88 94 93 60 08对应的字符常量
	printf("%c\n", 78);
	int arr[] = { 79, 88, 94, 60, 77 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i <= sz)
	{
		printf("%c ", arr[i]);
		i++;
	}
	return 0;
}