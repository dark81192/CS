#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "dec_num.h"
#include "my_strlen.h"
#include "factorial.h"
#include "fib.h"
#include "hannotTower.h"
#include "fog.h"

int main()
{
	int option;
	printf("1.递归打印分解数字\n");
	printf("2.递归判断字符数组长度\n");
	printf("3.递归n的阶乘\n");
	printf("4.递归求第n个斐切那波数(递归迭代方式有缺陷速度较慢，使用循环相对合适)\n");
	printf("5.循环求第n个斐切那波数\n");
	printf("6.递归求诺塔\n");
	printf("7.递归青蛙跳台阶跳法次数\n");
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
	case 4:
		fib_rec();
		break;
	case 5:
		fib_l();
		break;
	case 6:
		hntower();
		break;
	case 7:
		fog();
		break;
	default:
		break;
	}
	return 0;
}