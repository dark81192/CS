#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void swap(int* pa, int* pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int main()
{
	int a = 10, b = 20;

	printf("����ǰ��a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("������a = %d, b = %d\n", a, b);

	return 0;
}