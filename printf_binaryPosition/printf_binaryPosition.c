#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;

	scanf("%d", &a);

	int i = 0;
	int b = a;
	int count_num = 0;
	int count_len = 0;
	char bin[32];

	while (b != 0)
	{
		bin[count_len] = b % 2;
		if (b % 2 == 1)
			count_num++;
		b /= 2;
		count_len++;
	}

	count_len--;
	int l_one = 8;

	while (1)
	{
		if (count_len + 1 < l_one)
		{
			//bin[l_one] = 0;
			printf("0");
			if (l_one == 5)
			{
				printf(" ");
			}
		}
		else if (count_len + 1 >= l_one)
		{
			printf("%d", bin[count_len--]);
		}

		if (count_len < 0)
			break;

		l_one--;
	}

	printf(" 1ÓÐ%d¸ö\n", count_num);

	return 0;
}