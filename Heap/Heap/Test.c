#define _CRT_SECURE_NO_WARNINGS

#include"Heap.h"

//int main()
//{
//	int a[] = { 4,3,2,7,5,8,6 };
//	Hp hp;
//	int i = 0;
//	HeapInit(&hp);
//	for (i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//	return 0;
//}

void PrintTopK(const char* file, int k)  
{  
   FILE* fout = fopen(file, "r");  
   if (fout == NULL)  
   {  
       perror("fopen error");  
       return;  
   }  
   // 建一个k个数的小堆  
   int* minheap = (int*)malloc(sizeof(int) * k);  
   if (minheap == NULL)  
   {  
       perror("malloc error");  
       fclose(fout); // 确保在错误时关闭文件  
       return;  
   }  

   //读取前k个，建小堆
   for (int i = 0; i < k; i++)  
   {  
       fscanf(fout, "%d", &minheap[i]);
       AdjustUp(minheap, i);
   }

   int x = 0;
   while (fscanf(fout, "%d", &x) != EOF)
   {
       if (x > minheap[0])
       {
           minheap[0] = x;
           AdjustDown(minheap, k, 0);
       }
   }
   for (int i = 0; i < k; i++)
   {
       printf("%d ", minheap[i]);
   }
   free(minheap);
   fclose(fout);  
}

int main()
{
	//CreateDate();
    PrintTopK("data.txt", 5);
}