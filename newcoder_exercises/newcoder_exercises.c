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

void TheOrderedSequenceInsertsAnInteger()
{
    int N = 0;
    int i = 0;
    int insert = 0;

    scanf("%d", &N);

    int* upSort = (int*)malloc(sizeof(int) * N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &upSort[i]);
    }

    scanf("%d", &insert);

    for (i = 0; i < N; i++)
    {
        if (*(upSort + i) > insert || *(upSort + i) == insert)
        {
            upSort = (int*)realloc(upSort, (N + 1) * sizeof(int));

            int tmp = 0;

            for (int j = i; j < N; j++)
            {
                if (j == i)
                {
                    int tmp1 = *(upSort + j);
                    *(upSort + j) = insert;
                    tmp = *(upSort + j + 1);
                    *(upSort + j + 1) = tmp1;
                    continue;
                }
                else
                {
                    int tmp1 = *(upSort + j + 1);
                    *(upSort + j + 1) = tmp;
                    tmp = tmp1;
                }
            }

            i = N;
        }
        else if (i == N - 1)
        {
            upSort = (int*)realloc(upSort, (N + 1) * sizeof(int));

            *(upSort + i + 1) = insert;

            i = N;
        }
    }

    for (i = 0; i < N + 1; i++)
    {
        printf("%d ", *(upSort + i));
    }

    free(upSort);
    upSort = NULL;
}
