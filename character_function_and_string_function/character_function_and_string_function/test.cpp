#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//strlen

//strcpy
// 
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//arr1目标源，arr2源头
//	//会把\0一起拷贝
//	//strcpy返回的是目标空间的起始地址
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcpy(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}


//strcat，追加字符串，返回的是目标空间的起始地址
//注意：
//1.目标空间必须足够大
//2.目标空间必须有\0，源空间也必须有\0，会被一起拷贝过去
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);//将arr2追加到arr1后
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到目标空间末尾
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.数据追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}


//strcmp 字符串比较
//比较对应位置上字符的大小（ASCII码值）
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	//ret>0,arr1>arr2
//	//ret=0,arr1=arr2
//	//ret<0,arr1<arr2
//	return 0;
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}


//长度不受限制的字符串函数
//strcpy strcat strcmp
//长度受限制的字符串函数
//strncpy strncat strncmp

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdefg";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);//abc 只会拷贝前三个字符，
//	return 0;
//}


//strstr 在字符串中找字符串
//strstr会返回str1中第一次出现str2的位置
//若str1中没有str2，则返回NULL

//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "def";
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//const char* my_strstr(const char* str1, const char* str2)
//{
//	const char* cp;//记录开始匹配的位置
//	const char* s1;//遍历str1指向的字符串
//	const char* s2;//遍历str2指向的字符串
//	cp = str1;
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}


//strtok 切割字符串
//int main()
//{
//	char arr[] = "marylee06502@gmail.com";
//	char buf[200] = { 0 };
//	strcpy(buf, arr);
//
//	const char* p = "@.";
//	char* s = strtok(buf, p);
//	printf("%s\n", s);
//
//	s = strtok(NULL, p);//第一次调用之后第二次用NULL，从上一次结束的位置往后切割
//	printf("%s\n", s);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "marylee06502@gmail.com";
//	char buf[200] = { 0 };
//	strcpy(buf, arr);
//
//	const char* p = "@.";
//	char* s = NULL;
//	for (s = strtok(arr, p); s != NULL; s = strtok(NULL, p))
//	{
//		printf("%s\n", s);
//	}
//	return 0;
//}



//strerror 将错误码翻译成错误信息，返回错误信息字符串的起始地址
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d: %s\n", i, strerror(i));
//	}
//	return 0;
//}
//打开文件的例子
//fopen 以读的形式打开文件
//如果文件存在，打开成功
//如果不存在，打开失败
//int main()
//{
//	FILE* pf = fopen("add.txt", "r");
//	if (pf == NULL)
//	{
//		printf("failed,reson:%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("successd\n");
//	}
//	return 0;
//}

//perror
//直接打印错误码所对应的错误信息
//perror==printf + strerror
//打印规则："自定义信息: "

//int main()
//{
//	FILE* pf = fopen("add.txt", "r");
//	if (pf == NULL)
//	{
//		perror("failed");
//	}
//	else
//	{
//		printf("successd\n");
//	}
//	return 0;
//}


