#include <stdio.h>

//�ݹ� = ���� + �ع�
//�ݹ��������Ҫ������
//1.������������ 2.���Ͻӽ���������

//��˳���ӡ�������ֵ�ÿһλ
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
	print(num);//print��num��ÿһλ��ӡ����
	return 0;
}


//��д����������������ʱ���������ַ�������
size_t my_strlen(char* str)
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
	size_t len = my_strlen(arr);//���ݵ���������Ԫ�صĵ�ַ
	printf("%zd\n", len);
	return 0;
}

//�ݹ�������
