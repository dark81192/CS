#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <float.h>

//输出各个数据类型的大小

int main()
{
	char str[10], str1[1];
	str1[0] = 'y';
	printf("Hello! The Handsome & Pretty!\n你们好！帅哥美女！\n");
	printf("This is a query software of the data type size.\n这是一款数据类型大小查询软件。\n");
	while (str1[0]=='y')
	{
		printf("Please enter a name for the data type.\n请输入数据类型的名字。\n");
		scanf("%s", str);
		if (str[0] == 'i'/* && str[1] == 'n' && str[2] == 't'*/) {
			//printf("int类型的存储大小有 2 或 4 字节,值范围在 -32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647 之间。\n");
			printf("int 存储大小: %lu\n", sizeof(int));
			printf("int 最小值: %d\n", INT_MIN);
			printf("int 最大值: %d\n", INT_MAX);
		}
		else if (str[0] == 'c') {
			//printf("char类型的存储大小有 1 字节,值范围在 -128 到 127 或 0 到 255 之间。\n");
			printf("char 存储大小: %d\n", CHAR_BIT);
			printf("char 最小值: %d\n", CHAR_MIN);
			printf("char 最大值: %d\n", CHAR_MAX);
		}
		else if (str[0] == 's') {
			//printf("short类型的存储大小有 2 字节,值范围在 -32,768 到 32,767 之间。\n");
			printf("short 存储大小: %d\n", sizeof(short));
			printf("short 最小值: %d\n", SHRT_MIN);
			printf("short 最大值: %d\n", SHRT_MAX);
		}
		else if (str[0] == 'l') {
			//printf("long类型的存储大小有 4 字节,值范围在 -2,147,483,648 到 2,147,483,647 之间。\n");
			printf("long 存储大小: %d\n", sizeof(long));
			printf("long 最小值: %d\n", LONG_MIN);
			printf("long 最大值: %d\n", LONG_MAX);
		}
		else if (str[0] == 'f') {
			//printf("float类型的存储大小有 4 字节,值范围在 1.2E-38 到 3.4E+38 之间,小数位精度 6 位有效位。\n");
			printf("float 存储大小: %lu\n", sizeof(float));
			printf("float 最小值: %E\n", FLT_MIN);
			printf("float 最大值: %E\n", FLT_MAX);
			printf("float 最大小数位: %d\n", FLT_DIG);
		}
		else if (str[0] == 'd') {
			//printf("double类型的存储大小有 8 字节,值范围在 1.2E-38 到 3.4E+38 之间,小数位精度 15 位有效位。\n");
			printf("double 存储大小: %lu\n", sizeof(double));
			printf("double 最小值: %E\n", DBL_MIN);
			printf("double 最大值: %E\n", DBL_MAX);
			printf("double 最大小数位: %d\n", DBL_DIG);
		}
		printf("继续查询请按Y键\n");
		str1[0] = '0';
		scanf("%s", str1);
	}
	return 0;
}