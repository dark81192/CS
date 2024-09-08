#define _CRT_SECURE_NO_WARNINGS 1

#include "Cases_functions.h"

//void rverser(char* strl, char* strr)
//{
//	assert(strl);
//  assert(str2);
//	while (strl < strr)
//	{
//		int tmp = *strl;
//		*strl++ = *strr;
//		*strr-- = tmp;
//	}
//}

void str_left_rotation_0(char* str, int k)
{
	assert(str);
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
	assert(str);
	int len = strlen(str);
	int right = len - 1;
	reverser_func(str, str + k - 1);
	reverser_func(str + k, str + right);
	reverser_func(str, str + right);
}

void StrLeftRotation_func(char* str, char* str1)
{
	int k = 2;
	str_left_rotation_0(str, k);
	printf("1. %s\n", str);
	str_left_rotation_1(str1, k);
	printf("2. %s\n", str1);
}

int Judging_func(char* str, char* str1)
{
	int len = strlen(str);
	int k = 7;
	int i = 0;
	
	for (i = 0; i < k; i++)
	{
		int j = 0;
		int ret = strcmp(str, str1);

		if (ret == 0)
		{
			return 0;
		}

		int tmp = *str + i;

		for (j = 0; j < k - 1; j++)
		{
			*(str + j) = *(str + j + 1);
		}

		*(str + k - 1) = tmp;
	}
}

void Judging(char* str, char* str1)
{
	//printf("Determine wheter there is a left-handedness relationship\n");
	while (1)
	{
		printf("Please enter the str1:");
		scanf("%s", *(&str));
		printf("Please enter the str2:");
		scanf("%s", *(&str1));

		if (strlen(str) != strlen(str1))
		{
			printf("len err\n");
		}
		else
		{
			break;
		}
	}
	int ret = Judging_func(str, str1);
	if (ret == 0)
	{
		printf("str1 is equal to str2\n");
	}
	else
	{
		printf("str1 is not equal to str2\n");
	}
}

int Judging1_func(char* str, char* str1)
{
	strncat(str, str, strlen(str));
	char* ret = strstr(str, str1);

	return ret == NULL;
}

void Judging1(char* str, char* str1)
{
	while (1)
	{
		printf("Please enter the str1:");
		scanf("%s", *(&str));
		printf("Please enter the str2:");
		scanf("%s", *(&str1));

		if (strlen(str) != strlen(str1))
		{
			printf("len err\n");
		}
		else
		{
			break;
		}
	}

	int ret = Judging1_func(str, str1);

	if (ret == 0)
	{
		printf("str1 is equal to str2\n");
	}
	else
	{
		printf("str1 is not equal to str2\n");
	}
}

void StrLeftRotation()
{
	char str[20] = { "ABCDEFG" };
	char str1[20] = { "ABCDEFG" };
	int option = 0;

	void (*op[3])() = {StrLeftRotation_func, Judging, Judging1};

	printf("0.StrLeftRotation_func_demo\n");
	printf("1.Judging_func_demo\n");
	printf("2.Judging_func_demo1(strstr + strcat realize)\n");
	scanf("%d", &option);

	while (1)
	{
		if (option >= 0 && option < 3)
		{
			op[option](str, str1);
			break;
		}
		else
		{
			printf("enter err\n");
		}
	}
}
