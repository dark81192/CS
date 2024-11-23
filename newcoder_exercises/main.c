#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "newcoder_exercises.h"

int main()
{
	int option = 0;

	menu();

	printf("please enter options:>");
	scanf("%d", &option);

	void (*exercises[])() = { NULL, xPattern, CivilServiceInterview, TheOrderedSequenceInsertsAnInteger };

	if (option >= 0 || option < 3)
	{
		exercises[option]();
	}
	else
	{
		printf("error!\n");
	}

	return 0;
}