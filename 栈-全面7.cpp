//ջ-ȫ��7
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct Stack{
	ElemType data[MAXSIZE];
	int top;
}Stack; 

Stack* initStack()
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->top=-1;
	return s;
}

int push(Stack *s,ElemType e)//��ջ���� 
{
	if(s->top>=MAXSIZE)
	{
		printf("ջ��");
		return 0;
	}
	s->top++;
	s->data[s->top]=e;
	return 1;
}

int pop(Stack *s,ElemType *e)//ɾ��ջ��Ԫ�� 
{
	if(s->top==-1)
	{
		printf("��");
		return 0;
	}
	*e=s->data[s->top];
	s->top--;
	return 1;
}

int getHead(Stack *s,ElemType *e)
{
	if(s->top==-1)
	{
		printf("��");
		return 0;
	}
	*e=s->data[s->top];
	return 1;
}

int main()
{
	Stack *s=initStack();//��ʼ��һ��ջ
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	ElemType e;
	getHead(s,&e);
	printf("%d\n",e);
	pop(s,&e);
	getHead(s,&e);
	printf("%d\n",e);
	return 0;
}
