#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

void printContacts()
{

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

	
}