#pragma once

#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000	  //�������
#define INC 3		  //ÿ�����ݴ�С
#define DEFAULT_SZ 3  //Ĭ�ϴ�С

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//������ϵ����Ϣ���ͽṹ
typedef struct PeoInfo
{
	char name[MAX_NAME];	//20	0-19
	char sex[MAX_SEX];		//20	20-39
	int age;				//4     40-43
	char tele[MAX_TELE];	//12	44-55
	char addr[MAX_ADDR];	//30	55-87
} PeoInfo;

//ͨѶ¼
typedef struct Contacts
{
	PeoInfo* data;		//���嵥��ͨѶ¼��С
	int sz;					//��ϵ����Ч����
	int capacity;
} Contacts;

//��ʼ��ͨѶ¼
void InitContacts(Contacts* pcon);

//�����ϵ����Ϣ
void AddContact(Contacts* pcon);

//ɾ����ϵ����Ϣ
void DelContact(Contacts* pcon);

//������ϵ����Ϣ
int SearchContact(Contacts* pcon, char* ptr_name);

//�޸���ϵ����Ϣ
void ModifyContact(Contacts* pcon);

//��ӡͨѶ¼
void PrintContacts(Contacts* pcon);

//����ͨѶ¼
void SortContacts(Contacts* pcon);

//����ͨѶ¼
void SaveContacts(Contacts* pcon);

//�ͷ�ͨѶ¼
void DestoryContacts(Contacts* pcon);

//���ͨѶ¼����
void CheckCapacity(Contacts* pcon);