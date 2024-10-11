#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

//1. 增加联系人
//2. 删除联系人
//3. 查找联系人
//4. 修改联系人
//5. 排序通讯录
//6. 打印通讯录

void menu()
{
	printf("****************************************\n"); 
	printf("*******         Contacts         *******\n");
	printf("*******	1. Add         2. Del    *******\n");
	printf("******* 3. Search      4. Modify *******\n");
	printf("******* 5. Sort        6. Print  *******\n");
	printf("*******         0. Exit          *******\n");
	printf("****************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;

	//创建通讯录
	Contacts con;

	InitContacts(&con);
	
	do
	{
		menu();

		printf("Please enter option:>");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case PRINT:
			break;
		case EXIT:
			break;
		default:
			break;
		}

	} while (input);

	return 0;
}