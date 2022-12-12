#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	char str1[] = "Welcome to C!!!";
	char str2[] = "###############";
	int len = strlen(str1);
	int left = 0;
	int right = len - 1;

	do {
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n", str2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	} while (left <= right);
	return 0;
}