#include<stdio.h>

//��n�Ľ׳�

int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
//�ݹ�����ջ���

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
//�����������ջ���

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int r = Fac(n);
	printf("%d\n", r);
	return 0;
}


//���n��쳲����������������������

int Fib(int n)//�ݹ�
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

//�ݹ����������ظ����㣬�õ�������

int Fib(int n)//����
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