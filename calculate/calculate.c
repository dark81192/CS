#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算10位数字的平均值和找出最大值

int main()
{
	//创建变量、创建数组和初始化数组
	int i, arr[10] = { 0 };
	//输入10位整数
	printf("示例：1 2 3 4 5 6 7 8 9 10\n");
	printf("Please enter a ten-digit integers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//计算平均值和最大值
	int max = arr[0];
	float avg = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
		avg += arr[i];
	}
	//输出结果
	printf("max = %d, avg = %.2f\n", max, avg / i);
	return 0;
}