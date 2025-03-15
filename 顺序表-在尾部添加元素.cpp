//顺序表-在尾部添加元素（顺序表遍历） 
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	Elemtype data[MAXSIZE];
	int length;
}SeqList;//定义顺序表

void initList(SeqList *L)//初始化顺序表,传入顺序表的地址 
{
	L->length=0; 
} 

//定义尾部添加函数,传入顺序表的地址和需要添加的元素 
int appendElem(SeqList *L,Elemtype e)
{
	if(L->length>=MAXSIZE)
	{
		printf("该顺序表已满");
		return 0;
	}
	L->data[L->length]=e;
	L->length++;
	return 1;
}

void listElem(SeqList *L)//顺序表遍历函数,类似于数组遍历 
{
	for(int i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}	
	printf("\n");
} 
int main()
{
	SeqList list;//声明顺序表
	initList(&list);//初始化顺序表
	appendElem(&list,1);
	appendElem(&list,2);
	appendElem(&list,3);
	listElem(&list);//遍历顺序表
	return 0; 
}
