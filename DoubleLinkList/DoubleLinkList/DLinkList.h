#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct ListNode
{
	int data;
	struct ListNode* prev;
	struct ListNode* next;
}LNode;

LNode* BuyNode(int x); // 创建节点
LNode* InitList(); //初始化链表
void PushBack(LNode* phead, int x); //尾插
void PushFront(LNode* phead, int x); //头插
void PopBack(LNode* phead); //尾删
void PopFront(LNode* phead); // 头删
LNode* LinkFind(LNode* phead, int x); //查找
void LinkInsert(LNode* pos, int x); //在pos之前插入
void DeletePos(LNode* pos); //在pos位置删除
void Print(LNode* phead); //打印
void LinkDestroy(LNode* phead); //销毁
