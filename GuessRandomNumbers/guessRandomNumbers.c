#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int r = rand() %100;
	int xnum = 0, i, j = 1;

	printf("����ը��\n��������ʼ��Ϸ�ɣ�\n�����Ѿ���һ��1-100���������.\n������µ�����:>");

	for (i = 0; i != 2; j++)
	{
		scanf("%d", &xnum);
		if (xnum == r) {
			printf("��ϲ��¶��ˣ���ȷ������%d\n������%d�β¶�\n����������������һ�� ����2�˳���Ϸ\n", xnum, j);
			scanf("%d", &i);
			system("cls");
			r = rand() % 100;
			if (i != 2)
				printf("����ը��\n��������ʼ��Ϸ�ɣ�\n�����Ѿ���һ��1-100���������.\n������µ�����:>");
		}
		else if (xnum < r) {
			printf("������ֱ���ȷ����С��\n�ٲ�һ��:>");
		}
		else {
			printf("������ֱ���ȷ���ִ���\n�ٲ�һ��:>");
		}
	}

	return 0;
}