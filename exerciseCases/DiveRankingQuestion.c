#include "Cases_functions.h"

void DiveRanking()
{
	//A : B == 2, A == 3;
	//B : B == 2, E == 4;
	//C : C == 1, D == 2;
	//D : C == 5, D == 3;
	//E : E == 4, A == 1;
	//ABCDE都有一半对

	int A, B, C, D, E;

	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) && ((C == 1)
							+ (D == 2) == 1) && ((C == 5) + (D == 3) == 1) && ((E == 4) + (A == 1) == 1))
							 && (A * B * C * D * E == 120))
						{
							printf("A = %d, B = %d, C = %d, D = %d, E = %d", A, B, C, D, E);
							//break;
						}
					}
				}
			}
		}
	}

}