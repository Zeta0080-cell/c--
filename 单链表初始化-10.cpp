//单链表初始化-10
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node{
	ElemType data;//结点的数据域
	struct node *next;//结点的指针域 
}Node;//重命名为Node

Node *initlist()//初始化函数 
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;//返回头节点 
} 

int main()
{
	Node *list;//定义一个指针，指向list结构
	list=initlist(); 
	return 0;
}
