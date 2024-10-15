#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

void PrintContacts(const Contacts* pcon)
{
	printf("%-4s\t%-4s\t%-3s\t%-12s\t%-20s\n", "Name", "Sex", "Age", "Phone Number", "Address");

	for (int i = 0; i < pcon->sz; i++)
	{
		printf("%-4s\t%-4s\t%-3d\t%-12s\t%-20s\n",
			pcon->data[i].name,
			pcon->data[i].sex,
			pcon->data[i].age,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

void InitContacts(Contacts* pcon)
{
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}

void AddContact(Contacts* pcon)
{
	if (pcon->sz == MAX)
	{
		printf("This contacts is full\n");
		return;
	}

	printf("Please enter the contact name:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("Please enter the gender of the contact:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("Please enter the age of the contact:>");
	scanf("%d", &pcon->data[pcon->sz].age);
	printf("Please enter the contact phone number:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("Please enter the contact address:>");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;

	printf("Successfully Added!\n");

	PrintContacts(pcon);
}

int SearchContact(const Contacts* pcon, char* ptr_name)
{
	char name[MAX_NAME] = { 0 };

	if (pcon->sz)
	{
		printf("The Contacts is empty!\n");

		return -1;
	}
	else if (ptr_name == NULL)
	{
		printf("Please enter the name of the contacts you want to search:>");
		scanf("%s", name);

		ptr_name = name;
	}

	for (int i = 0; i < pcon->sz; i++)
	{
		//if (strcmp(pcon->data[i].name, ptr_name) == 0 || strcmp(pcon->data[i].name, name) == 0)
		if (strcmp(pcon->data[i].name, ptr_name) == 0)
		{
			return i;
		}
	}

	printf("No contact name was search!\n");

	return -2;
}

void DelContact(Contacts* pcon)
{
	if (pcon->sz)
	{
		printf("The Contacts is empty!\n");
		return;
	}

	char name[MAX_NAME] = { 0 };

	printf("Please enter the name of the Contacts you want to delete:>");
	scanf("%s", name);

	int pos = SearchContact(pcon, &name);

	if (pos >= 0)
	{
		for (int i = pos; i < pcon->sz; i++)
		{
			pcon->data[i] = pcon->data[i + 1];
		}

		printf("Delete the Contact successfully!\n");

		PrintContacts(pcon);

		pcon->sz--;
	}
	else if(pos == -2)
	{
		printf("Please confirm the name of the contact person is correct!\n");
	}
}
