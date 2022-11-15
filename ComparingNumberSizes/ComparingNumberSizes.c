#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int result(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else {
		z = y;
	}
	return z;
}

int main()
{
	int x, y;
	printf("Please enter two integers:>");
	scanf("%d %d", &x, &y);
	int s = result(x,y);
	printf("%d\n", s);
	return 0;
}