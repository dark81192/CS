#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void des()
{
	printf("����ը��\n��������ʼ��Ϸ�ɣ�\n�����Ѿ���һ��1-100���������.\n������µ�����:>");
}

void cl()
{
	char b;
	do
	{
		scanf("%c", &b);
	} while (b != '\n');
}

int main()
{
	srand((unsigned)time(NULL));
	int r = rand() %100;
	int xnum = 0, i, j = 1;

	des();
	 
	for (i = 0; i != 2; j++)
	{
		scanf("%d", &xnum);
		if (xnum == r) {
			printf("��ϲ��¶��ˣ���ȷ������%d\n������%d�β¶�\n����������������һ�� ����2�˳���Ϸ\n", xnum, j);
			cl();
			scanf("%d", &i);
			system("cls");
			r = rand() % 100;
			if (i != 2)
				des();
		}
		else if (xnum < r) {
			printf("������ֱ���ȷ����С��\n�ٲ�һ��:>");
		}
		else {
			printf("������ֱ���ȷ���ִ���\n�ٲ�һ��:>");
		}
		cl();
	}

	return 0;
}