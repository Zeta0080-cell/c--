//˳���ĳ�ʼ�� 
#include<stdio.h>
#define MAXSIZE 100
typedef int ElemType;

typedef struct{
	ElemType data[MAXSIZE];
	int length;
}SeqList; //����˳���ṹ��

void initList(SeqList *L)//��ʼ��˳���
{
	L->length=0;	
} 

int main()
{
	SeqList list;//����һ���ṹ�壨˳���
	initList(&list);//����˳���ĵ�ַ
	printf("��ʼ���ɹ���Ŀǰ����ռ��%d\n",list.length);
	printf("Ŀǰռ���ڴ�%zu�ֽ�",sizeof(list.data));
	return 0; 
}
 


