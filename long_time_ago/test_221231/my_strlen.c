#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int my_strlen_func(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen_func(str + 1);
	else
		return 0;
}

void my_strlen()
{
	char arr[20] = { 0 };
	printf("输入字符串：");
	scanf("%s", arr);
	printf("字符长度为：%d\n", my_strlen_func(arr));
}