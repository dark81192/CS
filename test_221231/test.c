#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "dec_num.h"
#include "my_strlen.h"
#include "factorial.h"

int main()
{
	int option;
	printf("1.�ݹ��ӡ�ֽ�����\n");
	printf("2.�ݹ��ж��ַ����鳤��\n");
	printf("3.�ݹ�n�Ľ׳�\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		dec_num();
		break;
	case 2:
		my_strlen();
		break;
	case 3:
		factorial();
		break;
	default:
		break;
	}
	return 0;
}