#include <stdio.h>

//int main()
//{
//	int m = 7;
//	int n = m << 1;
//	printf("%d\n", n);
//	return 0;
//	//14
//
//	int m = -7;
//	int n = m << 1;
//	printf("%d\n", n);
//	return 0;
//	//-14
//
//	//���ƣ���߶������ұ߲�0
//}

//int main()
//{
//	int a = -10;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//	//-5
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//
//	//0000 0000 0000 0000 0000 0000 0000 0011--- 3�Ĳ���
//	//1111 1111 1111 1111 1111 1111 1111 1011--- -5�Ĳ���
//	//0000 0000 0000 0000 0000 0000 0000 0011--- ��λ��
//
//	printf("%d\n", c);
//	return 0;
//}


//��������ʱ�����������������ͱ���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d\n", a, b);
//	return 0;
//}


//��д����ʵ�֣���һ�������洢���ڴ��еĶ����Ƶ�1�ĸ���
//int main()
//{
//	int num = -10;
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//			count++;
//	}
//
//	printf("%d\n", count);
//	return 0;
//}