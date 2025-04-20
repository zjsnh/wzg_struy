#pragma once

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define MAX 100

#define default_sz 3

typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;


//静态通讯录版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;//通讯录人数
//}Contact;

//动态通讯录版本
typedef struct Contact
{
	PeoInfo* data;
	int sz;//通讯录人数
	int capaticy;//记录通讯录当前容量
}Contact;


void InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(const Contact* pc);
void DelContact(Contact* pc);
void SearchContact(Contact* pc);
void ModifyContact(Contact* pc);
void DestroyContact(Contact* pc);
void SaveContact(Contact* pc);
void LoadContact(Contact* pc);
void CheckCapacity(Contact* pc);