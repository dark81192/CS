#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern void Multipleofthree();
extern void commonDivisor();

void menu()
{
	printf("1.��ӡ1-100֮�����ı���\n");
	printf("2.��ӡ�����������Լ��\n");
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