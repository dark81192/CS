#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	int count = 0;

	scanf("%d %d", &x, &y);

	//第一种方式
	/*for (int i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) != ((y >> i) & 1))
			count++;
	}*/

	//第二种方式异或
	int ret = x ^ y;

	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}

	//分别打印出x的奇数位和偶数位
	printf("奇数位: ");

	for (int i = 31; i >= 0; i-= 2)
	{
		if ((x >> i) & 1)
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}
	}

	printf("\n偶数位: ");

	for (int i = 30; i >= 0; i -= 2)
	{
		if ((x >> i) & 1)
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}
	}

	printf("\n有%d位不同\n", count);

	return 0;
}