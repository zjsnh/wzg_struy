#include <stdio.h>

void print(int n)
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