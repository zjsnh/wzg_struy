#include <stdio.h>

//递归 = 递推 + 回归
//递归的两个必要条件：
//1.存在限制条件 2.不断接近限制条件

//按顺序打印整型数字的每一位
void print(int n)//递归
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	print(num);//print把num的每一位打印出来
	return 0;
}


//编写函数。不允许创建临时变量，求字符串长度
size_t mystrlen(char* str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abc";
	size_t len = mystrlen(arr);//传递的是数组首元素的地址
	printf("%zd\n", len);
	return 0;
}


//递归做法：
size_t my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);//不要写成++str，递归不要写有副作用的代码
}

int main()
{
	char arr[] = "abc";
	size_t len = my_strlen(arr);//传递的是数组首元素的地址
	printf("%zd\n", len);
	return 0;
}