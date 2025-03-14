//顺序表的初始化 
#include<stdio.h>
#define M 100
typedef int Element
typedef struct{
	Element data[M];
	int length;
}seqlist;

void initlist(seqlist *q)//传入结构体(顺序表)的地址 
{
	q->length=0;//初始化顺序表 
}
int main()
{
	
	return 0;
}
