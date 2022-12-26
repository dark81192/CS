#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void commonDivisor()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		for (int i = a; i > 0; i--)
			if (b % i == 0 && a % i == 0)
			{
				printf("%d\n", i);
				break;
			}
	}
	else if (a > b)
	{
		for (int i = b; i > 0; i--)
			if (a % i == 0 && b % i == 0)
			{
				printf("%d\n", i);
				break;
			}
	}
	else
		printf("%d\n", a);
}