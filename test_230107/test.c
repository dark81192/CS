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
	double sum = 0.0;

	for (i = 1; i < 101; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}

	printf("sum = %.3f\n", sum);
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

void leapYear()
{
	int year = 0;

	printf("please enter the year:>");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0)
		printf("leap year!\n");
	else if (year % 400 == 0)
		printf("leap year!\n");
	else
		printf("it's not a leap year!\n");
}

void mulx(int a, int b, int x)
{
	if (a > x)
		return;
	else if (a == b)
	{
		printf("%d * %d = %-2d\n", a, b, a * b);
		mulx(a + 1, 1, x);
	}
	else if (a > b)
	{
		printf("%d * %d = %-2d ", a, b, a * b);
		mulx(a, b + 1, x);
	}
}

void mulx_table()
{
	int x = 0;
	int a = 1;
	int b = 1;

	printf("please enter the number of lines:>");
	scanf("%d", &x);

	mulx(a, b, x); 
}

void exchange()
{
	int a = 0, b = 0, c = 0;

	printf("please enter the first number:>");
	scanf("%d", &a);
	printf("please enter the second number:>");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("first number: %d\nsecond number: %d\n", a, b);
}

void func_printNum(int num)
{
	if (num < 10)
	{
		printf("%d\n", num);
	}
	else
	{
		printf("%d ", num % 10);
		func_printNum(num / 10);
	}

}

void print_num()
{
	int num = 0;
	
	printf("please enter a number:>");
	scanf("%d", &num);

	func_printNum(num);
}

int factorial_func(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial_func(n - 1);
	}
}

void factorial()
{
	int n = 0;
	
	printf("请输入n:>");
	scanf("%d", &n);

	printf("%d\n", factorial_func(n));

}

int strlen_s(char* str)
{
	if (*str != '\0')
		return 1 + strlen_s(str + 1);
	else
		return 0;
}

void simulation_strlen()
{
	char str[20] = { 0 };
	
	printf("please enter a string char:>");
	scanf("%s", str);

	printf("%d\n", strlen_s(str));
}

void reserve_strFunc(char* arr)
{
	int left = 0;
	int right = strlen_s(arr) - 1;
	char v;
	while (left < right)
	{
		v = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = v;
		left++;
		right--;
	}
}

void reverse_str()
{
	char arr[20] = { 0 };

	printf("please enter a string char:>");
	scanf("%s", arr);

	reserve_strFunc(arr);
	printf("%s\n", arr);
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
	printf("7.判断闰年\n");
	printf("8.交换两个整数\n");
	printf("9.指定行数的乘法表\n");
	printf("10.递归打印一个数的每一位\n");
	printf("11.n的阶乘递归(不考虑溢出)\n");
	printf("12.递归实现strlen的模拟\n");
	printf("13.倒序排列字符串\n");

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

	case 7:
		leapYear();
		break;

	case 8:
		exchange();
		break;

	case 9:
		mulx_table();
		break;

	case 10:
		print_num();
		break;

	case 11:
		factorial();
		break;

	case 12:
		simulation_strlen();
		break; 
	
	case 13:
		reverse_str();
		break;

	default:
		printf("error\n");
		system("pause");
		break;
	}

	return 0;
}