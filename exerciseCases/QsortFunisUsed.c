#include "Cases_functions.h"
#include <stdlib.h>


int qsort_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_1(int* arr, int sz)
{
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*(arr + i)));
	}
}

struct stu
{
	char name[20];
	int age;
};

void QsortFunIsUsed()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
 
	/*struct stu s[] = { {"zhangsan", 30},{"lisi", 40}, {"wangwu",50} };*/
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), qsort_int);

	print_1(arr, sz);
}