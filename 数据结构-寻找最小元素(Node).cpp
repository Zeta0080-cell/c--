//���ݽṹ-Ѱ����СԪ��(Node)
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

ElemType findMin(Node *L)//������СԪ�غ��� 
{
	ElemType min=100000;
	Node *p=L->next;
	while(p!=NULL)
	{
		int i=0;
		if(min>p->data)
		{
			min=p->data;
		}
		p=p->next;
		i++;
	}
	return min;
}

int main()
{
	int n;
	ElemType result;
	cin>>n;
	Node *list=initlist();
	createList(list,n); 
	result=findMin(list);
	printf("%d\n",result);
	return 0;
}
