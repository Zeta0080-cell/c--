//����-����ĳ�ʼ��2
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;//�����������
	struct node *next;//�����ָ����,ָ��nextָ����Node 
}Node; 

Node* initList()//�����ʼ������
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;//����һ����ָ�� 
	return head; 
} 

int main()
{
	Node *list=initList();//����һ������������ͷָ�� 
	return 1;
}
