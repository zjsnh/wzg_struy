#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法增加\n");
		return;
	}
	//增加信息
	printf("请输入姓名：");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄：");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别：");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话：");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址：");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加成功\n");
}


void ShowContact(Contact* pc)
{
	int i = 0;
	assert(pc);
	if (pc->sz == 0)
	{
		printf("empty\n");
		return;
	}
	for (i = 0; i < pc->sz; i++)
	{
		printf("%s %d %s %s %s\n",
		pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}