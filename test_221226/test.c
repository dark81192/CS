#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern void Multipleofthree();
extern void commonDivisor();
extern void runyear();
extern void primeNumber();

void menu()
{
	printf("1.��ӡ1-100֮�����ı���\n");
	printf("2.��ӡ�����������Լ��\n");
	printf("3.��ӡ1000-2000������������\n");
	printf("4.��ӡ100-200�����������\n");
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