#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdio.h>


void options()
{
	printf("**********************\n");
	printf("******1.��ʼ��Ϸ******\n");
	printf("******2.�˳���Ϸ******\n");
	printf("**********************\n");
}

void game(t)
{
	int random = rand() % 100 + 1;
	while (1)
	{
		printf("����������:>");
		scanf("%d", &t);
		if (t == random)
		{
			printf("��ϲ��¶���!\n");
			break;
		}
		else if (t < random)
			printf("��С��\n");
		else
			printf("�´���\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int option = 0, t = 0;
	do
	{
		options();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (option != 2);
	return 0;
}