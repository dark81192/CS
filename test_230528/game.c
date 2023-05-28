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
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] + 
		mine[x - 1][y + 1] - 8 * '0';
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

	while (win < (row * col - EASY))
	{
		printf("�׻���%d��\n", mine_count);
		DisplayBoard(show, row, col);
		printf("������������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
			}
			else
			{
				printf("�㱻ը���ˣ�\n��Ϸ������\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			win++;
		}
		else 
		{
			printf("����Ƿ���\n");
		}
	}
	if (win == row * col - EASY)
	{
		printf("��Ӯ�ˣ�\n");
		system("pause");
	}
}