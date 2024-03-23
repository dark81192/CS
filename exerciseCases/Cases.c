#define	_CRT_SECURE_NO_WARNINGS 1

#include "Cases_functions.h"

void menu()
{
	printf(" 1. Str_reverser\n");
	printf(" 2. Check_sys_byte-order\n");
	printf(" 3. Floating-point formula output(unfinished)\n");
	printf(" 4. Sum of Sn\n");
	printf(" 5. Pointer print array\n");
	printf(" 6. Narcissitic Numbers(0-100000)\n");
	printf(" 7. Print diamond\n");
	printf(" 8. Soda problem\n");
	printf(" 9. Odd even sort\n");
	printf("10. Pascal's triangle\n");
	printf(">");
}

int main()
{
	int o = 0;

	menu();

	scanf_s("%d", &o);

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
		case 5:
			PointerPrintArray(); 
		case 6:
			NarcissisticNumber();
		case 7:
			PrintDiamond();
		case 8:
			SodaProblem();
		case 9:
			OddEvenSort();
		case 10:
			PascalTriangle();
		default:
			printf("\n");
	}

	return 0;
}