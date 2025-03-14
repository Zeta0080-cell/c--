//数据结构-顺序表 
#include<stdio.h>
#define MAXSIZE 100
typedef int ElemType;//给int起一个别名叫ElemType  
typedef struct{
	ElemType data[MAXSIZE];
	int length;
}SeqList;
//重定义int是为了方便修改数据结构的类型和特性
void initList(SeqList *L)
{
	L->length=0;	
} //顺序表的初始化 
int main()
{
	//声明一个顺序表并初始化
	SeqList list;
	initList(&list);
	printf("初始化成功，目前长度占用为:%d\n",list.length);
	printf("目前占用内存%zu字节\n",sizeof(list.data)); 
	return 0;
} 
