#include "Cases_functions.h"

void SodaProblem()
{
	int bottle = 0;
	int price = 1;
	int money = 20;
	int ret = 0;
	
	bottle = money / price;

	ret = bottle;

	while (bottle >= 2)
	{
		ret += bottle / 2;
		bottle = bottle / 2 + bottle % 2;
	}
	printf("%d\n", ret);
}