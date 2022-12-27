#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int binsearch(int x, int arr[], int len)
{
	for (mid = (left + right) / 2; 1; mid = (left + right) / 2)
	{
		if (arr[mid] > search)
			right = mid - 1;
		if (arr[mid] < search)
			left = mid + 1;
		if (arr[mid] == search)
		{
			printf("%d 的下标是: %d\n", search, mid);
			break;
		}
		len--;
		if (len == 0)
		{
			printf("没有需要查找的值");
			break;
		}
	}
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int search = 6;	//需要查找的数字
	int left = 0;	//左下标
	int right = len - 1;
	int mid;
	
	
	
	return 0;
}