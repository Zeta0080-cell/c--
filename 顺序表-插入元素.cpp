//顺序表-插入元素
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	int length;
	Elemtype data[MAXSIZE];
}SeqList;//定义顺序表 

void initList(SeqList *L)//初始化函数
{
	L->length=0;	
} 

int appendElem(SeqList *L,int e)//尾部元素插入函数
{
	if(L->length>=MAXSIZE)
	{
		printf("该顺序表已满");
		return 0;	
	}
	L->data[L->length]=e;//插入元素 
	L->length++;	
	return 1;
} 

void listElem(SeqList *L)//顺序表遍历函数 
{
	for(int i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
	printf("\n");
}
int main()
{
	SeqList list;//定义顺序表类型变量
	initList(&list);
	appendElem(&list,1);
	appendElem(&list,2);
	appendElem(&list,3);
	listElem(&list); 
	return 0;
}
