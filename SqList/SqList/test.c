#define _CRT_SECURE_NO_WARNINGS

#include "SqList.h"


int main()
{
	SL L;
	InitSqlist(&L);
	//插入一些元素
	ListInsert(&L, 1, 2);
	ListInsert(&L, 1, 3);
	ListInsert(&L, 1, 4);
	print(L);
	int e = 0;      //将需要的元素带回
	if (ListDelete(&L, 3, &e))
		printf("已删除第3个元素，第三个元素为%d\n", e);
	else
		printf("位序不合法，删除失败\n");
	print(L);
	//按位查找
	if (GetElem(L, 2, &e))
	{
		printf("查找成功，第2个元素为%d\n", e);
	}
	else
	{
		printf("位序不合法，查找失败！\n");
	}
	//按值查找
	if (LocateElem(L, 1))
	{
		printf("查找成功，第2个元素为%d\n", LocateElem(L, 1));
	}
	else
	{
		printf("查找失败,该顺序表不存在该值！\n");
	}
	return 0;
}