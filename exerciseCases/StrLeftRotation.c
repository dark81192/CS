#define _CRT_SECURE_NO_WARNINGS 1

#include "Cases_functions.h"

//void rverser(char* strl, char* strr)
//{
//	while (strl < strr)
//	{
//		int tmp = *strl;
//		*strl++ = *strr;
//		*strr-- = tmp;
//	}
//}

void str_left_rotation_0(char* str, int k)
{
	int len = strlen(str);
	int i = 0;

	for (i = 0; i < k; i++)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		*(str + len - 1) = tmp;
	}
}

void str_left_rotation_1(char* str, int k)
{
	int len = strlen(str);
	int right = len - 1;
	reverser_func(str, str + k - 1);
	reverser_func(str + k, str + right);
	reverser_func(str, str + right);
}

void StrLeftRotation()
{
	char str[] = { "ABCDEFG" };
	int k = 2;

	str_left_rotation_0(str, k);
	printf("1. %s\n", str);

	char str1[] = { "ABCDEFG" };

	str_left_rotation_1(str1, k);
	printf("2. %s\n", str1);
}