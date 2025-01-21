#include<stdio.h>

//求n的阶乘

int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
//递归会出现栈溢出

int Fac(int n)
{
	int i = 0;
	int r = 1;
	for (i = 1;i <= n;i++)
	{
		r = r * i;
	}
	return r;
}
//迭代不会出现栈溢出

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int r = Fac(n);
	printf("%d\n", r);
	return 0;
}


//求第n个斐波那契数。（不考虑溢出）

int Fib(int n)//递归
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

//递归会产生大量重复计算，用迭代更好

int Fib(int n)//迭代
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}