#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"

#pragma comment(lib, "add.lib")

int main()
{
	int a, b;
	printf("����a��b��ֵ��");
	scanf("%d %d", &a, &b);
	printf("%d\n", Add(a,b));
	return 0;
}