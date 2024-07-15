#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

#include <windows.h>
//goto语句的作用是直接从某个位置跳转到对应标签
//原本程序运行是一步一步1234这样往下走的，但是goto语句却可以让程序跳来跳去实现1342
//因此肆意使用goto语句会打乱程序的运行顺序，加大bug出现的可能性
//并且即使不使用goto语句，也不影响我们写代码
//所以goto语句其实并不是必须用到的，我们尽量少用
int main()
{
	//goto语句还是适合某些特定的情况的，比如从多层嵌套的循环语句中直接跳出去
//	for ()
//	{
//		for ()
//		{
//			for ()
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//	}
//error:
//	if(disaster)

	//关机程序
	//goto版本
	//system("shutdown -s -t 60");//system是个库函数可以调转字符串到命令行工具cmd，从而对系统下指令
	//shutdown -s -t 60, shutdown - s是系统指令，设置系统关机，-t是延时关机，60是60秒
	//解除关机则是shutdown -a
	//again:
	//printf("your system will shutdown after 60 seconds, press cancel to stop it\n");
	//char input[20] = { 0 };
	//scanf("%s", input);
	//if (strcmp(input, "cancel") == 0)
	//{
	//	system("shutdown -a");
	//	printf("shutdown cancelled\n");
	//}
	//else
	//	goto again;

	//不用goto版本
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while(1)
	{
		printf("your system will shutdown after 60 seconds, press cancel to stop it\n");
		scanf("%s", input);
		if (strcmp(input, "cancel") == 0)
		{
			system("shutdown -a");
			printf("shutdown cancelled\n");
			break;
		}

	}


	return 0;
}