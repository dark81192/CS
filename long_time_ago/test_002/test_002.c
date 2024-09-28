#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//计算n的阶乘
	int n, s, i, j, t;
	printf("1.计算1!+2!+3!+.....+10!\n");
	printf("2.计算n的阶乘\n输入数字:>");
	while (scanf("%d", &t) != EOF)
	{
		///*int ch = 0;
		//scanf("%d", &ch);*/
		switch (t)
		{
		case 1:												//计算1!+2!+3!+.....+10!
			n = 4;
			s = 0;
			for (i = 1, t = 1; i <= n; i++)
			{
				t *= i;
				s += t;
			}
			printf("1!+2!+3!+.....+10!=%d\n", s);
			system("pause");
			system("cls");
			printf("1.计算1!+2!+3!+.....+10!\n");
			printf("2.计算n的阶乘\n");
			printf("输入数字:>");
			break;
		case 2:												//计算n的阶乘
			system("cls");
			printf("输入一个数字计算它的阶乘:>");
			while (scanf("%d", &n) != EOF)
			{
				for (i = 1, t = 1; i <= n; i++)
				{
					t *= i;
				}
				printf("%d\n", t);
				system("pause");
				system("cls");
				printf("Ctrl + C or Ctrl + Z结束\n输入一个数字计算它的阶乘:>");
			}
			system("pause");
			system("cls");
			printf("Ctrl + C or Ctrl + Z结束\n");
			printf("1.计算1!+2!+3!+.....+10!\n");
			printf("2.计算n的阶乘\n输入数字:>");
			break;
		default:
			break;
		}
	}
	return 0;
}