#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "dec_num.h"
#include "my_strlen.h"
#include "factorial.h"

int main()
{
	int option;
	printf("1.递归打印分解数字\n");
	printf("2.递归判断字符数组长度\n");
	printf("3.递归n的阶乘\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		dec_num();
		break;
	case 2:
		my_strlen();
		break;
	case 3:
		factorial();
		break;
	default:
		break;
	}
	return 0;
}