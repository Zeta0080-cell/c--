//��ջ-ȫ��3
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct stack
{
	ElemType data;//��ջ������ 
	struct stack *next;//��ջָ���� 
}Stack; 

Stack* initStack()//��ʼ����ջ 
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->data=0;
	s->next=NULL;
	return s;
}

int isEmpty(Stack *s)//�ж�ջ�Ƿ�Ϊ��
{
	if(s->next==NULL)
	{
		printf("��");
		return 1;
	}
	else
	{
		return 0;
	}
} 


int pop(Stack *s,ElemType *e)//��ջ,��ɾ��ջ�� 
{
	if(s->next==NULL)
	{
		printf("��");
		return 0;
	}
	*e=s->next->data;//ָ��e��ȡջ����Ԫ�� 
	Stack *q=s->next;//q������ȡջ����Ԫ�� 
	s->next=q->next;//�ض�ջ�� 
	free(q);
	return 1;
}

int main()
{
	Stack *s=initStack();
	return 0;
} 
