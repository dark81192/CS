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

void CivilServiceInterview()
{
	int score = 0;
	int sum = 0;
	int min = 100;
	int max = 0;
	int i = 0;

	printf("please enter seven grades(separated by Spaces):>");

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &score);

		sum += score;

		if (score > max)
			max = score;
		
		if (score < min)
			min = score;
	}

	printf("%.2f\n", (sum - min - max) / 5.0);
}
