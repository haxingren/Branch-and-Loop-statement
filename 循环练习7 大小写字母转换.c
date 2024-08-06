#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) == 1)//scanf是有返回值的，如果输入的数据和设置的数据类型一样的话，那么就会返回1，否则返回EOF
	{
		if (ch >= 'a' && ch <= 'z')
			printf("%c\n", ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			printf("%c\n", ch + 32);
	}

	return 0;
}