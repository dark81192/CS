#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//1-100之间所有三的倍数
	int t = 3, i = 1;
	for (i = 1; i < 100; i++)
	{
		if (i % t == 0)
			printf("%d ", i);
	}
	return 0;
}