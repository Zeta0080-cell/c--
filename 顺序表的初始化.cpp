//顺序表的初始化 
#include<stdio.h>
#define MAXSIZE 100
typedef int ElemType;

typedef struct{
	ElemType data[MAXSIZE];
	int length;
}SeqList; //定义顺序表结构体

void initList(SeqList *L)//初始化顺序表
{
	L->length=0;	
} 

int main()
{
	SeqList list;//定义一个结构体（顺序表）
	initList(&list);//传入顺序表的地址
	printf("初始化成功，目前长度占用%d\n",list.length);
	printf("目前占用内存%zu字节",sizeof(list.data));
	return 0; 
}
 


