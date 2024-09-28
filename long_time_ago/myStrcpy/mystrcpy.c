#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "assert.h"

char* myStrcpy(char* str, const char* str1)
{
	assert(str != NULL);
	assert(str1 != NULL);

	char* ret = str;

	while (*str++ = *str1++)
	{
		;
	}

	return ret;
}

int main()
{
	char str[] = { "*******************"};
	char str1[] = { "Hello strcpy" };

	printf("%s\n", myStrcpy(str, str1));

	return 0;
}