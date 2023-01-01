#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

void fib_rec()
{
	int n = 0;
	printf("输入需要查询第几位：");
	scanf("%d", &n);
	printf("第%d位是%d\n", n, fib(n));
}

void fib_l()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	printf("输入查询第几位：");
	scanf("%d", &n);
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d\n", c);
}