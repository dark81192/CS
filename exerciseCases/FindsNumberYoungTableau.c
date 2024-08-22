#define _CRT_SECURE_NO_WARNINGS 1
#include "Cases_functions.h"

void FindsNumberYoungTableau()
{
	int arr[3][3] = { 
					1, 2, 3,
					4, 5, 6, 
					7, 8, 9
					};

	int target = 0;
	int i = 0;
	int right = sizeof(arr[0]) / sizeof(arr[0][0]);
	int row = sizeof(arr) / sizeof(arr[0]);
	
	printf("scanf target:");
	scanf("%d", &target);

	for (i = 0; i < row - 1; i++)
	{
		if (i >= row || right < 0)
		{
			printf("Err\n");
		}
		else if (arr[i][right - 1] == target)
		{
			printf("arr[%d][%d]\n", i, right - 1);
		}
		else if (arr[i][right - 1] > target)
		{
			--right;
		}
	}
}