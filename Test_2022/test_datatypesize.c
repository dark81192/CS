#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <float.h>

//��������������͵Ĵ�С

int main()
{
	char str[10], str1[1];
	str1[0] = 'y';
	printf("Hello! The Handsome & Pretty!\n���Ǻã�˧����Ů��\n");
	printf("This is a query software of the data type size.\n����һ���������ʹ�С��ѯ�����\n");
	while (str1[0]=='y')
	{
		printf("Please enter a name for the data type.\n�������������͵����֡�\n");
		scanf("%s", str);
		if (str[0] == 'i'/* && str[1] == 'n' && str[2] == 't'*/) {
			//printf("int���͵Ĵ洢��С�� 2 �� 4 �ֽ�,ֵ��Χ�� -32,768 �� 32,767 �� -2,147,483,648 �� 2,147,483,647 ֮�䡣\n");
			printf("int �洢��С: %lu\n", sizeof(int));
			printf("int ��Сֵ: %d\n", INT_MIN);
			printf("int ���ֵ: %d\n", INT_MAX);
		}
		else if (str[0] == 'c') {
			//printf("char���͵Ĵ洢��С�� 1 �ֽ�,ֵ��Χ�� -128 �� 127 �� 0 �� 255 ֮�䡣\n");
			printf("char �洢��С: %d\n", CHAR_BIT);
			printf("char ��Сֵ: %d\n", CHAR_MIN);
			printf("char ���ֵ: %d\n", CHAR_MAX);
		}
		else if (str[0] == 's') {
			//printf("short���͵Ĵ洢��С�� 2 �ֽ�,ֵ��Χ�� -32,768 �� 32,767 ֮�䡣\n");
			printf("short �洢��С: %d\n", sizeof(short));
			printf("short ��Сֵ: %d\n", SHRT_MIN);
			printf("short ���ֵ: %d\n", SHRT_MAX);
		}
		else if (str[0] == 'l') {
			//printf("long���͵Ĵ洢��С�� 4 �ֽ�,ֵ��Χ�� -2,147,483,648 �� 2,147,483,647 ֮�䡣\n");
			printf("long �洢��С: %d\n", sizeof(long));
			printf("long ��Сֵ: %d\n", LONG_MIN);
			printf("long ���ֵ: %d\n", LONG_MAX);
		}
		else if (str[0] == 'f') {
			//printf("float���͵Ĵ洢��С�� 4 �ֽ�,ֵ��Χ�� 1.2E-38 �� 3.4E+38 ֮��,С��λ���� 6 λ��Чλ��\n");
			printf("float �洢��С: %lu\n", sizeof(float));
			printf("float ��Сֵ: %E\n", FLT_MIN);
			printf("float ���ֵ: %E\n", FLT_MAX);
			printf("float ���С��λ: %d\n", FLT_DIG);
		}
		else if (str[0] == 'd') {
			//printf("double���͵Ĵ洢��С�� 8 �ֽ�,ֵ��Χ�� 1.2E-38 �� 3.4E+38 ֮��,С��λ���� 15 λ��Чλ��\n");
			printf("double �洢��С: %lu\n", sizeof(double));
			printf("double ��Сֵ: %E\n", DBL_MIN);
			printf("double ���ֵ: %E\n", DBL_MAX);
			printf("double ���С��λ: %d\n", DBL_DIG);
		}
		printf("������ѯ�밴Y��\n");
		str1[0] = '0';
		scanf("%s", str1);
	}
	return 0;
}