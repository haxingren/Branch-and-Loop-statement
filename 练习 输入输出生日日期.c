#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);//通过 %数字d 如（%3d），可以指定输入域宽，从而截取所需的数值
	printf("year=%d\n", year);
	printf("year=%d\n", month);
	printf("year=%02d\n", date);
	//输出时通过 %数字d 也可以指定输出几位数，通过 %0数字d 则可以在输出数值数位小于指定指定数位时自动补0，比如1输出成01
	//%02d d表示输出的类型，2表示输出两位数，0表示当输出一位数时补0
	return 0;
}