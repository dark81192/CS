#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "dec_num.h"
#include "my_strlen.h"
#include "factorial.h"
#include "fib.h"
#include "hannotTower.h"
#include "fog.h"

int main()
{
	int option;
	printf("1.�ݹ��ӡ�ֽ�����\n");
	printf("2.�ݹ��ж��ַ����鳤��\n");
	printf("3.�ݹ�n�Ľ׳�\n");
	printf("4.�ݹ����n������ǲ���(�ݹ������ʽ��ȱ���ٶȽ�����ʹ��ѭ����Ժ���)\n");
	printf("5.ѭ�����n������ǲ���\n");
	printf("6.�ݹ���ŵ��\n");
	printf("7.�ݹ�������̨����������\n");
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
	case 4:
		fib_rec();
		break;
	case 5:
		fib_l();
		break;
	case 6:
		hntower();
		break;
	case 7:
		fog();
		break;
	default:
		break;
	}
	return 0;
}