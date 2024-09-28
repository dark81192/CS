#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shutdown_func()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请输入我是猪取消关机！\n您的电脑将在一分钟内关机...\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
		system("shutdown -a");
	else
		goto again;
}