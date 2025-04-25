#define _CRT_SECURE_NO_WARNINGS  

#include"LinkList.h"

void Print(LNode* phead)
{
	LNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

LNode* BuyLNode(int x)
{
	LNode* newnode = (LNode*)malloc(sizeof(LNode));
	if (newnode == NULL)
	{
		perror("malloc");
		return ERROR;
	}
	newnode->data = x; //插入数据
	newnode->next = NULL; //下一个节点置为空
	return newnode;
}

void LinkPushBack(LNode** pphead, int x)
{
	assert(pphead);
	LNode* newnode = BuyLNode(x);
	if (*pphead == NULL) //链表本身为空
	{
		*pphead = newnode; //如果链表为空，直接将新节点设置为链表的头节点
	}
	else //链表本身不为空
	{
		LNode* tail = *pphead; //如果链表不为空，定义一个指针 tail，并将其初始化为链表的头节点
		while (tail->next != NULL) //找尾
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void LinkPushFront(LNode** pphead, int x)
{
	assert(pphead);
	LNode* newnode = BuyLNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void LinkInsert(LNode** pphead, LNode* pos, int x)
{
	assert(pphead != NULL && pos != NULL);
	if (*pphead == pos)
	{
		LinkPushFront(pphead, x);
	}
	else
	{
		LNode* PreviousNode = *pphead;
		while (PreviousNode->next != pos) //循环结束时，PreviousNode 指向 pos 的前一个节点。
		{
			PreviousNode = PreviousNode->next;
		}
		LNode* newnode = BuyLNode(x);
		PreviousNode->next = newnode;
		newnode->next = pos;
	}
}

void SListInsertAfter(LNode* pos, int x)
{
	assert(pos != NULL);
	LNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void LinkPopBack(LNode** pphead)
{
	assert(pphead); //确保传入的指针 pphead 本身不是空指针
	assert(*pphead != NULL); //确保 pphead 所指向的内容（即链表的头指针 *pphead）不是空指针。
							 //换句话说，它检查链表是否为空。
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		LNode* tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void LinkPopFront(LNode** pphead)
{
	assert(pphead);
	assert(*pphead != NULL);
	LNode* first = *pphead;
	*pphead = first->next;
	free(first);
	first = NULL;
}

void LinkDelete(LNode** pphead, LNode* pos)
{
	assert(pphead != NULL);
	assert(pos != NULL);
	assert(*pphead);
	if (pos == *pphead)
	{
		LinkPopFront(pphead);
	}
	else
	{
		LNode* PreviousNode = *pphead;
		while (PreviousNode->next != pos)
		{
			PreviousNode = PreviousNode->next;
		}
		PreviousNode->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void LinkDeleteAfter(LNode* pos)
{
	assert(pos != NULL && pos->next != NULL);
	LNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}

void LinkFind(LNode* phead, int x)
{
	LNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	printf("not found.\n");
	return NULL;
}

void LinkDestroy(LNode** pphead)
{
	assert(pphead != NULL);
	LNode* cur = *pphead;
	while (cur)
	{
		LNode* temp = cur->next;
		free(cur);
		cur = temp;
	}
	*pphead = NULL;
}