#pragma once

#include <stdio.h>
#include <assert.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define MAX 100

typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;


typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;//通讯录人数
}Contact;


void InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(Contact* pc);