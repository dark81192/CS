#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void n_count()
{
	int i = 0;
	int count = 0;

	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9) count++;
		if (i / 10 == 9) count++;
	}

	printf("count = %d\n", count);
}

void sum_d()
{
	int i = 0;
	int flag = 1;
	float sum = 0.0;

	for (i = 1; i < 101; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}

	printf("sum = %f\n", sum);
}

void find_max()
{
	int arr1[10] = { 0 };
	int i = 0;
	
	printf("输入十位整数空格分割:");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}

	int max = arr1[0];

	for (i = 1; i < 10; i++)
	{
		if (max < arr1[i]) max = arr1[i];
	}

	printf("max = %d \n", max);
}

void mul(int a, int b)
{
	if (b < a && a < 10 && b < 10)
	{
		printf("%d*%d=%-2d ", a, b, a * b);
		mul(a, b + 1);
	}
	else if (b == a)
	{
		printf("%d*%d=%-2d\n", a, b, a * b);
		mul(a + 1, 1);
	}	
}

void mul_table()
{
	int a = 1;
	int b = 1;
	mul(a, b);
}

void guess_number()
{
	int n = 0;
	int r = rand() % 100 + 1;

	printf("猜数字游戏\n");
	printf("现在有一个随机数x了（1-100）\n");
	printf("请猜数字：>");

	do {
		scanf("%d", &n);

		if (r == n)
		{
			printf("success!\n");
			break;
		}
		else if (r < n)
		{
			printf("Too big!\n");
			printf("请猜数字：>");
		}
		else
		{
			printf("Small!\n");
			printf("请猜数字：>");
		}
	} while (1);

}

void ppnumbers()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 2 != 0)
			printf("%d ", i);
	}
}

int main()
{
	int o = 0;

	printf("1.1-100之间9出现的次数\n");
	printf("2.1/1+1/2+1/3+......+1/100的值\n");
	printf("3.比较输入的10位整数大小\n");
	printf("4.输出99乘法表\n");
	printf("5.猜数字游戏\n");
	printf("6.打印100-200之间的素数\n");

	scanf("%d", &o);
	
	switch (o)
	{
	case 1:
		n_count();
		break;

	case 2:
		sum_d();
		break;

	case 3:
		find_max();
		break;

	case 4:
		mul_table();
		break;

	case 5:
		srand((unsigned)time(NULL));
		guess_number();
		break;

	case 6:
		ppnumbers();
		break;

	default:
		printf("error\n");
		system("pause");
		break;
	}

	return 0;
}