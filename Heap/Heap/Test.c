#define _CRT_SECURE_NO_WARNINGS

#include"Heap.h"

int main()
{
	int a[] = { 4,3,2,7,5,8,6 };
	Hp hp;
	int i = 0;
	HeapInit(&hp);
	for (i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		HeapPush(&hp, a[i]);
	}
	return 0;
}