#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>


//字符分类函数

//int main()
//{
//	char ch = 'x';
//	if (islower(ch))
//	{
//		printf("小写\n");
//	}
//	else
//	{
//		printf("非小写\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ret = islower('a');
//	printf("%d\n", ret);
//	return 0;
//}


//字符转换函数
//tolower tooupper

//int main()
//{
//	int ret = toupper('a');
//	printf("%c\n", ret);
//	ret = tolower(ret);
//	printf("%c\n", ret);
//
//	return 0;
//}


//memcpy

#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t sz)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3,4,5 };
//	//把arr2中的前五个整型数据，拷贝放到arr1中
//	my_memcpy(arr1, arr2, 20);
//	return 0;
//}


//memmove
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	return 0;
//}
//
//void* my_memmove(void* dest, void* src, size_t sz)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (sz--)
//		{
//			*((char*)dest + sz) = *((char*)src + sz);
//		}
//	}
//	return ret;
//}


//memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr + 6, 'x', 3);
//	printf("%s\n", arr);
//	return 0;
//}


//memcmp
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 1,2,3,7 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);//0
//	return 0;
//}