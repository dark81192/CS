#pragma once

#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

#include <stdio.h>
#include <string.h>

//定义联系人信息类型结构
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
} PeoInfo;

//通讯录
typedef struct Contacts
{
	PeoInfo data[MAX];		//定义单个通讯录大小
	int sz;					//联系人有效个数
} Contacts;

//初始化通讯录
void InitContacts(Contacts* pcon);

//添加联系人信息
void AddContact(Contacts* pcon);

//删除联系人信息
void DelContact(Contacts* pcon);

//查找联系人信息
int SearchContact(Contacts* pcon, char* ptr_name);