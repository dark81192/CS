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

char* myStrcpyFunc(char* strDestination, const char* strSource)
{
	char* ret = strDestination;

	assert(strSource && strDestination);
	
	while (*strSource)
	{
		*strDestination++ = *strSource++;
	}
	*strDestination = *strSource;

	return ret;
}

char* myStrcatFunc(char* strDestination, const char* strSource)
{
	char* ret =  strDestination;

	assert(strSource && strDestination);

	while (*strDestination++);

	while (*strSource)
	{
		*(strDestination++ - 1) = *strSource++;
	}

	*(strDestination - 1) = *strSource;

	return ret;
}

int myStrcmpFunc(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
	}

	return *str1 - *str2;
}

char* myStrncpyFunc(char* strDestination, const char* strSource, int sz_num)
{
	assert(strDestination && strSource);

	char* tmp = strDestination;

	while (sz_num--)
	{
		*strDestination++ = *strSource++;
	}

	return tmp;
}

char* myStrstrFunc(const char* string, const char* strCharSet)
{
	assert(string && strCharSet);

	char* str1 = NULL;
	char* str2 = NULL;

	while (*string)
	{
		str1 = string;
		str2 = strCharSet;

		while (*string && *str2 && (*string == *str2))
		{
			string++;
			str2++;
		}

		if (*str2 == '\0')
		{
			return str1;
		}

		string++;
	}

	return NULL;
}

void myStrlen()
{
	char str[20] = " ";

	myStringUniversalScanf(str);
	printf("This string has %d numbers.\n", myStrlenFunc(str));
}

void myStrcpy()
{
	char str[20] = { 0 };
	char str1[20] = { 0 };

	myStringUniversalScanf(str);
	printf("str = %s\n", str);
	printf("str1 = %s\n", myStrcpyFunc(str1, str));
}

void myStrcat()
{
	char str[20] = { 0 };
	char str1[20] = { 0 };

	printf("strDestination:\n");
	myStringUniversalScanf(str);
	printf("strSource:\n");
	myStringUniversalScanf(str1);
	printf("str = %s\n", myStrcatFunc(str, str1));
}

void myStrcmp()
{
	char str[20] = { 0 };
	char str1[20] = { 0 };
	char tmp[20] = { 0 };

	printf("str1:\n");
	myStringUniversalScanf(str);
	printf("str2:\n");
	myStringUniversalScanf(str1);
	
	if (myStrcmpFunc(str, str1) > 0)
	{
		myStrcpyFunc(tmp, "greater than");
	}
	else if (myStrcmpFunc(str, str1) < 0)
	{
		myStrcpyFunc(tmp, "less than");
	}
	else
	{
		myStrcpyFunc(tmp, "equal to");
	}

	printf("String 1 is %s string 2\n", tmp);
}

void myStrncpy()
{
	char str[20] = { 0 };
	char str1[20] = { 0 };
	int sz_num = 0;

	printf("str1:\n");
	myStringUniversalScanf(str);
	printf("str2:\n");
	myStringUniversalScanf(str1);
	printf("sz_num:>");
	scanf("%d", &sz_num);
	printf("%s\n", myStrncpyFunc(str, str1, sz_num));
}

void myStrstr()
{
	char str1[20] = { 0 };
	char str2[20] = { 0 };

	printf("str1:\n");
	myStringUniversalScanf(str1);
	printf("str2:\n");
	myStringUniversalScanf(str2);

	char* pdest = myStrstrFunc(str1, str2);

	if (pdest != NULL)
	{
		int result = pdest - str1 + 1;
		printf("%s found at position %d\n", str2, result);
	}
	else
	{
		printf("%s not found\n", str2);
	}
}