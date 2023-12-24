#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char str[100] = { '\0'};
	int i = 0;
	int j = 0;

	gets(str);

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; i >= 0; i--)
	{
		if (str[i] == ' ' || i == 0)
		{
			if (i == 0)
			{
				printf("%c\n", str[i]);
				break;
			}

			j = i + 1;

			while (str[j] != '\0' && str[j] != ' ')
			{
				printf("%c", str[j]);
				j++;
			}
			printf(" ");
		}
	}

	return 0;
}