#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define interest principal * (profitability * 0.01)
#define pai principal + interest

int main()
{
	int i = 1, year = 0;

	float profitability = 0.0;
	float  principal = 0;

	char str1[] = "������һ���̶����껯����(����3.3% ���� 3.3)��";
	char str2[] = "�����븴������(��λ��)��";
	char str3[] = "�����뱾��";

	printf("%s", str1);
	scanf("%f", &profitability);
	printf("%s", str2);
	scanf("%d", &year);
	printf("%s", str3);
	scanf("%f", &principal);

	while (year >= i)
	{
		if(i == 1)
			printf("���ʣ�%.2f%\n����ִ�����ڣ�%d\n����%.2f\n\t\n\t\n\t\n", profitability, year, principal);
		printf("��%d��\n", i);
		printf("��Ϣ�ϼƣ�%f\n" ,pai);
		principal = pai;
		i++;
	}

	return 0;
}