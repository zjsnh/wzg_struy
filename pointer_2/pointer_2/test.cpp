#include <stdio.h>


//字符指针


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	
//	const char* p = "abcdef";
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//yes
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//yes
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//指针数组


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//指针数组
//	int* arr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	const char* arr[] = { "hello", "hehe", "mengbi" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//  return 0;
//}


//数组指针


//int main()
//{
//	int arr[10] = { 0 };
//
//	int(*p)[10] = &arr;//p是用来存放数组的地址的，p就是数组指针
//
//	char* arr2[5];
//	char* (*pc)[5] = &arr2;
//
//	int arr3[] = { 1,2,3 };
//	int(*p3)[3] = &arr3;
//
//	return 0;
//}

//数组指针有什么用

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	
//	/*int (*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	return 0;
//}

//void print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}


//一维数组传参

//void test(int arr[])
//{ }
//void test(int arr[10])
//{ }
//void test(int* arr)
//{ }
//void test2(int* arr[20])
//{ }
//void test2(int** arr)
//{ }
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}


//二维数组传参

//void test(int arr[3][5])
//{ }
//void test(int arr[][5])
//{ }
//void test(int (*arr)[5])
//{ }
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//一级指针传参

//void print(int* p, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//    int* p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(p, sz);
//    return 0;
//}


//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}



//函数指针


int Add(int x, int y)
{
	return x + y;
}

int main()
{
	printf("%p\n", Add);
	printf("%p\n", &Add);

	int(*pf1)(int, int) = Add;
	int(*pf2)(int, int) = &Add;//函数指针
	return 0;
}