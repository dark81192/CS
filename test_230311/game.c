#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			else
				printf("\n");
		}
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
				else
					printf("\n");
			}
		}
	}

}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("example: 2 2\n");
		printf("请下棋: ");

		scanf("%d %d", &x, &y);

		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断棋盘是否占用
			if (board[x - 1][y - 1] == '*' || board[x - 1][y - 1] == 'o')
			{
				printf("当前位置已被占用，请重新输入!\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}

		printf("坐标非法，请重新输入！\n");

	}
	system("cls");
	DisplayBoard(board, ROW, COL);
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//时间随机数
	srand((unsigned)time(NULL));

	int r = 0;
	int s = 0;

	do
	{
		int x = rand() % row;
		int y = rand() % col;

		//判断棋盘是否被占用
		if (board[x][y] == '*' || board[x][y] == 'o')
		{
			r = 1;
			s++;
		}
		else
		{
			board[x][y] = 'o';
			r = 0;
			system("cls");
			DisplayBoard(board, ROW, COL);
		}
		if (s > row * col)
			break;
	} while (r);
}

//判断输赢
int WhoWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int s = 0, e = 0, f = 0, g = 0, h = 0;

	for (i = 0; i < row; i++)
	{
		int a = 0, c = 0;
		int b = 0, d = 0;

		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				a++;
			else if (board[i][j] == 'o')
				b++;
			if (board[j][i] == '*')
				c++;
			else if (board[j][i] == 'o')
				d++;
			if (board[i][j] == '*' || board[i][j] == 'o')
				s++;
		}

		// 判断反斜
		if (board[i][i] == '*')
			e++;
		else if (board[i][i] == 'o')
			f++;
		if (board[row -1 - i][i] == '*')
			g++;
		else if (board[row - 1 - i][i] == 'o')
			h++;

		if (a == row || c == row || e == row || g == row)
			return 1;
		else if (b == row || d == row || f == row || h == row)
			return 2;
	}

	if (s == row * col)
		return 0;
	else
		return 3;
}