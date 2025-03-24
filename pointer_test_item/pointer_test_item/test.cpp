#include <stdio.h>
#include <string.h>

//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//a并非单独放在sizeof内部，也没有&，所以数组名a是数组首元素的地址，a+0还是首元素地址，大小就是4/8byte
//	printf("%d\n", sizeof(*a));//同上，*a就是首元素，大小就是4byte   *a == *(a+0) == a[0]
//	printf("%d\n", sizeof(a + 1));//a+1 == &a[1],就是4/8byte
//	printf("%d\n", sizeof(a[1]));//a[1]就是数组第二个元素，4byte
//	printf("%d\n", sizeof(&a));//&a - 是取出数组的地址，是地址就是4/8byte
//	//数组的地址 和 数组首元素地址 的本质区别是类型的区别，并非大小的区别
//	// a -- int*             int* p = a;
//	//&a -- int (*)[4]      int (*p)[4] = &a;
//	printf("%d\n", sizeof(*&a));//16   对数组指针解引用，访问一个数组的大小，取地址和解引用互相抵消，等价于sizeof(a)
//	printf("%d\n", sizeof(&a + 1));//&a + 1指向 a[3] 后面的地址，大小是4/8byte
//	printf("%d\n", sizeof(&a[0]));//&a[0]是首元素的地址，计算的是地址的大小，4/8byte
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0] + 1是第二个元素的地址，4/8byte
//	//&a[0]+1
//	//&a[1]
//	//a+1  都是第二个元素的地址
//
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//首元素地址，4/8byte
//	printf("%d\n", sizeof(*arr));//arr是首元素地址，*arr就是首元素，大小就是1byte
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr));// 4/8byte
//	printf("%d\n", sizeof(&arr + 1));// 4/8byte
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，4/8byte
//
//	printf("%d\n", strlen(arr));//随机值，结果会>=6，因为字符串中无\0
//	printf("%d\n", strlen(arr + 0));//随机值，arr是首元素地址，arr+0还是首元素地址
//	//printf("%d\n", strlen(*arr));//err，arr是首元素地址，*arr就是首元素，=='a' - 97(ASCII)
//	//站在strlen的角度看97是地址，97作为地址直接访问就是非法访问
//	//printf("%d\n", strlen(arr[1]));//err，同上，这两句是错误的
//	printf("%d\n", strlen(&arr));//随机值
//	//&arr -- char (*)[6]
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";//字符串的末尾会带'\0'
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//首元素地址+0还是首元素地址，4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6?
//	//printf("%d\n", strlen(&arr + 1));//&arr+1 直接跳过整个数组了，随机值
//	printf("%d\n", strlen(&arr[0] + 1));//从b开始，结果为5
//
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";
//
//	//printf("%d\n", sizeof(p));//4/8
//	//printf("%d\n", sizeof(p + 1));//4/8
//	//printf("%d\n", sizeof(*p));//1 (char*)
//	//printf("%d\n", sizeof(p[0]));//1 p[0]==*(p+0)==*p
//	//printf("%d\n", sizeof(&p));//4/8 &p是地址
//	//printf("%d\n", sizeof(&p + 1));//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8 p+1
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}


int main()
{
	//二维数组
	int a[3][4] = { 0 };

	printf("%zd\n", sizeof(a));//3*4*4=48
	printf("%zd\n", sizeof(a[0][0]));//4
	printf("%zd\n", sizeof(a[0]));//4*4=16
	printf("%zd\n", sizeof(a[0] + 1));//4/8 a[0]并非单独放在sizeof内，也没有&，所以a[0]表示数组第一行第一个元素的地址 a[0]==&a[0][0]
	//a[0]+1==&a[0][1]
	printf("%zd\n", sizeof(*(a[0] + 1)));//4 a[0]+1是第一行第二个元素的地址，解引用后就表示该元素
	printf("%zd\n", sizeof(a + 1));//4/8 a作为二维数组数组名，并没有单独放在sizeof内，也没有&，a就是数组首元素的地址，也就是第一行的地址
	//a+1就是第二行的地址，a是数组指针，类型是 int(*) [4]
	printf("%zd\n", sizeof(*(a + 1)));//16 一行数组的大小，算的是第二行的大小
	printf("%zd\n", sizeof(&a[0] + 1));//4/8
	//a[0]是第一行的数组名，&a[0]取出的是数组的地址，是第一行这个一维数组的地址，类型是int(*)[4]，&a[0]+1是第二行的地址
	printf("%zd\n", sizeof(*(&a[0] + 1)));//16 访问的是第二行，计算的就是第二行的大小
	printf("%zd\n", sizeof(*a));//16 a表示数组首元素的地址，也就是第一行的地址
	//*a==*(a+0)==a[0]
	printf("%zd\n", sizeof(a[3]));//16 第四行的地址，但是不会越界 a[3]==arr[0]

	return 0;
}