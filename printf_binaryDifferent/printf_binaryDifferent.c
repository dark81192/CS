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

	//第二种方式
	int ret = x ^ y;

	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}

	printf("%d\n", count);

	return 0;
}