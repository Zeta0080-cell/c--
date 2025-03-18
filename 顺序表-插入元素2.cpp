//顺序表-插入元素2
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];
	int length;
}SeqList; //定义一个顺序表结构体

void initList(SeqList *L)
{
	L->length=0;	
} 

void insert(SeqList *L,int pos,int e)//插入函数，顺序表指针，插入的位置，插入的元素
{
	int i;
	if(L->length>=MAXSIZE)
	{
		printf("该顺序表的空间已满");
	}
	else
	{
		for (int i = L->length; i > pos; i--) 
		{
        	L->data[i] = L->data[i - 1];
    	}
		L->data[pos]=e;//插入元素 
		L->length++;
	}
} 

void Print(SeqList *L)
{
	int i;
	for(i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
}

int main()
{
	int i,n;
	SeqList list;//声明顺序表类型变量list 
	initList(&list);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&list.data[i]);
		list.length++;
	}//将元素存入顺序表
	insert(&list,1,88);
	Print(&list); 
	return 0;
}
