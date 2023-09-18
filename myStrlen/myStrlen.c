#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "assert.h"

int myStrlen(const char* str1)
{
	assert(str1 != NULL);

	int count = 0;

	while (*str1++ != '\0')
	{
		count++;
	}

	return count;
}

int main()
{
	char str1[] = { "123456789" };

	printf("%d", myStrlen(str1));

	return 0;
}