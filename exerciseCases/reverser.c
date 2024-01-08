#include "Cases_functions.h"

void reverser_func(char* strl, char* strr)
{
	while (strl <= strr)
	{
		char tmp = 0;
		tmp = *strl;
		*strl++ = *strr;
		*strr-- = tmp;
	}
}

void reverser()
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

	gets();
	gets(str);

	int i = 0;

	while (str[i] != '\0')
		i++;

	int len = i - 1;

	reverser_func(str, str + len);

	int left = 0;
	int right = -1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			left = right + 1;
			right = i;

			reverser_func(str + left, str + right - 1);
		}
	}

	printf("%s \n", str);
}