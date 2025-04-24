#pragma once
#include <stdio.h>

#define MAXSIZE 20
#define ERROR 0
#define OK 1


typedef int ElemType;

typedef struct SqList
{
	ElemType data[MAXSIZE];
	int length;
} SL;

void InitSqlist(SL* p);
int LocateElem(SL p, ElemType e);
int GetElem(SL p, int i, ElemType* e);
int ListInsert(SL* p, int i, ElemType e);
int DeleteElem(SL* p, int i, ElemType* e);
void print(SL p);