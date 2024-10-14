#pragma once

#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

#include <stdio.h>
#include <string.h>

//������ϵ����Ϣ���ͽṹ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
} PeoInfo;

//ͨѶ¼
typedef struct Contacts
{
	PeoInfo data[MAX];		//���嵥��ͨѶ¼��С
	int sz;					//��ϵ����Ч����
} Contacts;

void InitContacts(Contacts* con);