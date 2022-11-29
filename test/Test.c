#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);

	for (b = 0; b <= a; b++)
	{
		if (b % 2 != 0)
		{
			printf("%d ", b);
		}
	}
	return 0;
}