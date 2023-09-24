#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;

	scanf("%d %d", &m, &n);

	int i = 0;
	int count = 0;

	for (i = 31; i >= 0; i--)
	{
		int mm = m;
		int nn = n;

		if ((mm>>i) % 2 != (nn>>i) % 2)
			count++;
	}

	printf("%d\n", count);

	return 0;
}