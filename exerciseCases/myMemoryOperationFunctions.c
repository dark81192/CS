#define _CRT_SECURE_NO_WARNINGS 1
#include "Cases_functions.h"

void myMemoryOperationsFunctionCasesPrint()
{
	printf("1. myMemcpy\n");
	printf("ELSE EXIT\n");
}

void myMemoryOperationsFunctionCasesUniversalScanf(void* dest, int sz_num)
{

}

void myMemcpyCase()
{
	int arr1[20] = { 0 };
	int arr2[20] = { 0 };


}

void myMemoryOperationsFunctionCases()
{
	myMemoryOperationsFunctionsCasesPrint();

	int option = 0;

	printf(":>");
	scanf("%d", &option);

	void (*parr[])() = { myMemcpyCase };

	if (option > 0 && option <= 1)
	{
		parr[option]();
	}
	else
	{
		return;
	}
}