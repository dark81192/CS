#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("------------------\n");
	printf("------1.开始------\n");
	printf("------0.退出------\n");
	printf("------------------\n");
}

void game()
{
	//创建二维数组;
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);
		//判断输赢
		int Win = WhoWin(board, ROW, COL);

		if (Win == 1)
		{
			printf("恭喜获胜！\n");
			system("pause");
			break;
		}
		else if (Win == 2)
		{
			printf("你输了！\n");
			system("pause");
			break;
		}
		else if (Win == 0) {
			printf("平局了！\n");
			system("pause");
			break;
		}
	}
}

int main()
{
	int select = 0;

	//时间随机数
	srand((unsigned)time(NULL));

	do
	{
		system("cls");
		menu();

		printf("请选择:>");
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