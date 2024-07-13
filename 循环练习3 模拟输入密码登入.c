#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char password[20] = {"qwert"};
	char input[20] = {0};
	int i = 0;

	
	for(i=1; i<=3; i++)
	{
		printf("please enter password:>");
		scanf("%s", input);//数组不需要取地址
		if (strcmp(password, input) == 0)//比较两个字符串是否相等，不能使用==，而是使用库函数strcmp，需要引用头文件#include<string.h>，如果返回值==0即相等
		{
			printf("log in successful\n");
			break;
		}
	
		else
			printf("wrong password, try again(%d)\n", i);

	}
	
	if (i == 4)
		printf("incorrect password enter 3 times, system locked\n");

	return 0;
}