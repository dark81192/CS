#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void des()
{
	printf("数字炸弹\n现在来开始游戏吧！\n现在已经有一个1-100的随机数了.\n输入你猜的数字:>");
}

void cl()
{
	char b;
	do
	{
		scanf("%c", &b);
	} while (b != '\n');
}

int main()
{
	srand((unsigned)time(NULL));
	int r = rand() %100;
	int xnum = 0, i, j = 1;

	des();
	 
	for (i = 0; i != 2; j++)
	{
		scanf("%d", &xnum);
		if (xnum == r) {
			printf("恭喜你猜对了！正确数字是%d\n你用了%d次猜对\n输入任意数字再来一次 输入2退出游戏\n", xnum, j);
			cl();
			scanf("%d", &i);
			system("cls");
			r = rand() % 100;
			if (i != 2)
				des();
		}
		else if (xnum < r) {
			printf("这个数字比正确数字小了\n再猜一次:>");
		}
		else {
			printf("这个数字比正确数字大了\n再猜一次:>");
		}
		cl();
	}

	return 0;
}