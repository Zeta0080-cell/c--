//������-��ʼ��9 
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//����������
	struct node *next;//����ָ����	
}Node;

Node* initList()//��ʼ������ 
{
	Node *head=(Node*)malloc(sizeof(Node));//��̬�������ڴ�
	head->data=0;
	head->next=NULL;
	return head;//����ͷ��� 
}

int main()
{
	Node *list=initList();
	return 0;
}
