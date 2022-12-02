#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//¼ÆËãnµÄ½×³Ë
	int n, s, i, j;

	while (scanf("%d", &n) != EOF)
	{
		for (i = 1, s = 1; i <= n; i++)
		{
			s *= i;
		}
		printf("%d\n", s);
		system("pause");
		system("cls");
	}

	return 0;
}