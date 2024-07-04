#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

	////while 循环，跟if有些相似，
	//while(表达式)//while会判断表达式为真或为假，为真就会进入循环，为假则会跳出循环
	//	循环语句;
	//int a = 1;
	//while (a <= 10)
	//{
	//	printf("%d ", a);
	//	a++;
	//}

	////while循环里的break,
	////用来永久终止循环
	//int a = 1;
	//while (a <= 10)
	//{
	//	if (6 == a)
	//		break;
	//	printf("%d ", a);
	//	a++;
	//}

	////while循环里的continue
	////用来跳过其后面的语句，直接回到判断部分，开始新一轮循环的判断
	//int a = 1;
	//while (a <= 10)
	//{
	//	if (6 == a)//当a循环到6，if判定为真，执行continue
	//		continue;//就会跳过后续的输出和加1，回到a<=10的判断，由于没有加1了，a一直是6，所以会进入死循环
	//	printf("%d ", a);
	//	a++;
	//}

	int a = 1;
	while (a <= 10)
	{
		a++;//当a加到6
		if (6 == a)//if判定为真，跳过输出回到判断，再次循环，这时a以及变7了，所以if判定为假，不执行continue，后续循环继续
			continue;
		printf("%d ", a);
	}//最终输出为1 2 3 4 5 7 8 9 10
	//由此可知，continue可用于跳过循环中某些特定的不想要的数值

	return 0;
}