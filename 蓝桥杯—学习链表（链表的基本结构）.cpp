//蓝桥杯—学习链表（链表的基本结构）
//链表中的每一个节点—每一个结点由两个部分组成。
//左边的部分用来存放具体的数值，右边的部分需要存储下一个结点的地址，可以用指针来实现，称为后续指针
#include<stdio.h>
#include<stdlib.h>
struct node//定义一个结构体，分别储存链表的左右部分
{
	int data;
	struct node *next;//链表的右半指针，用来指向下一个结点	
};
int main()
{
	struct node *p,*q,*t,*head;//定义三个结构体指针
	int i,n,a;
	scanf("%d",&n);
	head=NULL;//将头指针的指向内容设置为空
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		//动态申请一个空间，用来存放一个结点，并用临时指针p指向这个结点
		p=(struct node *)malloc(sizeof(struct node));
		p->data =a;
		p->next =NULL;//设置当前结点的后继指针指向为空，也就是当前结点的下一结点为空
		if(head==NULL)
		{
			head=p;//如果这是第一个创建的结点，则将头指针指向这个结点	
		}	
		else
		{
			q->next =p;//如果这不是第一个创建的结点，则将上一个结点的后继指针指向当前结点	
		} 
		q=p;//指针p也指向当前结点 
	}
	//输出链表中的所有数
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next ;//继续下一结点 
	} 
	return 0;
}

