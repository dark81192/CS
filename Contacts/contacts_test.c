#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

//1. ������ϵ��
//2. ɾ����ϵ��
//3. ������ϵ��
//4. �޸���ϵ��
//5. ����ͨѶ¼

void menu()
{
	printf("****************************************"); 
	printf("*******         Contacts         *******");
	printf("*******	1. Add		   2. Del    *******");
	printf("******* 3. Search      4. Modify *******");
	printf("******* 5. Sort        6. Print  *******");
	printf("*******         0. Exit          *******");
	printf("****************************************");
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

	InitContacts(con);
	
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