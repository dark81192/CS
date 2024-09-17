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

void myStringUniversalScanf(char* str)
{
	assert(str != '\0');
	printf("Enter a string:>");
	scanf("%s", str);
}

void myStrcpyFunc(char* strDestination, const char* strSource)
{
	assert(strSource != '\0');
	
	while (*(strSource) != '\0')
	{
		*strDestination++ = *strSource++;
	}
}

void myStrlen()
{
	char str[20] = "";
	int len = 0;

	myStringUniversalScanf(str);
	len = myStrlenFunc(str);
	printf("This string has %d numbers.\n", len);
}

void myStrcpy()
{
	char str[20] = { 0 };
	char str1[20] = { 0 };

	myStringUniversalScanf(str);
	myStrcpyFunc(str1, str);
	
	printf("str = %s\n", str);
	printf("str1 = %s\n", str1);
}