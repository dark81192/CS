#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

void PrintContacts(const Contacts* pcon)
{
	printf("\n%-4s\t%-4s\t%-3s\t%-12s\t%-20s\n", "Name", "Sex", "Age", "Phone Number", "Address");

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

void CheckCapacity(Contacts* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pcon->data, (pcon->capacity + INC) * sizeof(PeoInfo));

		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += INC;
		}
		else
		{
			perror("AddContact");
			return;
		}
	}
}

void LoadContactsDat(Contacts* pcon)
{
	FILE* fp = fopen("Contacts.dat", "r");

	if (fp == NULL)
	{
		perror("LoadContactsDat");
		return;
	}

	PeoInfo tmp = { 0 };

	while (fread(&tmp, sizeof(PeoInfo), 1, fp))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}

	fclose(fp);
	fp = NULL;
}

void InitContacts(Contacts* pcon)
{
	pcon->sz = 0;
	pcon->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));

	if (pcon->data == NULL)
	{
		perror("InitContacts");
		return;
	}
	pcon->sz = 0;
	pcon->capacity = DEFAULT_SZ;
	
	LoadContactsDat(pcon);
}

void AddContact(Contacts* pcon)
{
	gets();

	if (pcon->sz == pcon->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pcon->data, pcon->capacity + INC * sizeof(PeoInfo));

		if (ptr != NULL)
		{	
			pcon->data = ptr;
			pcon->capacity += INC;
		}
		else
		{
			perror("AddContact");
			return;
		}
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

	printf("\nSuccessfully Added!\n");

	PrintContacts(pcon);
}

int SearchContact(const Contacts* pcon, char* ptr_name)
{
	char name[MAX_NAME] = { 0 };

	if (pcon->sz == 0)
	{
		printf("\nThe Contacts is empty!\n");

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
			printf("\n%-4s\t%-4s\t%-3d\t%-12s\t%-20s\n",
				pcon->data[i].name,
				pcon->data[i].sex,
				pcon->data[i].age,
				pcon->data[i].tele,
				pcon->data[i].addr);
			return i;
		}
	}

	printf("\nNo contact name was search!\n");

	return -2;
}

void DelContact(Contacts* pcon)
{
	if (pcon->sz == 0)
	{
		printf("\nThe Contacts is empty!\n");
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

		printf("\nDelete the Contact successfully!\n");

		pcon->sz--;

		PrintContacts(pcon);
	}
	else if(pos == -2)
	{
		printf("\nPlease confirm the name of the contact person is correct!\n");
	}
}

void ModifyContact(Contacts* pcon)
{
	assert(pcon);

	if (pcon->sz == 0)
	{
		printf("\nThe contacts is empty��\n");
		return;
	}
	else
	{
		char name[MAX_NAME] = { 0 };

		PrintContacts(pcon);

		printf("Please enter the name of the contacts you want to modify:>");
		scanf("%s", name);

		int pos = SearchContact(pcon, name);

		if (pos >= 0)
		{
			printf("Please enter the contact name:>");
			scanf("%s", pcon->data[pos].name);
			printf("Please enter the gender of the contact:>");
			scanf("%s", pcon->data[pos].sex);
			printf("Please enter the age of the contact:>");
			scanf("%d", &pcon->data[pos].age);
			printf("Please enter the contact phone number:>");
			scanf("%s", pcon->data[pos].tele);
			printf("Please enter the contact address:>");
			scanf("%s", pcon->data[pos].addr);
			printf("\n%-4s\t%-4s\t%-3d\t%-12s\t%-20s\n",
				pcon->data[pos].name,
				pcon->data[pos].sex,
				pcon->data[pos].age,
				pcon->data[pos].tele,
				pcon->data[pos].addr);
			printf("\nModify Successfully!\n");

			PrintContacts(pcon);

			return;
		}
		else if (pos == -2)
		{
			printf("\nPlease confirm the name of the contact person is correct!\n");
		}
	}
}

void SortContacts(Contacts* pcon)
{
	if (pcon->sz < 2)
	{
		printf("\nToo few contacts!\n");
		return;
	}
	else
	{
		int item = 1;
		
		enum items
		{
			name,
			sex,
			age,
			tele,
			addr
		};

		int byte[] = {0, 20, 40, 44, 55};

		printf("1.name 2.sex 3.age 4.telephone number 5.address\n");
		printf("Please enter the items you want to sort(ascending):>");
		scanf("%d", &item);

		int i = 0;

		//Contacts* pc = &pcon->data[i] + byte[item - 1];

		switch (item - 1)
		{
		case name:
			for (i = 0; i < pcon->sz - 1; i++)
			{
				int j = 0;
				for (j = i; j < pcon->sz - 1; j++)
				{
					int ret = strcmp(&pcon->data[j] + byte[item - 1], &pcon->data[j + 1] + byte[item - 1]);
					if (ret > 0)
					{
						PeoInfo tmp;
						tmp = pcon->data[j];
						pcon->data[j] = pcon->data[j + 1];
						pcon->data[j + 1] = tmp;
					}
				}
			}
			break;

		case sex:
			for (i = 0; i < pcon->sz - 1; i++)
			{
				int j = 0;
				for (j = i; j < pcon->sz - 1; j++)
				{
					int ret = strcmp(pcon->data[j].sex, pcon->data[j + 1].sex);
					if (ret > 0)
					{
						PeoInfo tmp;
						tmp = pcon->data[j];
						pcon->data[j] = pcon->data[j + 1];
						pcon->data[j + 1] = tmp;
					}
				}
			}
			break;

		case age:
			for (i = 0; i < pcon->sz - 1; i++)
			{
				int j = 0;
				for (j = i; j < pcon->sz - 1; j++)
				{
					int ret = strcmp(pcon->data[j].age, pcon->data[j + 1].age);
					if (ret > 0)
					{
						PeoInfo tmp;
						tmp = pcon->data[j];
						pcon->data[j] = pcon->data[j + 1];
						pcon->data[j + 1] = tmp;
					}
				}
			}
			break;

		case tele:
			for (i = 0; i < pcon->sz - 1; i++)
			{
				int j = 0;
				for (j = i; j < pcon->sz - 1; j++)
				{
					int ret = strcmp(pcon->data[j].tele, pcon->data[j + 1].tele);
					if (ret > 0)
					{
						PeoInfo tmp;
						tmp = pcon->data[j];
						pcon->data[j] = pcon->data[j + 1];
						pcon->data[j + 1] = tmp;
					}
				}
			}
			break;

		case addr:
			for (i = 0; i < pcon->sz - 1; i++)
			{
				int j = 0;
				for (j = i; j < pcon->sz - 1; j++)
				{
					int ret = strcmp(pcon->data[j].addr, pcon->data[j + 1].addr);
					if (ret > 0)
					{
						PeoInfo tmp;
						tmp = pcon->data[j];
						pcon->data[j] = pcon->data[j + 1];
						pcon->data[j + 1] = tmp;
					}
				}
			}
			break;
		default:
			break;
		}

		PrintContacts(pcon);
	}
}

void SaveContacts(Contacts* pcon)
{
 	if (pcon == NULL)
	{
		return;
	}

	FILE* ContactsDat = fopen("Contacts.dat", "w");

	if (ContactsDat == NULL)
	{
		perror("fopen");
		return;
	}

	for (int i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, ContactsDat);
	}

	fclose(ContactsDat);
	ContactsDat = NULL;
}

void DestoryContacts(Contacts* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->sz = 0;
	pcon->capacity = 0;
}