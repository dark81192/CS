#define _CRT_NO_SECURE_WARNINGS 1

#include <stdio.h>

void reserver(int num[], int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		int temp = num[i];
		num[i] = num[len - 1 - i];
		num[len - 1 - i] = temp;
	}
}

void print(int num[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
}

void init(int num[], int len)
{
	for (int i = 0; i < len; i++)
	{
		num[i] = 0;
	}
}

void swap(int arr1[], int arr2[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main()
{
	int num[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(num) / sizeof(num[0]);

	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 6,5,4,3,2,1 };
	int len_arr = sizeof(arr1) / sizeof(arr1[0]);

	reserver(num,len);
	print(num, len);
	init(num, len);
	swap(arr1, arr2, len_arr);
	print(arr1, len_arr);
	print(arr2, len_arr);
	return 0;
}