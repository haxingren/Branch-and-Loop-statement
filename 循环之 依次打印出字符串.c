#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char arr1[] = "Welcome to Beijing!!!!";
	char arr2[] = "                      ";

	int left = 0;
	int right = strlen(arr1) - 1;//int right = sizeof(arr1)/sizeofarr1[0]-2//两种写法都可以

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//Sleep是个库函数，可以延迟，需要引用头文件#include <windows.h>
		system("cls");//system是个库函数，可以执行系统命令，需要引用头文件#include <stdlib.h>，cls是个系统命令，用于清理屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}