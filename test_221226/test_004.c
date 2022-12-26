#include <stdio.h>

void primeNumber()
{
	int i = 0;
	for (i = 101; i < 200; i+=2)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 9 != 0)
			printf("%d ", i);
	}
}