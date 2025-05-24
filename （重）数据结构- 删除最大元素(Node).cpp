//���أ����ݽṹ- ɾ�����Ԫ��(Node)
#include<bits/stdc++.h>
using namespace std; 
typedef int ElemType;
typedef struct Node{
	ElemType data;//������ 
	struct Node *next;//ָ���� 
}Node; 

Node* initlist()//��ʼ��
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;	
} 

void createList(Node *L,int n)
{
	Node *p=L;
	for(int i=0;i<n;i++)
	{
		Node *q=(Node*)malloc(sizeof(Node));
		cin>>q->data;
		p->next=q;
		p=q;
	}
	p->next=NULL;//β�ڵ�Ϊ�� 
}

ElemType findMax(Node *L)//������СԪ�غ��� 
{
	ElemType max=L->next->data;
	Node *p=L->next;
	while(p!=NULL)
	{
		if(max<p->data)
		{
			max=p->data;
		}
		p=p->next;
	}
	return max;
}

void deleteNode(Node *L,ElemType e)
{
	Node *prev=L;
	Node *p=L->next;
	while(p!=NULL)
	{
		if(p->data==e)
		{
			Node *q=p;
			prev->next=p->next;
			free(q);
		}
		prev=p;//prevΪp��ǰ����� 
		p=p->next;
	}
}

void listNode(Node *L)//��������
{
	Node *p=L->next;//��pָ��L��ָ����
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;//����ָ���� 
	}
} 

int main()
{
	int n;
	ElemType max;
	cin>>n;
	Node *list=initlist();
	createList(list,n); 
	max=findMax(list);
	deleteNode(list,max);
	listNode(list);
	return 0;
} 
