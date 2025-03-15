//复盘顺序表-在尾部添加元素（顺序表遍历） 
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	Elemtype data[MAXSIZE];
	int length;
}SeqList;

void initList(SeqList *L)//初始化函数
{
	L->length=0;	
} 

int appendElem(SeqList *L,int e)//元素增加函数 
{
	if(L->length>=MAXSIZE)
	{
		printf("该顺序表已满");
		return 0;
	}
	L->data[L->length]=e;//添加元素 
	L->length++;
}

void listElem(SeqList *L)//元素遍历函数 
{
	for(int i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
}
int main()
{
	SeqList list;//定义一个顺序表类型变量
	initList(&list);//顺序表初始化
	appendElem(&list,1);
	appendElem(&list,2);
	appendElem(&list,3); 
	listElem(&list);//遍历这个顺序表 
	return 0;
} 

