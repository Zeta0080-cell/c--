//������-ͷ�巨11
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
	struct node *next;//����ָ���� 
}Node;  

Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void inserthead(Node *L,ElemType e)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=e;
	p->next=L->next;
	L->next=p; 
}

int main()
{
	Node *list=initlist();
	inserthead(list,1);
	inserthead(list,2);
	inserthead(list,3);
	return 0;
}
