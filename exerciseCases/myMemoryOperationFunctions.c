#define _CRT_SECURE_NO_WARNINGS 1
#include "Cases_functions.h"
#define memcpyWidth ((i * width) + width)

void myMemoryOperationFunctionCasesMenu()
{
	printf("1. myMemcpy\n");
	printf("ELSE EXIT\n");
}

//void myMemoryOperationFunctionCasesUniversalScanf(void* destination, int sz_num)
//{
//	
//}

//void myMemcpy(void* destination, const void* source, int width, int sz_num)
//{
//	assert(source && destination);
//
//	int i = 0;
//
//	for (i = 0; i < sz_num * width; i++)
//	{
//		*((char*)destination + i) = *((char*)source + i);
//	}
//
//	return;
//}

void* myMemcpy(void* destination, const void* source, int sz_num)
{
	void* ret = destination;

	assert(source && destination);

	for (sz_num; sz_num > 0; sz_num--)
	{
		*((char*)destination)++ = *((char*)source)++;
	}

	return ret;
}

void myMemcpyCase()
{
	char str[20] = { 0 };
	int arr1[20] = { 0 };
	int arr2[20] = { 0 };
	int	sz_num = 0;

	//myMemoryOperationsFunctionCasesUniversal(arr1, sizeof(arr1)/sizeof(arr1[0]));
	printf("please enter a nums£º\nexample: 1234567890\n:>");
	scanf("%s", str);
	//printf("please enter a sz_num of digits to copy£º\n:>");
	printf("please enter a sz_num of byte to copy£º\n:>");
	scanf("%d", &sz_num);

	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (isdigit(str[i] - '0'))
		{
			printf("str[%d]: %c is not a digit\n", i, str[i]);
			return;
		}

		arr1[i] = str[i] - '0';
	}

	//myMemcpy(arr2, arr1, sizeof(arr1) / sizeof(arr1[0]), sz_num);
	myMemcpy(arr2, arr1, sz_num);


	for (i = 0; i < (sz_num / sizeof(arr2[0])); i++)
	{
		printf("%d", arr2[i]);
	}

	printf("\n");
}

void myMemoryOperationFunctionCases()
{
	myMemoryOperationFunctionCasesMenu();

	int option = 0;

	printf(":>");
	scanf("%d", &option);

	void (*pmemarr[])() = { NULL, myMemcpyCase };

	if (option > 0 && option <= 1)
	{
		pmemarr[option]();
	}
	else
	{
		return;
	}
}