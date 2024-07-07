#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
//printf的返回值为输出的字符串的字符个数
{
	int n = printf("Hello world!");//Hello world!算上字母，空格，符号加起来共12个字符，所以输出12
	printf("\n%d\n", n);//前面加个\n就可以先换行再输出
	return 0;
}