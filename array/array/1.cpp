#include<stdio.h>


//一维数组
int main()
{
	int const n = 10;
	int arr[n];
	return 0;
}


//二维数组
int main()
{
	int arr1[][5] = { {1,2},{2,3},{3,4} };//行可以省略，列不能省
	return 0;
}


//遍历二维数组
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2},{3} };
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 5;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	//对arr进行升序排列
	
	//冒泡排序
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//趟数
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - i - 1 ;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//使用函数sort(arr)

//void sort(int arr[],int sz)
void sort(int* arr, int sz)
{
	int i = 0;

	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	sort(arr, sz);

	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}