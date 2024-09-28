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

void mark_mine(char show[ROWS][COLS])
{
	int x = 0;
	int y = 0;

	
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);

		if (show[x][y] == '!')
		{
			printf("�����Ѿ���ǹ��ˣ�\n");
		}
		else
		{
			show[x][y] = '!';
			break;
		}
	}
}
	

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	// 0. ��ʾ����
	// 1. ѡ������
	// 2. �ж�����Ϸ���
	// 3. �ж��Ƿ�����
	// 4. �ж���Χ�׵�����
	// 5. ����Χ����������
	// 6. �����
	// 7. �ж���Ӯ

	int mine_count = EASY;
	int count = 0;
	int win = 0;

	int x = 0;
	int y = 0;
	int i = 0;

	char ch = 0;

	//system("cls");
	DisplayBoard(show, row, col);

	printf("������������:>");
	scanf("%d %d", &x, &y);

	while (win < (row * col - EASY))
	{
		while (i > 0)
		{
			//system("cls");
			printf("�׻���%d��\n", mine_count);
			DisplayBoard(show, row, col);
			printf("������밴y/Y,�����밴�����:>");

			while ((ch = getchar()) != '\n');
			scanf("%c", &ch);

			if (ch == 'y' || ch == 'Y')
			{
				mark_mine(show);
				mine_count--;
			}
			else
			{
				DisplayBoard(show, row, col);
				printf("������������:>");
				scanf("%d %d", &x, &y);
				break;
			}

			/*DisplayBoard(show, row, col);
			printf("������������:>");
			scanf("%d %d", &x, &y);*/
		}
		
		//while ((ch = getchar()) != '\n');
		//scanf("%c %d %d", &o, &x, &y);
		//scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				//count = get_mine_count(mine, x, y);
				//show[x][y] = count + '0';
				open_round(mine, show, x, y, &win);
				i = 1;
			}
			else
			{
				//system("cls");
				printf("�㱻ը���ˣ�\n��Ϸ������\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("����Ƿ���\n");
			i = 0;
			printf("������������:>");
			scanf("%d %d", &x, &y);
		}
	}

	if (win == row * col - EASY)
	{
		printf("��Ӯ�ˣ�\n");
		DisplayBoard(show, row, col);
		system("pause");
	}
}