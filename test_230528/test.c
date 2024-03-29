#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("----------------\n");
	printf("---1.开始游戏---\n");
	printf("---0.结束游戏---\n");
	printf("----------------\n");
}

void game()
{
	//创建雷区
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	//初始化雷区
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//布置雷
	SetMine(mine, ROW, COL);

	//打印雷区
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

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
			printf("输入错误，请重新输入！\n");
			system("pause");
			system("cls");
			break;
		}
	} while (input);

	return 0;
}