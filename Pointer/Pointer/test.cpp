#include <stdio.h>

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//使用指针打印数组内容
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//模拟实现strlen函数

//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//可见数组名和首元素地址是相同的
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//跳过4个字节
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);//跳过4个字节
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//跳过40个字节
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p == %p\n", arr + i, p + i);
//	}
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//p是指针变量，一级指针
//	int** pp = &p;//pp是指针变量，二级指针
//
//	**pp = 20;
//	printf("%d\n", a);//20
//}

