#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void xPattern()
{
	int x = 0;

	printf("please enter the number of lines you want to paint:>");

	while (scanf("%d", &x) != EOF && x != 0)
	{
		int i = 0;

		for (i = 0; i < x; i++)
		{
			int j = 0;

			for (j = 0; j < x; j++)
			{
				if (i == j || i + j == x - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}

			printf("\n");
		}



		printf("please enter the number of lines you want to paint(0 == exit):>");
	}
}
