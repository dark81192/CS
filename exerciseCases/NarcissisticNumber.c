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

int calc(int num, int pow)
{
	int nums[5] = { 0 };

	if (pow == 3)
	{
		nums[0] = num / 100;
		nums[1] = (num % 100) / 10;
		nums[2] = num % 10;

		if (pow_func(nums, pow) == num)
			return num;
	}
	else if (pow == 4)
	{
		nums[0] = num / 1000;
		nums[1] = (num % 1000) / 100;
		nums[2] = (num % 100) / 10;
		nums[3] = num % 10;

		if (pow_func(nums, pow) == num)
			return num;
	}
	else if (pow == 5)
	{
		nums[0] = num / 10000;
		nums[1] = (num % 10000) / 1000;
		nums[2] = (num % 1000) / 100;
		nums[3] = (num % 100) / 10;
		nums[4] = num % 10;
		if (pow_func(nums, pow) == num)
			return num;
	}
	
	return 0;
}

void NarcissisticNumber()
{
	int num = 0;
	int pow = 0;
	int ret = 0;

	while (num <= 100000)
	{
		
		if (num < 10)
			printf("%d ", num);
		else if (num < 100)
			num = 100;
		else if (num < 1000)
		{
			pow = 3;
			ret = calc(num, pow);
			if (ret)
				 printf("%d ", ret);
		}
		else if (num < 10000)
		{
			pow = 4;
			ret = calc(num, pow);
			if (ret)
				printf("%d ", ret);
		}
		else if (num < 100000)
		{
			pow = 5;
			ret = calc(num, pow);
			if (ret)
				printf("%d ", ret);
		}

		num++;
	}


}