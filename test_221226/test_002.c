#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void commonDivisor()
{
	int a = 0, b = 0, i = 0;
	scanf("%d %d", &a, &b);
	for (i = a > b ? a : (a == b ? a : b); i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
}