#define _CRT_SECURE_NO_WARNINGS 1
#include "Cases_functions.h"

int myStrlenFunc(const char* str)
{
	assert(str != NULL);

	int count = 0;

	if (*str == '\0')
	{
		return 0;
	}

	return 1 + myStrlenFunc(str + 1);
}

void myStrlen()
{
	char str[20] = "";

	printf("Enter a string:>");
	scanf("%s", str);

	int len = myStrlenFunc(str);

	printf("This string has %d numbers.\n", len);
}