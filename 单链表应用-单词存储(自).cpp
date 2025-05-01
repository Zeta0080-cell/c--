//单链表应用-单词查找(自) 
#include<bits/stdc++.h>
using namespace std;
typedef char ElemType;
typedef struct node{
	ElemType data;
	struct node *next;
}Node; 

Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	return head;
}

void nodelist(Node *L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%c",p->data);
		p=p->next;
	}
	printf("\n");
}

int insertNode(Node *L,int pos,ElemType e)
{
	Node *p=L;
	int i=0;
	while(i<pos-1)
	{
		p=p->next;
		i++;
		if(p==NULL)
		{
			return 0;
		}
	}
	Node *q=(Node*)malloc(sizeof(Node));
	q->data=e;
	q->next=p->next;
	p->next=q;
}

void findword(Node *L1,Node *L2)
{
	int m=0,n=0;//分别表示两个链表的长度 
	int size;//差值
	Node *str1=L1->next;
	Node *str2=L2->next;
	while(str1!=NULL)
	{
		m++;
		str1=str1->next;
	}
	while(str2!=NULL)
	{
		n++;
		str2=str2->next;
	}
	if(n>m)
	{
		swap(m,n);
	}
	size=m-n;
	str1 = L1->next;
    str2 = L2->next;
	for(int i=0;i<size;i++)
	{
		str1=str1->next;
	}
    while (str1 != NULL && str2 != NULL) 
	{
        if (str1->data == str2->data) 
		{
            printf("首相同字母为%c\n", str1->data);
            return;
        }
        str1 = str1->next;
        str2 = str2->next;
    }
    printf("没有找到相同字母\n");
}

int main()
{
	Node *list1=initlist();
	Node *list2=initlist();
	insertNode(list1,1,'l');
	insertNode(list1,2,'o');
	insertNode(list1,3,'d');
	insertNode(list1,4,'i');
	insertNode(list1,5,'n');
	insertNode(list1,6,'g');
	insertNode(list2,1,'b');
	insertNode(list2,2,'e');
	insertNode(list2,3,'i');
	insertNode(list2,4,'n');
	insertNode(list2,5,'g');
	nodelist(list1);
	nodelist(list2);
	findword(list1,list2);
	return 0;
}
