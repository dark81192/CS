#include <stdio.h>

void Multipleofthree()
{
	int t = 3, i = 1;
	for (i = 1; i < 100; i++)
	{
		if (i % t == 0)
			printf("%d ", i);
	}
}