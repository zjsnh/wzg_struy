#define _CRT_SECURE_NO_WARNINGS

#include"DLinkList.h"

LNode* BuyNode(int x)
{
	LNode* newnode = (LNode*)malloc(sizeof(LNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

LNode* InitList()
{
	LNode* phead = BuyNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void PushBack(LNode* phead, int x)
{
	assert(phead);
	LNode* tail = phead->prev;
	LNode* newnode = BuyNode(x);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

void PushFront(LNode* phead, int x)
{
	assert(phead);
	LNode* first = phead->next;
	LNode* newnode = BuyNode(x);
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}

void PopBack(LNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LNode* tail = phead->prev; //通过头节点的 prev 指针找到链表的尾节点
	LNode* tailprev = tail->prev; //通过尾节点的 prev 指针找到尾节点的前一个节点
	free(tail);
	phead->prev = tailprev; //更新头节点的 prev 指针，使其指向新的尾节点
	tailprev->next = phead; //更新新的尾节点的 next 指针，使其指向头节点
}

void PopFront(LNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LNode* first = phead->next;
	LNode* firstnext = first->next;
	free(first);
	first = NULL;
	firstnext->prev = phead;
	phead->next = firstnext;
}

LNode* LinkFind(LNode* phead, int x)
{
	assert(phead);
	LNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void LinkInsert(LNode* pos, int x)
{
	assert(pos);
	LNode* newnode = BuyNode(x);
	LNode* posprev = pos->prev;

	newnode->prev = posprev;
	posprev->next = newnode;

	newnode->next = pos;
	pos->prev = newnode;
}

void DeletePos(LNode* pos)
{
	assert(pos);
	LNode* posprev = pos->prev;
	LNode* posnext = pos->next;
	free(pos);
	posprev->next = posnext;
	posnext->prev = posprev;
}

void Print(LNode* phead)
{
	assert(phead);
	printf("head<==>");
	LNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<==>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void LinkDestroy(LNode* phead)
{
	assert(phead);
	LNode* cur = phead->next;
	while (cur != phead)
	{
		LNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}