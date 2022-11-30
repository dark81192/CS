#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char password[32] = { 0 };
	int tmp = 0;

	printf("ÊäÈëÃÜÂë:>");
	scanf("%s", password);
	printf("È·ÈÏÃÜÂë(Y/N):>");
	while ((tmp = getchar()) != '\n')	//Çå³ý»º´æÇø
	{
		;	//¿ÕÓï¾ä
	}
	int ch = getchar();
	if ((ch == 'Y') || (ch == 'y'))
		printf("SUCCESS!\n");
	else
		printf("ERROR!\n");

	return 0;
}