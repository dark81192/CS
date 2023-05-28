#pragma once

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char baord[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);