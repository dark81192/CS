#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shutdown_func()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("������������ȡ���ػ���\n���ĵ��Խ���һ�����ڹػ�...\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
		system("shutdown -a");
	else
		goto again;
}