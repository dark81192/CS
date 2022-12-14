#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char password[16] = "wawawahahaha";
	char login_pw[16];
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		scanf("%s", login_pw);
		if (strcmp(password, login_pw) == 0)
		{
			printf("successed\n");
			system("pause");
			i = 3;
			break;
		}
		printf("你还能输入 %u 次密码！\n", abs(i - 2));
	}

	if(i == 3)
		printf("faild\n");

	return 0;
}