#include <stdio.h>
#include <string.h>
#include <assert.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}s1;//s1�ǽṹ���������ȫ�ֱ���

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}Stu;//Stu���������������µ�����
//
//int main()
//{
//	struct Stu s2;
//	//s2�ǽṹ��������Ǿֲ�����
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
//	//дһ��������s�д������
//	set_s(&s);
//
//	//дһ��������ӡs�е�����
//	print_s(s);
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	printf("num = %d\n", num);
//
//	//const ����*�����
//	//���Ƶ�ָ��ָ������ݣ�����ͨ��ָ�����޸�ָ��ָ�������
//	//����ָ������ǿ����޸ĵģ�ָ��ָ����������
//	// 
//	//const ����*���ұ�
//	//���Ƶ���ָ���������ָ�����������ָ����������
//	//���ǿ���ͨ��ָ��������޸�ָ�������
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


//ģ��ʵ��һ��strlen����

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