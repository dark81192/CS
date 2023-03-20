#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("------------------\n");
	printf("------1.��ʼ------\n");
	printf("------0.�˳�------\n");
	printf("------------------\n");
}

void game()
{
	//������ά����;
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//��������
		ComputerMove(board, ROW, COL);
		//�ж���Ӯ
		int Win = WhoWin(board, ROW, COL);

		if (Win == 1)
		{
			printf("��ϲ��ʤ��\n");
			system("pause");
			break;
		}
		else if (Win == 2)
		{
			printf("�����ˣ�\n");
			system("pause");
			break;
		}
		else if (Win == 0) {
			printf("ƽ���ˣ�\n");
			system("pause");
			break;
		}
	}
}

int main()
{
	int select = 0;

	//ʱ�������
	srand((unsigned)time(NULL));

	do
	{
		system("cls");
		menu();

		printf("��ѡ��:>");
		scanf("%d", &select);

		switch (select)
		{
		case 0:
			break;

		case 1:
			system("cls");
			game();
			break;

		default:
			printf("input error!\n");
			system("pause");
			system("cls");
			break;
		}
	} while (select);

	return 0;
}