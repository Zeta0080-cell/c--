//���ݽṹ-˳��� 
#include<stdio.h>
#define MAXSIZE 100
typedef int ElemType;//��int��һ��������ElemType  
typedef struct{
	ElemType data[MAXSIZE];
	int length;
}SeqList;
//�ض���int��Ϊ�˷����޸����ݽṹ�����ͺ�����
void initList(SeqList *L)
{
	L->length=0;	
} //˳���ĳ�ʼ�� 
int main()
{
	//����һ��˳�����ʼ��
	SeqList list;
	initList(&list);
	printf("��ʼ���ɹ���Ŀǰ����ռ��Ϊ:%d\n",list.length);
	printf("Ŀǰռ���ڴ�%zu�ֽ�\n",sizeof(list.data)); 
	return 0;
} 
