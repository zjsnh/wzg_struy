#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

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
HpDataType HeapTop(Hp* php);
size_t HeapSize(Hp* php);
bool HeapEmpty(Hp* php);
void HeapSort(int* a, int n);
void AdjustUp(HpDataType* a, int child);
void AdjustDown(HpDataType* a, int size, int parent);