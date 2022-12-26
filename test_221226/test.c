#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern void Multipleofthree();
extern void commonDivisor();
extern void runyear();
extern void primeNumber();

void menu()
{
	printf("1.打印1-100之间三的倍数\n");
	printf("2.打印两个数的最大公约数\n");
	printf("3.打印1000-2000年间的所有闰年\n");
	printf("4.打印100-200间的所有素数\n");
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
	case 3:
		runyear();
		break;
	case 4:
		primeNumber();
		break;
	default:
		printf("input error\n");
		break;
	}
	return 0;
}