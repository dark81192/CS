#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern void Multipleofthree();
extern void commonDivisor();

void menu()
{
	printf("1.打印1-100之间三的倍数\n");
	printf("2.打印两个数的最大公约数\n");
}

int main()
{
	int option = 0;
	menu();
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		Multipleofthree();
		break;
	case 2:
		commonDivisor();
		break;
	}
	return 0;
}