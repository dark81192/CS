#include "Cases_functions.h"

void FFO()
{
	gets();
	printf("Enter a floating-point number:>");

	float num = 0;

	scanf_s("%f", &num);

	int S = 0;
	int M = 0;
	int E = 0;

	if ((int)num >> 31 == 1)
		S = 1;

	return;
}