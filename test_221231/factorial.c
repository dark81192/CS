#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int factorial_func(int n)
{
	int ret = 1, i = 1;
	if (1 >= n)
		return 1;
	else
		return n * factorial_func(n - 1);
}

void factorial()
{
	int n = 0,i = 1;

	printf("«Î ‰»În£∫");
	scanf("%d", &n);
	printf("%d\n", factorial_func(n));
}