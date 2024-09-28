#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void move(int x, int y)
{
	printf("%c->%c\n", x, y);
}

void hntower_func(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hntower_func(n - 1, a, c, b);
		move(a, c);
		hntower_func(n - 1, b, a, c);
	}
}

void hntower()
{
	int n = 0;

	printf("ÊäÈëººÅµËþ²ãÊý£º");
	scanf("%d", &n);
	hntower_func(n, 'A', 'B', 'C');
}