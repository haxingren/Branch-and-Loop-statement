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

	//int a = 1;
	//while (a <= 10)
	//{
	//	a++;//当a加到6
	//	if (6 == a)//if判定为真，跳过输出回到判断，再次循环，这时a以及变7了，所以if判定为假，不执行continue，后续循环继续
	//		continue;
	//	printf("%d ", a);
	//}//最终输出为1 2 3 4 5 7 8 9 10
	////由此可知，continue可用于跳过循环中某些特定的不想要的数值



	//////getchar循环
	////int ch = getchar();//getchar()就是输入,跟scanf差不多
	////putchar(ch);//输出，跟printf差不多
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//	putchar(ch);
	////这个代码会打印出你输入的内容，通过按ctrl z来结束
	////发现到他输出后会自动换行
	////其实 我们键盘输入后，数据并不会直接传给getchar或者scanf，而是会进入输入缓冲区，然后getchar才从输入缓冲区读取数据
	////而我们输入后打的回车键表示确定，其实还输入了\n进入输入缓冲区，
	////比如我们输入一个hi，代码第一次跑的时候，getchar会先读取hi，经过判断hi不等于EOF，然后putchar输出，接着回到循环，这时，输入缓冲区已经有了上回留下的\n，
	////所以getchar不会等我们再输入东西，而是直接读取数据\n，判断不是EOF，由putchar输出，输出\n的表现就是换行
	////这个效果，可以用来清理缓冲区

	////使用例子
	//char password[20] = { 0 };
	//printf("please enter your password:>");
	//scanf("%s", password);

	//printf("please make sure your password(Y/N):>");
	//int check = getchar();
	//if ('Y' == check)
	//	printf("yes\n");
	//else
	//	printf("no\n");
	////如果只是这样，输入密码后来不及输入任何东西，程序就已经输出no了，因为
	////我们输入密码后敲回车确认，密码和\n就进入输入缓冲区，这时scanf会把密码读取掉，而留下\n，之后getchar运行时不等我们输入东西，他直接读取了\n并判断不等于Y，
	////所以直接输出no
	////要避免这种情况，就要用到前面学的代码，清理缓冲区，这样缓冲区里是空的，getchar才会等我们输入

	//char password[20] = { 0 };
	//printf("please enter your password:>");
	//scanf("%s", password);
	////需要了解的是，如果我们键盘输入abcd efgh，scanf只会读取到abcd，后续就不会读取了，
	//// 所以可以知道，scnaf读取时遇到空格' '，默认输入换行的\n这类字符时就会停止，不再读取后续的数据
	////这就导致了输入缓冲区里可能会留下许多额外的不需要的字符，影响之后的getchar或scanf的读取，
	////所以我们可以使用以下代码来彻底地清理缓冲区

	//int ch = 0;
	//while ((ch = getchar()) != '\n')
	//{

	//}//通过这个循环语句，getchar就会一直从缓冲区读取数据并存放到ch里，最后读取到\n，把\n拿走后就不再继续

	//printf("please make sure your password(Y/N):>");
	//int check = getchar();
	//if ('Y' == check)
	//	printf("yes\n");
	//else
	//	printf("no\n");

	////循环中continue的应用
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch> '9' )
			continue;
		putchar(ch);

	}//这个代码的效果是只打印数字字符，当打印了其他字符如abc，因为其ASCII码值不在0~9的范围内，判断为真，所以continue跳过接下来的输出回到输入环节
	//当打印了1a2时，也只会输出12，怎么做到筛选的呢，因为ch的类型是char，所以每次只能接收一个字符，所以每个循环，getchar都只读取一个字符，之后回到循环
	//此循环将一直重复直到我们输入CTRL z表示EOF，循环才会结束
	return 0;
}
