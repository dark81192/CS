#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num0, num1;
	scanf("%d%d", &num0, &num1);
	//int sum = num0 + num1;
	int sum = Add(num0, num1);
	printf("%d\n", sum);

	return 0;
}