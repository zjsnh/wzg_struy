#include <stdio.h>


//函数指针数组

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//
//	int(*pfArr[4])(int, int) = { Add, Sub };//函数指针数组
//
//	return 0;
//}


//用法，计算器

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("**** 1.Add       2.Sub ****\n");
//	printf("**** 3.Mul       4.Div ****\n");
//	printf("**** 0.exit            ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	do {
//		menu();
//		printf("请选择->");
//		scanf_s("%d", &input);
//
//		int(*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数->");
//			scanf_s("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//	return 0;
//}


//指向函数指针数组的指针


//定义
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//
//	//函数指针pfun
//	void (*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//指向函数指针数组pfunArr的指针ppfunArr
//	void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//
//	return 0;
//}


//回调函数


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("**** 1.Add       2.Sub ****\n");
//	printf("**** 3.Mul       4.Div ****\n");
//	printf("**** 0.exit            ****\n");
//	printf("***************************\n");
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数->");
//	scanf_s("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择->");
//		scanf_s("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//qsort函数

//void qsort(void* base,//待排序数组第一个元素的地址
// size_t num,//待排序数组的元素个数
// size_t size,//待排序数组中一个元素的大小
// int (*cmp)(const void* e1, const void* e2)//函数指针cmp指向了一个函数，这个函数是用来比较两个元素的,e1和e2存放的是需要比较的两个元素的地址
//)

//void* 类型的指针，不能进行解引用操作，也不能进行+-整数的操作
//void* 类型的指针是用来存放任意类型数据的地址

#include <stdlib.h>
#include <string.h>
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int compare_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//测试qsort排序整型数据
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), compare_int);
	print_arr(arr, sz);
}

//测试qsort排序结构体数据
struct Stu
{
	char name[20];
	int age;
};

//1.按照年龄比较
int compare_stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()
{
	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 21}, {"wangwu", 12} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	qsort(arr, sz, sizeof(arr[0]), compare_stu_age);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i].age);
	}
	printf("\n");
	
}

//按照姓名比较
int compare_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 21}, {"wangwu", 22} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), compare_stu_name);
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
	}
	printf("\n");
}

int main()
{
	test1();
	test2();
	test3();	
	return 0;
}