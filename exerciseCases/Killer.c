#include "Cases_functions.h"

void Killer()
{
	char killer = 0;

	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			printf("Killer: %c\n", killer);
	}
}