#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	int count = 0;

	scanf("%d %d", &x, &y);

	//��һ�ַ�ʽ
	/*for (int i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) != ((y >> i) & 1))
			count++;
	}*/

	//�ڶ��ַ�ʽ���
	int ret = x ^ y;

	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}

	//�ֱ��ӡ��x������λ��ż��λ
	printf("����λ: ");

	for (int i = 31; i >= 0; i-= 2)
	{
		if ((x >> i) & 1)
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}
	}

	printf("\nż��λ: ");

	for (int i = 30; i >= 0; i -= 2)
	{
		if ((x >> i) & 1)
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}
	}

	printf("\n��%dλ��ͬ\n", count);

	return 0;
}