#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void qsort(void* base, //待排序数据的起始地址
//		   size_t num,   //待排序数据的元素个数
//		   size_t size,  //待排序数据的一个元素的大小，单位字节
//	       int (*conpare)(const void*, const void*))
//         函数指针-指向了一个比较函数，这个函数用来比较2个元素的大小
//{ }

// 
//目标：使用冒泡排序的思想，模拟实现一个排序函数，可以排序任意类型的数据
//

void bubble_sort(int arr[], int sz)
{
	//冒泡排序的趟数
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}


struct Stu
{
	char name[20];
	int age;
};

//int (*cmp)(const void* e1, const void* e2)
//e1是一个指针，存放了一个要比较的元素的地址
//e2是一个指针，存放了一个要比较的元素的地址
//e1指向的元素>e2指向的元素，返回一个>0的数字
//e1指向的元素==e2指向的元素，返回0
//e1指向的元素<e2指向的元素，返回一个<0的数字

void swap(char* buf1, char* buf2, size_t size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

void bubble_sort2(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0;i < num - 1;i++)
	{
		int j = 0;
		for (j = 0;j < num - 1 - i;j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				//交换
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序为升序
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

void test2()
{
	struct Stu arr[] = { {"zhangsan", 20},{"lisi", 30},{"wangwu", 15} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int main()
{
	//测试 bubble_sort 排序整型数据
	//test1();
	//测试 bubble_sort 排序结构体数据
	test2();

	return 0;
}