#define _CRT_SECURE_NO_WARNINGS  

#include "SqList.h"  

void InitSqlist(SL* p)  
{  
   int i = 0;  
   for (i = 0; i < MAXSIZE; i++)  
   {  
       p->data[i] = 0;  
   }  
   p->length = 0;  
}  

int LocateElem(SL p, ElemType e) //按数据查找，返回序号  
{  
   int i = 0;  
   for (i = 0; i < p.length; i++) 
   {  
       if (p.data[i] == e) 
           return i + 1; //查找成功  
   }  
   return 0; //查找失败  
}  

int GetElem(SL p, int i, ElemType* e) //按位序获取数据  
{  
   if (p.length == 0 || i <= 0 || i > p.length)
       return ERROR;  

   *e = p.data[i - 1]; // 获取对应位置的元素  
   return OK;  
}

int ListInsert(SL* p, int i, ElemType e) //按位插入数据
{
    if (p->length >= MAXSIZE)
        return ERROR;// 顺序表已满
    if (i < 1 || i > p->length + 1)
        return ERROR;// i不在范围内
    int j;
    for (j = p->length - 1;j >= i - 1;j--)
    {
        if(j + 1 < MAXSIZE)//检查插入后是否会超出顺序表大小
        {
            p->data[j + 1] = p->data[j];
        }
    }
    p->data[i - 1] = e;
    p->length++;
    return OK;
}

int DeleteElem(SL* p, int i, ElemType* e) //按位删除数据
{
    int j;
    if (p->length == 0)
        return ERROR;
    if (i > p->length || i < 1)
        return ERROR;
    *e = p->data[i - 1];
    if (i >= 1 && i <= p->length)
    {
        for (j = i;j < p->length;j++)
        {
            p->data[j - 1] = p->data[j];    /*将删除位置后继元素前移*/
        }
    }
    p->length--;        //线性表减1
    return OK;
}

void print(SL p)
{
    int i = 0;
    for (i = 0;i < p.length;i++)
    {
        printf("%d ", p.data[i]);
    }
    return OK;
}