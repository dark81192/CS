#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//����n�Ľ׳�
	int n, s, i, j, t;
	printf("1.����1!+2!+3!+.....+10!\n");
	printf("2.����n�Ľ׳�\n��������:>");
	while (scanf("%d", &t) != EOF)
	{
		///*int ch = 0;
		//scanf("%d", &ch);*/
		switch (t)
		{
		case 1:												//����1!+2!+3!+.....+10!
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
			printf("1.����1!+2!+3!+.....+10!\n");
			printf("2.����n�Ľ׳�\n");
			printf("��������:>");
			break;
		case 2:												//����n�Ľ׳�
			system("cls");
			printf("����һ�����ּ������Ľ׳�:>");
			while (scanf("%d", &n) != EOF)
			{
				for (i = 1, t = 1; i <= n; i++)
				{
					t *= i;
				}
				printf("%d\n", t);
				system("pause");
				system("cls");
				printf("Ctrl + C or Ctrl + Z����\n����һ�����ּ������Ľ׳�:>");
			}
			system("pause");
			system("cls");
			printf("Ctrl + C or Ctrl + Z����\n");
			printf("1.����1!+2!+3!+.....+10!\n");
			printf("2.����n�Ľ׳�\n��������:>");
			break;
		default:
			break;
		}
	}
	return 0;
}