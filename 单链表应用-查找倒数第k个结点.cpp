//������Ӧ��-���ҵ�����k�����
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node{
	ElemType data;
	struct node *next;
}Node; 

Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
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
	q->data=e;//����������
	q->next=p->next;
	p->next=q; 
	return 1;
}

void coutlist(Node *L,int k)//kΪ������k����� 
{
	int cnt=0;
	int i=0;
	Node *p=L->next;
	Node *q=L->next;
	while(p!=NULL)
	{
		p=p->next;
		cnt++;	
	}
	while(i<cnt-k)
	{
		q=q->next;
		i++;
	}
	printf("������k���ڵ���%d",q->data);
}

int main()
{
	Node *list=initlist();
	insertNode(list,1,1);
	insertNode(list,2,2);
	insertNode(list,3,3);
	insertNode(list,4,4);
	insertNode(list,5,5);
	coutlist(list,3);
	return 0;
} 
