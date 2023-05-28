#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("----------------\n");
	printf("---1.��ʼ��Ϸ---\n");
	printf("---0.������Ϸ---\n");
	printf("----------------\n");
}

void game()
{
	//��������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ��������
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);

}

int main()
{
	int input = 0;

	do 
	{
		menu();

		scanf("%d", &input);

		switch (input)
		{
		case 0:
			break;

		case 1:
			game();
			break;

		default:
			printf("����������������룡\n");
			system("pause");
			system("cls");
			break;
		}
	} while (input);

	return 0;
}