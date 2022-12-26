#include <stdio.h>

void commonDivisor()
{
	int a = 20, b = 40;
	if (a < b)
	{
		for (int i = a; i > 0; i--)
			if (b % i == 0)
			{
				printf("%d\n", i);
				break;
			}
	}
	else if (a > b)
	{
		for (int i = b; i > 0; i--)
			if (a % i == 0)
			{
				printf("%d\n", i);
				break;
			}
	}
	else
		printf("%d\n", a);
}