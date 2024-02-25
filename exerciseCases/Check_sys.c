#include "Cases_functions.h"

int Check_sys_func(char* p)
{
	return *p;
}

void Check_sys()
{
	int i = 1;
	char* p = (char*)&i;
	
	if (Check_sys_func(p))
		printf("Small-ended storage\n");
	else
		printf("Big-end storage\n");

	return;
}