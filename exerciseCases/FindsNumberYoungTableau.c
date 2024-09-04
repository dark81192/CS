#define _CRT_SECURE_NO_WARNINGS 1
#include "Cases_functions.h"

int findFunc(int arr[3][3], int* prow, int* pcol, int k)
{
	int row = 0;
	int col = *pcol - 1;

	while (row < *prow && col >= 0)
	{
		if (arr[row][col] == k)
		{
			*prow = row;
			*pcol = col;
			
			return 1;
		}
		else if (arr[row][col] < k)
		{
			++row;
		}
		else
		{
			--col;
		}
	}

	return 0;
}

void FindsNumberYoungTableau()
{
	int arr[3][3] = { 
					1, 2, 3, 4, 5, 6, 8, 9, 10
					};

	int target = 0;
	int i = 0;
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int row = sizeof(arr) / sizeof(arr[0]);
	
	printf("scanf target:");
	scanf("%d", &target);

	int result = findFunc(arr, &row, &col, target);

	if (result)
	{
		printf("arr[%d][%d]\n", row, col);
	}
	else
	{
		printf("Err\n");
	}
	//for (i = 0; i < row - 1; i++)
	//{
	//	if (i >= row || col < 0)
	//	{
	//		printf("Err\n");
	//	}
	//	else if (arr[i][col - 1] == target)
	//	{
	//		printf("arr[%d][%d]\n", i, col - 1);
	//	}
	//	else if (arr[i][col - 1] > target)
	//	{
	//		--col;
	//	}
	//}
}