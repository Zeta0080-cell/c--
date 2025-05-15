//ջ-ȫ��5
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];
	int top;
}Stack;

Stack* initStack()
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->top=-1;
	return s;
}

int push(Stack *s,ElemType e)
{
	if(s->top>=MAXSIZE-1)
	{
		printf("ջ��");
		return 0; 
	}
	s->top++;
	s->data[s->top]=e;
}

int pop(Stack *s,ElemType *e)//ɾ��ջ��Ԫ��
{
	if(s->top==-1)
	{
		printf("ջ��");
		return 0;
	}
	*e=s->data[s->top];
	s->top--;
	return 1;	
} 

int getHead(Stack *s,ElemType *e)//ȡջ��
{
	if(s->top==-1)
	{
		printf("ջ��");
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
	pop(s,&e);
	printf("%d\n",e);
	getHead(s,&e);
	printf("%d\n",e);
	free(s);//�ͷ��ڴ� 
	return 0;
}
