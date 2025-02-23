#include <stdio.h>
#include <string.h>
#include <assert.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}s1;//s1是结构体变量，是全局变量

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}Stu;//Stu是重命名产生的新的类型
//
//int main()
//{
//	struct Stu s2;
//	//s2是结构体变量，是局部变量
//	Stu s3;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//};
//
//void set_s(struct S* ps)
//{
//	ps->age = 18;
//	//t.name = "zhangsan";
//	strcpy_s(ps->name, "zhangsan");
//}
//
//void print_s(struct S t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct S s = { 0 };
//
//	//写一个函数给s中存放数据
//	set_s(&s);
//
//	//写一个函数打印s中的数据
//	print_s(s);
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	printf("num = %d\n", num);
//
//	//const 放在*的左边
//	//限制的指针指向的内容，不能通过指针来修改指针指向的内容
//	//但是指针变量是可以修改的，指针指向其他变量
//	// 
//	//const 放在*的右边
//	//限制的是指针变量本身，指针变量不能再指向其它对象
//	//但是可以通过指针变量来修改指向的内容
//
//	int* p = &num;
//	*p = 20;//ok
//
//	int n = 1000;
//	p = &n;//ok
//
//	printf("num = %d\n", num);
//	return 0;
//}


//模拟实现一个strlen函数

size_t my_strlen(const char* str)
{
	//assert(str != NULL);
	assert(str);
	size_t count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] ="abcdef";
	size_t len = my_strlen(arr);
	printf("%zd\n", len);
	return 0;
}