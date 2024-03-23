#include "Cases_functions.h"

void move(int* arr, int len)
{
	int temp = 0;
	int right = len - 1;
	int left = 0;

	while (right > left)
	{
		while ((right > left) && *(arr + left) % 2 == 1)
		{
			left++;
		}
		while ((right > left) && *(arr + right) % 2 == 0)
		{
			right--;
		}

		if (left < right)
		{
			temp = *arr + right;
			*(arr + right) = *arr + left;
			*(arr + left) = temp;

		}
	}
}

void print(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", *(arr + i));
	}
}

void OddEvenSort()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	move(arr, len);
	print(arr, len);
}