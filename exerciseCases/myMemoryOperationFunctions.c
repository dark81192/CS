#define _CRT_SECURE_NO_WARNINGS 1
#include "Cases_functions.h"
#define memcpyWidth ((i * width) + width)

void myMemoryOperationFunctionCasesMenu()
{
	printf("1. myMemcpy\n");
	printf("2. myMemmove\n");
	printf("3. myMemcmp\n");
	printf("4. myMemset\n");
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

void* myMemmove(void* dest, void* src, int sz_num)
{
	void* ret = src;

	assert(dest && src);

	if (src > dest)
	{
		while (sz_num--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{
		while (sz_num--)
		{
			*((char*)dest + sz_num) = *((char*)src + sz_num);
		}
	}
}

void myMemmoveCase()
{
	char str[20] = { 0 };
	int arr1[20] = { 0 };
	int	sz_num = 0;

	//myMemoryOperationsFunctionCasesUniversal(arr1, sizeof(arr1)/sizeof(arr1[0]));
	printf("please enter a nums£º\nexample: 1234567890\n:>");
	scanf("%s", str);
	//printf("please enter a sz_num of digits to copy£º\n:>");
	printf("Please enter sz_num of byte to move£º\n:>");
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

	myMemmove(arr1 + 2, arr1, sz_num);

	for (int j = 0; j < i; j++)
	{
		printf("%d", arr1[j]);
	}

	printf("\n");
}

int myMemcmp(const void* ptr1, const void* ptr2, int sz_num)
{
	assert(ptr1 && ptr2);

	while (sz_num--)
	{
		if (*((char*)ptr1 + sz_num) == *((char*)ptr2 + sz_num))
		{
			return 0;
		}
		else if (*((char*)ptr1 + sz_num) > *((char*)ptr2 + sz_num))
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}

void* myMemset(void* ptr, int value, int sz_num)
{
	assert(ptr != NULL);

	while (sz_num--)
	{
		*((char*)ptr + sz_num) = value;
	}

	return ptr;
}

void myMemcmpCase()
{
	float arr1[] = { 1.0, 2.0, 3.0, 4.0 };
	float arr2[] = { 1.0, 1.5 };

	int ret = myMemcmp(arr1, arr2, 8);
	printf("The first eight bytes are compared back %d\n", ret);
}

void myMemsetCase()
{
	int value = 0;
	int num = 0;
	int arr[20] = { 0 };

	printf("Please enter the value to set:>");
	scanf("%d", &value);
	printf("Please enter the number of byte to set:>");
	scanf("%d", &num);
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d ", arr[i]);
	printf("\n");
	myMemset(arr, value, num);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void myMemoryOperationFunctionCases()
{
	myMemoryOperationFunctionCasesMenu();

	int option = 0;

	printf(":>");
	scanf("%d", &option);

	void (*pmemarr[])() = { NULL, myMemcpyCase, myMemmoveCase, myMemcmpCase, myMemsetCase };

	if (option > 0 && option <= 4)
	{
		pmemarr[option]();
	}
	else
	{
		return;
	}
}