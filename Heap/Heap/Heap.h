#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int HpDataType;

typedef struct Heap
{
	HpDataType* a;
	int size;
	int capacity;
}Hp;

void HeapInit(Hp* php);
void HeapDestroy(Hp* php);
void HeapPush(Hp* php, HpDataType x);
void HeapPop(Hp* php); //规定删除根节点