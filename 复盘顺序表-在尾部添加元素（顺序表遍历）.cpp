//����˳���-��β�����Ԫ�أ�˳�������� 
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	Elemtype data[MAXSIZE];
	int length;
}SeqList;

void initList(SeqList *L)//��ʼ������
{
	L->length=0;	
} 

int appendElem(SeqList *L,int e)//Ԫ�����Ӻ��� 
{
	if(L->length>=MAXSIZE)
	{
		printf("��˳�������");
		return 0;
	}
	L->data[L->length]=e;//���Ԫ�� 
	L->length++;
}

void listElem(SeqList *L)//Ԫ�ر������� 
{
	for(int i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
}
int main()
{
	SeqList list;//����һ��˳������ͱ���
	initList(&list);//˳����ʼ��
	appendElem(&list,1);
	appendElem(&list,2);
	appendElem(&list,3); 
	listElem(&list);//�������˳��� 
	return 0;
} 

