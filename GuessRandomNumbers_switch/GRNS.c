#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdio.h>


void options()
{
	printf("**********************\n");
	printf("******1.开始游戏******\n");
	printf("******2.退出游戏******\n");
	printf("**********************\n");
}

void game(t)
{
	int random = rand() % 100 + 1;
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &t);
		if (t == random)
		{
			printf("恭喜你猜对了!\n");
			break;
		}
		else if (t < random)
			printf("猜小了\n");
		else
			printf("猜大了\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int option = 0, t = 0;
	do
	{
		options();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
	} while (option != 2);
	return 0;
}