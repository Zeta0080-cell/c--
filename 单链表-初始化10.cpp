//单链表-初始化10 
#include<bits/stdc++.h>
using namespace std;
#define OK 1//返回OK表示操作成功 
#define ERROR 0//返回ERROR表示操作失败 
using namespace std;
//链表结构定义
typedef int Status;
typedef int ElemType;
typedef struct LNode{
	ElemType data;//结点的数据域 
	struct LNode *next;//结点的指针域 
}LNode,*Linklist;//Linklist为指向LNode的指针类型 

Status initlist(Linklist &L)
{
	L=new LNode;//等价于L = (LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	return OK;
}

int main()
{
	Linklist L;//定义单链表
	initlist(L);
	return 0;
}
