#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fog_func(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	return fog_func(n - 1) + fog_func(n - 2);
}

void fog()
{
	int n = 0;

	printf("������̨������");
	scanf("%d", &n);
	printf("һ����%d������\n", fog_func(n));
}
