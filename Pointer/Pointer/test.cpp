#include <stdio.h>

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//ʹ��ָ���ӡ��������
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

//ģ��ʵ��strlen����

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
//	//�ɼ�����������Ԫ�ص�ַ����ͬ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//����4���ֽ�
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);//����4���ֽ�
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//����40���ֽ�
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
//	int* p = &a;//p��ָ�������һ��ָ��
//	int** pp = &p;//pp��ָ�����������ָ��
//
//	**pp = 20;
//	printf("%d\n", a);//20
//}

