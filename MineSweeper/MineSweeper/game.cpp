#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------扫雷--------\n");
	for (i = 0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------扫雷--------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
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
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标：>");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("Game Over!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//不是雷，就统计x，y周围有几个雷
				int c = GetMineCount(mine, x, y);
				show[x][y] = c + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入。\n");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}