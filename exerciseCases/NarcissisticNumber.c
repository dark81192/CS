#include "Cases_functions.h"

int pow_func(int *nums, int pow)
{
	int sum = 0;

	for (int i = 0; i < pow; i++)
	{
		int ret = *(nums + i);
		int j = pow;

		while (j - 1 > 0)
		{
			*(nums + i) *= ret;
			--j;
		}

		sum += *(nums + i);
	}

	return sum;
}

void calc(int num, int pow)
{
	int nums[5] = { 0 };
	int i = 0;
	int temp = num;

	while (temp)
	{
		nums[i] = temp % 10;
		temp = temp / 10;
		i++;
	}

	if (pow_func(nums, pow) == num)
		printf("%d ", num);
}

void NarcissisticNumber()
{
	int num = 0;
	int ret = 0;

	while (num < 100000)
	{
		int i = num;
		int pow = 1;

		while (i / 10)
		{
			pow++;
			i = i / 10;
		}
		
		calc(num, pow);

		num++;
	}


}