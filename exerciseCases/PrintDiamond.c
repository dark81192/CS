#include "cases_functions.h"

#define line 99

void PrintDiamond()
{
	char ch = '*';
	char sp = ' ';
	int i = 0;
	int j = 0;

	for (i = line; i > 0; i -= 2)
	{
		for (j = i / 2; j > 0; j--)
			printf("%c", sp);
		for (int k = line; k >= i; k--)
			printf("%c", ch);
		printf("\n");
	}	
	for (i = 1; i < line; i += 2)
	{
		for (j = 0; j < i; j += 2)
			printf("%c", sp);
		for (int k = line - i - 1; k > 0; k--)
			printf("%c", ch);
		printf("\n");
	}
}