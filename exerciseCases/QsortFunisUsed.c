#include "Cases_functions.h"
#include <stdlib.h>
#include <string.h>

struct stu
{
	char name[20];
	int age;
};

int qsort_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int qsort_int_reverse(const void* e1, const void* e2)
{
	return -(*(int*)e1 - *(int*)e2);
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

	//printf("asending order:\n");
	
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

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}

void my_bubble_qsort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;

	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if(cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
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

	qsort(arr, sz, sizeof(arr[0]), qsort_int_reverse);
	print_int(arr, sz);

	my_bubble_qsort(arr, sz, sizeof(arr[0]), qsort_int);
	print_int(arr, sz);

	my_bubble_qsort(arr, sz, sizeof(arr[0]), qsort_int_reverse);
	print_int(arr, sz);
}