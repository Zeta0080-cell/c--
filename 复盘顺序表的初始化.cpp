//复盘顺序表的初始化
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	Elemtype data[MAXSIZE];
	int length;//顺序表的长度 
}SeqList; 

void initList(SeqList *L)//初始化函数 
{
	L->length=0;//初始化长度 
}

int main()
{
	SeqList list;//定义一个顺序表类型 
	initList(&list);//传入地址
	printf("初始化成功，目前顺序表的长度为：%d",list.length);
	printf("初始化成功，目前顺序表占用的字节为:%zu",sizeof(list)); 
	return 0;
}
