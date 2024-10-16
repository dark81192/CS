#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

//1. ������ϵ��
//2. ɾ����ϵ��
//3. ������ϵ��
//4. �޸���ϵ��
//5. ����ͨѶ¼
//6. ��ӡͨѶ¼

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

	//����ͨѶ¼
	Contacts con;

	InitContacts(&con);
	
	menu();

	do
	{
		if (input != 0)
		{
			printf("\n****************************************\n\n");
			menu();
		}

		printf("Please enter option:>");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con, NULL);
			break;
		case MODIFY:
			ModifyContact(&con);
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