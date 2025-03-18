//˳���-����Ԫ��2
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];
	int length;
}SeqList; //����һ��˳���ṹ��

void initList(SeqList *L)
{
	L->length=0;	
} 

void insert(SeqList *L,int pos,int e)//���뺯����˳���ָ�룬�����λ�ã������Ԫ��
{
	int i;
	if(L->length>=MAXSIZE)
	{
		printf("��˳���Ŀռ�����");
	}
	else
	{
		for (int i = L->length; i > pos; i--) 
		{
        	L->data[i] = L->data[i - 1];
    	}
		L->data[pos]=e;//����Ԫ�� 
		L->length++;
	}
} 

void Print(SeqList *L)
{
	int i;
	for(i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
}

int main()
{
	int i,n;
	SeqList list;//����˳������ͱ���list 
	initList(&list);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&list.data[i]);
		list.length++;
	}//��Ԫ�ش���˳���
	insert(&list,1,88);
	Print(&list); 
	return 0;
}
