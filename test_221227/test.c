#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void swap(int* pa, int* pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

void menu_func()
{
	printf("函数练习\n");
	printf("1.a和b值交换\n");
	printf("2.判断一个数是不是素数\n");
	printf("3.判断某年是否为闰年\n");
	printf("4.整型有序数组二分查找\n");
	printf("5.每调用一次num值加1\n");
	printf("0.退出\n");
}

char determine(int a)
{
	char result[2] = { '1', '0' };
	if ((a %2 != 0 && a % 3 != 0 && a %5 != 0 && a % 7 != 0 && a % 9 != 0 && a != 1) || (a == 2 || a == 5 || a == 3 || a == 7 || a == 9))
		return result[0];
	return result[1];
}

int leapYear(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
	return 0;
}

int find_func(int arr1[], int size, int goal)
{
	int left = 0, i = 0, mid;
	int right = size - 1;
	for (i = 0; left <= right; i++)
	{
		mid = (left + right) / 2;
		if (arr1[mid] == goal)
			return mid;
		else if (arr1[mid] < goal)
			left = mid + 1;
		else
			right  = mid - 1;
	}
	return 9999;
}

void count_func(int* p)
{
	*p += 1;
}

int main()
{
	int option;
entrance:
	menu_func();
	scanf("%d", &option);
	switch (option)
	{
	case 1:
	{
		system("cls");
		int a = 0, b = 0;
		printf("请输入你需要交换的数(格式例：10 20)：");
		scanf("%d %d", &a, &b);
		printf("交换前：a = %d, b = %d\n", a, b);
		swap(&a, &b);
		printf("交换后：a = %d, b = %d\n", a, b);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	case 2:
	{
		system("cls");
		int  x;
		char r;
		printf("请输入需要判断的数：");
		scanf("%d", &x);
		r = determine(x);
		if (r == '1')
			printf("%d 是 素数\n", x);
		else
			printf("%d 不是 素数\n", x);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	case 3:
	{
		system("cls");
		int year;
		printf("请输入年份：");
		scanf("%d", &year);
		int de = leapYear(year);
		if (de)
			printf("%d年是闰年\n", year);
		else
			printf("%d年不是闰年\n", year);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	case 4:
	{
		system("cls");
		int i = 0, l = 10, f, result;
		//printf("输入数组长度：");	//暂时做不出来还没学到指针
		//scanf("%d", &l);
		//int arr[l] = { 0 };
		int arr[10] = { 0 };
		printf("请输入一个10位升序数组,例：1 5 6 8 10 12 16 17 18 20\n请输入：");
		for (i = 0; i < l; i++)
			scanf("%d", &arr[i]);
		printf("请输入需要再有序数组中查找下标的数字：");
		scanf("%d", &f);
		int len = sizeof(arr) / sizeof(arr[0]);
		result =  find_func(arr, len, f);
		if (result == 9999)
		{
			printf("没有您要寻找的数字");
			break;
		}
		printf("%d的下标是%d\n", f, result);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	case 5:
	{
		system("cls");
		int num = 0;
		printf("num功能调用当前计数：%d\n", num);
		system("pause");
		count_func(&num);
		printf("当前计数：%d\n", num);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	default:
		break;
	}

	return 0;
}