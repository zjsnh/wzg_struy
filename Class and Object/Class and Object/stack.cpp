//#define _CRT_SECURE_NO_WARNINGS
//
//#include"stack.h"
//
//void stack::Init(int n = 4)
//{
//	a = (int*)malloc(sizeof(int) * n);
//	if (nullptr == a)
//	{
//		perror("malloc failed.");
//		return;
//	}
//
//	capacity = n;
//	top = 0;
//}
//
//void stack::Push(int x)
//{
//	//...
//	a[top++] = x;
//}