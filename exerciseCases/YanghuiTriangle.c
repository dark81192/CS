#define _CRT_SECURE_NO_WARNINGS 1
#include "Cases_functions.h"

void YanghuiTriangle()
{
	int Triangle[10][10] = { 0 };
	int row = 0;
	int col = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < row + 1; col++)
		{
			if (row == col || col == 0)
				Triangle[row][col] = 1;
			else
				Triangle[row][col] = Triangle[row - 1][col] + Triangle[row - 1][col - 1];
		}

		int j = 0;

		while (j < (10 - row))
		{
			printf("   ");
			j++;
		}

		for (int i = 0; i <= row; i++)
		{
			printf("%6d", Triangle[row][i]);
			//printf("   ");
		}
		printf("\n");
	}
}

int YhTriangleRec(int r, int c)
{
	return (c == 1 || c == r) ? 1 : YhTriangleRec(r - 1, c - 1) + YhTriangleRec(r - 1, c);
}

void YanghuiTriangle_Recursion()
{
	int x = 0;
	int i, j;

	printf("x: ");
	scanf("%d", &x);

	for (i = 1; i <= x; i++)
	{
		for (j = 0; j <= x - i; j++)
			printf("   ");
		for (j = 1; j <= i; j++)
			printf("%6d", YhTriangleRec(i, j));
		printf("\n");
	}
}