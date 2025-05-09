#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<assert.h>
using namespace std;

struct SeqList
{
	// 成员变量
	int* a;
	int size;
	int capacity;

	// 成员函数
	void Init()
	{
		a = (int*)malloc(sizeof(int) * 4);
		//...
		size = 0;
		capacity = 4;
	}

	void PushBack(int x)
	{
		//...扩容
		a[size++] = x;
	}

	//读写返回变量
	int& Get(int pos)
	{
		assert(pos >= 0);
		assert(pos < size);
		return a[pos];
	}
};

int main()
{
	SeqList s;
	s.Init();
	s.PushBack(1);
	s.PushBack(2);
	s.PushBack(3);
	s.PushBack(4);

	for (int i = 0;i < s.size;i++)
	{
		cout << s.Get(i) << " ";
	}
	cout << endl;

	for (int i = 0;i < s.size;i++)
	{
		if (s.Get(i) % 2 == 0)
		{
			s.Get(i) *= 2;
		}
	}
	cout << endl;

	for (int i = 0;i < s.size;i++)
	{
		cout << s.Get(i) << " ";
	}
	cout << endl;

	return 0;
}