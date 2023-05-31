#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	printf("-------------------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = 10;
	
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0');
}

void open_round(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int* win)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int count = get_mine_count(mine, x, y);

		if (count == 0)
		{
			(*win)++;

			show[x][y] = ' ';

			int i = 0;
			int j = 0;

			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')
					{
						open_round(mine, show, i, j, win);
					}
				}
			}
		}
		else
		{
			(*win)++;
			show[x][y] = count + '0';
		}

	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	// 0. 显示雷数
	// 1. 选择坐标
	// 2. 判断坐标合法性
	// 3. 判断是否有雷
	// 4. 判断周围雷的数量
	// 5. 打开周围的无雷坐标
	// 6. 标记雷
	// 7. 判断输赢

	int mine_count = EASY;
	int count = 0;
	int win = 0;

	int x = 0;
	int y = 0;

	char o = 0;
	char ch = 0;

	while (win < (row * col - EASY))
	{
		//printf("雷还有%d个\n", mine_count);
		DisplayBoard(show, row, col);
		//printf("f 5 5 排查坐标(5,5)，m 5 5 标记坐标(5,5)为标记坐标为地雷m\n");
		printf("输入排雷坐标:>");
		//while ((ch = getchar()) != '\n');
		//scanf("%c %d %d", &o, &x, &y);
		scanf("%d %d", &x, &y);

		/*if (o == 'm')
		{
			mine_count--;
			show[x][y] = 'm';
		}
		else
		{*/
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '0')
				{
					//count = get_mine_count(mine, x, y);
					//show[x][y] = count + '0';
					open_round(mine, show, x, y, &win);
				}
				else
				{
					system("cls");
					printf("你被炸死了！\n游戏结束！\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				win++;
			}
			else
			{
				printf("坐标非法！\n");
			}
		}
//	}
	if (win == row * col - EASY)
	{
		printf("你赢了！\n");
		system("pause");
	}
}