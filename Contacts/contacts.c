#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

void InitContacts(Contacts* pcon)
{
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}