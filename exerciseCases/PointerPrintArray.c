#include "Cases_functions.h"

void PointerPrintArray()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* p = arr;
	int i = 0;

	for (i = 0; i < sizeof(arr) / 4; i++)
	{
		printf("%d ", *p + i);
	}

}