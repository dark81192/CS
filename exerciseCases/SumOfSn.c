#include "Cases_functions.h"

#define b 5

int sumOfSn_func(int a)
{
	int count = a;
	int sum = 0;

	for (int i = 0; i < b -1; i++)
	{
		count = count * 10 + a;
		sum += count;
	}

	return sum + a;
}

void SumOfSn()
{
	int a = 0;

	scanf_s("%d", &a);

	printf("%d\n", sumOfSn_func(a));
}