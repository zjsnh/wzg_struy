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
//	//左移：左边丢弃，右边补0
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
//	//0000 0000 0000 0000 0000 0000 0000 0011--- 3的补码
//	//1111 1111 1111 1111 1111 1111 1111 1011--- -5的补码
//	//0000 0000 0000 0000 0000 0000 0000 0011--- 按位与
//
//	printf("%d\n", c);
//	return 0;
//}


//不创建临时变量，交换两个整型变量
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


//编写代码实现：求一个整数存储在内存中的二进制的1的个数
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