#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//计算1-n的阶乘，不考虑溢出
	int i = 0;
	int sum = 0;	//总和
	int ret = 1;	//阶乘
	int n = 0; //输入信息
	
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
		ret = 1;
	}

	return 0;
}