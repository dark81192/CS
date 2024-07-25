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
		for (int i = 0; i <= row; i++)
		{
			if (i > (10 - row) / 2)
				printf("%d ", Triangle[row][i]);
			else
				printf("  ");
		}
		printf("\n");
	}
}