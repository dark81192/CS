#define	_CRT_SECURE_NO_WARNINGS 1

#include "Cases_functions.h"

void menu()
{
	printf("1. Str_reverser\n");
	printf("2. Check_sys_byte-order\n");
	printf("3. Floating-point formula output(unfinished)\n");
	printf("4. Sum of Sn(recursion)\n");
	printf(">");
}

int main()
{
	int o = 0;

	menu();

	scanf("%d", &o);

	switch (o)
	{
		case 1:
			reverser();
		case 2:
			Check_sys();
		case 3:
			FFO();
		case 4:
			SumOfSn();
		default:
			printf("\n");
	}

	return 0;
}