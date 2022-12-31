#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

void dec_num()
{
	unsigned int num;
	printf("ÊäÈëÊı×Ö£º");
	scanf("%u", &num);
	print(num);
}