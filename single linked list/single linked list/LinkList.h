#pragma once

#include<stdio.h>  
#include<stdlib.h>  
#include<assert.h>

#define ERROR 0
#define OK 1

typedef struct SListNode
{
	int data;
	struct SListNode* next;
}LNode;

LNode* BuyLNode(int x); //开辟新节点
void Print(LNode* phead); //打印链表
void LinkPushBack(LNode** pphead, int x); //尾插
void LinkPushFront(LNode** pphead, int x); //头插
void LinkInsert(LNode** pphead, LNode* pos, int x); //在pos前插入
void SListInsertAfter(LNode* pos, int x); //在pos后插入
void LinkPopBack(LNode** pphead); //尾删
void LinkPopFront(LNode** pphead); //头删
void LinkDelete(LNode** pphead, LNode* pos); // 在pos位置删除
void LinkDeleteAfter(LNode* pos); //在pos后删除
void LinkFind(LNode* phead, int x); //查找节点
void LinkDestroy(LNode** pphead); //链表销毁