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
	printf("������ϰ\n");
	printf("1.a��bֵ����\n");
	printf("2.�ж�һ�����ǲ�������\n");
	printf("3.�ж�ĳ���Ƿ�Ϊ����\n");
	printf("4.��������������ֲ���\n");
	printf("5.ÿ����һ��numֵ��1\n");
	printf("0.�˳�\n");
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
		printf("����������Ҫ��������(��ʽ����10 20)��");
		scanf("%d %d", &a, &b);
		printf("����ǰ��a = %d, b = %d\n", a, b);
		swap(&a, &b);
		printf("������a = %d, b = %d\n", a, b);
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
		printf("��������Ҫ�жϵ�����");
		scanf("%d", &x);
		r = determine(x);
		if (r == '1')
			printf("%d �� ����\n", x);
		else
			printf("%d ���� ����\n", x);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	case 3:
	{
		system("cls");
		int year;
		printf("��������ݣ�");
		scanf("%d", &year);
		int de = leapYear(year);
		if (de)
			printf("%d��������\n", year);
		else
			printf("%d�겻������\n", year);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	case 4:
	{
		system("cls");
		int i = 0, l = 10, f, result;
		//printf("�������鳤�ȣ�");	//��ʱ����������ûѧ��ָ��
		//scanf("%d", &l);
		//int arr[l] = { 0 };
		int arr[10] = { 0 };
		printf("������һ��10λ��������,����1 5 6 8 10 12 16 17 18 20\n�����룺");
		for (i = 0; i < l; i++)
			scanf("%d", &arr[i]);
		printf("��������Ҫ�����������в����±�����֣�");
		scanf("%d", &f);
		int len = sizeof(arr) / sizeof(arr[0]);
		result =  find_func(arr, len, f);
		if (result == 9999)
		{
			printf("û����ҪѰ�ҵ�����");
			break;
		}
		printf("%d���±���%d\n", f, result);
	}
	system("pause");
	system("cls");
	goto entrance;
	break;

	case 5:
	{
		system("cls");
		int num = 0;
		printf("num���ܵ��õ�ǰ������%d\n", num);
		system("pause");
		count_func(&num);
		printf("��ǰ������%d\n", num);
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