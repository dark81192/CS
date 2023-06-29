#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 100;
	int i = 0;
	int count = 0;

	for (i = 0; i < 31; i++)
	{
		if (((a >> i) & 1) == 1)
			count++;
		else if ((a >> i) == 0)
			break;
	}

	printf("count = %d\n", count);
	//printf("a = %")

	return 0;
}