#include "Cases_functions.h"

#define b 5

int sumOfSn_func(int a, int sum)
{
	int j = 10;
	for (int i = 0; i < b; i++)
		j = j * 10;
	sum += (a * 10) + 2;
	a = a * 10 + 2;
	if (a / j == 2)
		return sum;
	return sumOfSn_func(a, sum);
}

void SumOfSn()
{
	int a = 0;
	int sum = 0;

	scanf_s("%d", &a);

	printf("%d\n", sumOfSn_func(a, sum));
}