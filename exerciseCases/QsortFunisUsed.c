#include "Cases_functions.h"
#include <stdlib.h>

struct stu
{
	char name[20];
	int age;
};

int qsort_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int qsort_str_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1) -> age - ((struct stu*)e2) -> age;
}

int qsort_str_name(const void* e1, const void* e2)
{
	return strcmp((((struct stu*)e1)->name), (((struct stu*)e2)->name));
}

void print_int(int* arr, int sz)
{
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*(arr + i)));
	}

	printf("\n");
}

void print_str_age(struct stu* arr, int sz)
{
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("qsort age: %d %s\n", (arr + i)->age, (arr + i)->name);
	}
}

void print_str_name(struct stu* arr, int sz)
{
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("qsort name: %d %s\n", (arr + i)->age, (arr + i)->name);
	}
}

void QsortFunIsUsed()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
 
	struct stu s[3] = { {"zhangsan", 30},{"lisi", 40}, {"wangwu",50} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz_s = sizeof(s) / sizeof(s[0]);

	qsort(arr, sz, sizeof(arr[0]), qsort_int);
	qsort(s, sz_s, sizeof(s[0]), qsort_str_age);
	qsort(s, sz_s, sizeof(s[0]), qsort_str_name);

	print_int(arr, sz);
	print_str_age(s, sz_s);
	print_str_name(s, sz_s);
}