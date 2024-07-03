#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////C语言是一种结构化的程序设计语言，有三种结构：
//1.顺序结构          2.选择结构           3.循环结构
//C语句可分为五类：
//1.表达式语句          2.函数调用语句            3.控制语句               4.复合语句            5.空语句

//现在先学控制语句
//控制语句 用于控制程序的执行流程，以实现程序的各种结构方式，他们由特点的语句定义符组成，共有9种控制语句：
//可分为以下三大类
//1. 条件判断语句 也叫 分支语句 ： if语句， switch语句
//2. 循环执行语句 ： while语句， do while语句， for语句
//3. 转向语句 ： go to语句， break语句， return语句， continue语句

int main()
{
	//单分支
	//int x = 10;
	//if (x == 30)
	//	printf("haha\n");//判断为假，不打印
	//if (x == 10)
	//	printf("ha\n");//判断为真，打印
	//if (x = 3)//x原本初始化为10，现在被赋值为3，3是非0，所以为真，可以打印，不推荐这么写
	//	printf("hh\n");
	//if (x = 0)
	//	printf("ww\n");//x被赋值为0，0为假，不打印
	////当if(表达式)表达式为真，即非0，后续程序才会运行

	//双分支
	//int a = 10;
	//if (a < 18)
	//	printf("kid\n");
	//	printf("study harder\n");//这样写不行，if或else后面只能跟一条语句，如果有加多条语句则需要用代码块{}把语句包括在内
	//else
	//	printf("adult\n");

	//int a = 10;
	//if (a < 18)
	//{
	//	printf("kid\n");
	//	printf("study harder\n");
	//}
	//else
	//	printf("adult\n");

	多分支
	int a = 10;
	scanf("%d", &a);
	if (a < 13)
		printf("kid\n");
	else if (a >= 13 && a < 18)
		printf("teens\n");
	else if (a >= 18 && a < 25)
		printf("youth\n");
	else if (a >= 25 && a < 40)
		printf("adult\n");
	else if (a >= 40 && a < 60)
		printf("middle-aged\n");
	else
		printf("elder\n");
	
	// 悬空else
	//int a = 10;
	//int b = 20;
	//if (a == 1)//调试结果为不打印，因为a不等于1，所以接下来的程序都不会运行
	//	if (b == 20)
	//		printf("hha\n");
	//	else//else会和最靠近的if对应，而不是和与其对齐的if对应
	//		printf("hhe\n");

}