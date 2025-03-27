#include <stdio.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}//2,5


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000。如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014(十六进制) 结构体指针+1跳过一个结构体的大小
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4
//	//在内存中：01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//ptr2指针指向01后的00，解引用访问4个字节，为02000000
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式，(1,3,5,0,0,0)
//	int* p;
//	p = a[0];//a[0]==&a[0][0]
//	printf("%d", p[0]);//1,p[0]==*(p+0)==*p
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//  //%p是打印地址，认为内存中存储的补码就是地址
//	//FFFFFFFC,-4
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//&aa+1跳过了整个数组
//	int* ptr2 = (int*)(*(aa + 1));//*(aa+1)是对第二行第一个元素的地址解引用
//	//*(aa+1)==aa[0]==&aa[1][0]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}


//int main()
//{
//	const char* a[] = { "work","at","alibaba" };
//	const char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}


int main()
{
	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
	const char** cp[] = { c + 3,c + 2,c + 1,c };
	const char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT 先++再解引用，得到的是P的地址
	printf("%s\n", *-- * ++cpp + 3);//ER 接着上句再++，得到的是E的地址
	printf("%s\n", *cpp[-2] + 3);//ST * *(cpp-2)+3 得到的是S的地址
	printf("%s\n", cpp[-1][-1] + 1);//EW *(*(cpp-1)-1)+1 得到的是E的地址
	return 0;
}