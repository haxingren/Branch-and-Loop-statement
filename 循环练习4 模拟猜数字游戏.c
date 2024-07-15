#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>//rand和srand函数需要的头文件

#include <time.h>//time函数需要的头文件
void menu()
{
	printf("********************\n");
	printf("****1.enter game****\n");
	printf("****0.exit  game****\n");
	printf("********************\n");
}

void game()
{
	//rand()是一个库函数，用来生成随机数，生成的随机数范围在0~32767(RAND_MAX)，须引用#include <stdlib.h>
	//然而这样生成的随机数每次运行程序时都一样，所以使用rand()前需要使用函数srand()
	int ret = (rand())% 100 + 1;
	//因为生成的随机数要求在1~100之间，所以随机数最后取模100，即取除以100的余数+1
	//因为任何数字模100，其范围都会在0~99之间
	int input2 = 0;
	//int i = 0;
	//do
	//{
	//	printf("guess a number:>");
	//	scanf("%d", &input2);

	//	if (input2 > ret)
	//	{
	//		i++;
	//		printf("too large(%d)\n", i);
	//	}
	//	else if (input2 < ret)
	//	{
	//		i++;
	//		printf("too small(%d)\n", i);
	//	}
	//} while (input2 != ret);
	//if (input2 == ret)
	//	printf("*******victory!!!*******\n\n");
	int i = 4;
	for (i = 5; i != 0; i--)
	{
		printf("guess a number, you have %d chance:>", i);
		scanf("%d", &input2);
		
		if (input2 > ret)
		{
			printf("too large\n");
		}
		else if (input2 < ret)
		{
			printf("too small\n");
		}
		else
		{
			printf("*******victory!!!*******\n\n");
			break;
		}

	}
	if (input2 != ret)
		printf("*******you lose*********\n\n");

}

int main()
{
	//生成时间戳，需要用到time函数，time(time_t * timer)，不一定要*timer，只要是指针变量就行
	//time_t其实是个类型，就好像int*a里的int，time_t其实是个整型是long long
	//其返回值是整型
	//为了生成随机数，srand里需要给他一个随机数，这个随机数，我们可以用时间戳
	//srand()的作用是设置一个随机的起始点,()里必须是unsigned int
	//所以time函数的返回值我们需要强制转换
	//这个随机节点应该放进主函数，因为随机节点只需要程序运行时生成一次就行了，不需要每个循环都生成一次
	srand((unsigned int)time(NULL));
	//NULL就是空指针
	//就好像我们创建并初始化变量时给变量赋值0一样
	//int a = 0;
	//int *b = NULL;//NULL就是0

	int input = 0;

	do
	{
		menu();
		printf("continue game?(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				game();
				break;
			}
			case 0:
			{
				printf("exit game\n");
				break;
			}
			default:
			{
				printf("error, please enter again\n");
				break;
			}
		}
	}while (input);//当input输入非零，为真，继续循环，当input输入0，为假，跳出循环


	return 0;

}