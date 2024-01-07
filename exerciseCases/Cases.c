#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void reverser(char* strl, char* strr)
{
	while (strl < strr)
	{
		char tmp = 0;
		tmp = *strl;
		*strl++ = *strr;
		*strr-- = tmp;
	}
}

int main()
{
	//The first method.
	/*char str[100] = { '\0'};
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
	}*/

	//The second method.
	char str[100] = { 0 };

	gets(str);

	int i = 0;

	while (str[i] != '\0')
		i++;

	int len = i - 1;

	reverser(str, str + len);
 
	int left = 0;
	int right = -1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			left = right + 1;
			right = i;

			reverser(str + left, str + right - 1);
		}
	}

	printf("%s \n", str);

	return 0;
}