#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int a = 0;//初始化

	//while (a < 4)//判断
	//{
	//	printf("%d\n", a);
	//	a++;//调整
	//}
	//这是while循环的情况，如果语句过长，各个部分可能会离很远，到时检查/修复代码时会较麻烦


	////for循环
	//for(表达式1; 表达式2; 表达式3)
	//	循环语句;
	//表达式1：初始化
	//表达式2；判断
	//表达式3；调整
	//for循环中这些部分都放在一起，所以检查时会方便许多，所以我们较常使用的是for循环


	//////for循环里的break
	//int b = 0;
	//for (b = 1; b <= 10; b++)
	//{
	//	if (b == 5)
	//		break;
	//	printf("%d ", b);//最后打印出1 2 3 4 
	//}//和while循环一样，终止循环，
	

	//int a = 0;
	//while (a <= 10)
	//{
	//	if (a == 5)
	//		continue;
	//	printf("%d ", a);
	//	a++;
	//}//while循环会进入死循环，因为continue跳过后面的代码，而调整a++的部分也在这里面，所以无法调整


	//////for循环里的continue
	//int c = 0;
	//for (c = 1; c <= 10; c++)
	//{
	//	if (c == 5)
	//		continue;
	//	printf("%d ", c);//最后打印出1 2 3 4 6 7 8 9 10
	//	//c = 12;//尽量不要在for循环里修改变量，防止for循环失控
	//}//跟while循环不一样，continue跳过了后面的代码，但调整c++的部分在for()里面，不会被跳过，不会进入死循环



	//////省略for循环的后果
	//int a = 0;
	////for (;;)//初始化，判断，调整都被省略了
	////{
	////	printf("haha\n");
	////}//循环会永久持续

	////for (a = 1;; a++)
	////{
	////	printf("haha\n");
	////}//省略判断部分，也是永久持续循环

	//int b = 0;
	//for (a = 0; a < 3; a++)
	//{
	//	for (b = 0; b < 3; b++)
	//	{
	//		printf("haha\n");
	//	}
	//}//这样写最后会打印出9次haha

	//int b = 0;
	//for (; a < 10; a++)
	//{
	//	for (; b < 10; b++)
	//	{
	//		printf("haha\n");
	//	}
	//}//这样写则只会打印出3次haha,因为嵌套的for循环初始化的部分被省略了，第一次从a循环进入到b循环后，b循环直到b=3，然后进入第二次a循环，之后再进入b循环时，b依然等于3，
	/////因为b没有被重新初始化

	////结论，尽量不要省略for循环



	//////for循环里可以有由个变量来控制
	//int a = 0;
	//int b = 0;
	//for (a = 0, b = 0; a < 2 && b < 4; ++a, b++)
	//	printf("haha\n");



	////do while循环
	int a = 0;
	do
	{
		printf("%d ", a);
		a++;
	} while (a <= 10);
	return 0;
}