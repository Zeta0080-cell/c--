//蓝桥杯—链表的初始化
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;//链表中的数据 
	struct node *next;//链表中指向下一个元素的指针 
};
int main()
{
	int i,n,a;//n代表输入元素的个数，a变量用来储存每次输入的data值
	struct node *p,*q,*t,*head;//定义三个指向链表结构的指针
	//p用来作临时指针，q用来指向下一个元素，t用来循环输出链表,head为链表的头指针 
	scanf("%d",&n);//获取链表中的元素n 
	head=NULL;//初始化head指针的值 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);//循环输入链表中的data元素
		//动态申请一个空间，用来存放一个结点，并用临时指针p指向这个结点
		p=(struct node *)malloc(sizeof(struct node)); 
		p->data=a;//将a的值赋值给链表中的data元素
		p->next=NULL;//将链表中的next指针的值暂时为空
		if(head==NULL)
		{
			head=p;//将头指针指向当前结点	
		}	
		else
		{
			q->next=p;//如果不是第一个创建的结点，则将上一个结点的后继指针指向当前结点 
		}
		q=p;//指针q也指向当前结点	 
	}	
	t=head;//t指针用于输出链表
	while(t!=NULL) 
	{
		printf("%d ",t->data);
		t=t->next;
	}
	return 0;
} 
