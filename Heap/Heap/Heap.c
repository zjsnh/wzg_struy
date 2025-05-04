#define _CRT_SECURE_NO_WARNINGS

#include"Heap.h"

void HeapInit(Hp* php)
{
	assert(php);

	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}

void HeapDestroy(Hp* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void Swap(HpDataType* p1, HpDataType* p2)
{
	HpDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void AdjustUp(HpDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] > a[child])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (parent - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

// O(logN)
void HeapPush(Hp* php, HpDataType x)
{
	assert(php);

	if (php->size == php->capacity)
	{
		size_t newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		// 如果堆的初始容量为 0，则将容量设置为 4。否则，将当前容量翻倍
		HpDataType* tmp = (HpDataType*)realloc(php->a, newCapacity * sizeof(HpDataType));
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newCapacity;
	}

	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}

void AdjustDown(HpDataType* a, int size, int parent)
{
	int child = parent * 2 + 1;

	//假设左孩子小，如果假设错了，更新
	while(child < size)
	{
		if (child + 1 < size && a[child + 1] < a[child])
		{
			++child;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(Hp* php)
{
	assert(php);
	assert(php->size > 0);

	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}

HpDataType HeapTop(Hp* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}

size_t HeapSize(Hp* php)
{
	assert(php);
	return php->size;
}

bool HeapEmpty(Hp* php)
{
	assert(php);
	return php->size == 0;
}

void HeapSort(int* a, int n)
{
	int i = 0;
	//建堆
	for (i = 0;i < n;i++)
	{
		AdjustUp(a, i);
	}
}