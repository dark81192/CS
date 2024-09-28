#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void px(int arr[], int l)
{
	int i = 0;
	int tmp = 0;
	int j = 0;
	int flag = 1;
	
	for (i = 0; i < l; i++)
	{
		printf("arr[%d] = %d ", i, arr[i]);
	}
	printf("\n");

	for (i = 0; i < l - 1; i++)
	{
		for (j = 0; j < l - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
	for (i = 0; i < l; i++)
	{
		printf("arr[%d] = %d ", i, arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 0 };
	int a = 0;

	do {

		scanf("%d", &arr[a]);
		a++;

	} while (arr[a] != '\0');

	int l = (sizeof(arr)) / sizeof(arr[0]);

	px(arr, l);

	return 0;
}

