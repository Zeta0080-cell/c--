//˳���-����Ԫ��
#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct{
	int length;
	Elemtype data[MAXSIZE];
}SeqList;//����˳��� 

void initList(SeqList *L)//��ʼ������
{
	L->length=0;	
} 

int appendElem(SeqList *L,int e)//β��Ԫ�ز��뺯��
{
	if(L->length>=MAXSIZE)
	{
		printf("��˳�������");
		return 0;	
	}
	L->data[L->length]=e;//����Ԫ�� 
	L->length++;	
	return 1;
} 

void listElem(SeqList *L)//˳���������� 
{
	for(int i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
	printf("\n");
}
int main()
{
	SeqList list;//����˳������ͱ���
	initList(&list);
	appendElem(&list,1);
	appendElem(&list,2);
	appendElem(&list,3);
	listElem(&list); 
	return 0;
}
