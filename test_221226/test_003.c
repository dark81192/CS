#include <stdio.h>

void runyear()
{
	int i, year;
	for (i = 1000; i < 2000; i += 4)
	{
		if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			printf("%d ", i);
	}
}