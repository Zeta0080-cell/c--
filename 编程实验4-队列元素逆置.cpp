//���ʵ��4-����Ԫ������
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct Stack{
	ElemType data[MAXSIZE];
	int top;//ջ��ָ�� 
}Stack; 
typedef struct Queue{
	ElemType data[MAXSIZE];
	int front;//��ͷ 
	int rear;//��β 
}Queue;

Stack* initStack()
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->top=-1;//ջ����ʼ�� 
}

Queue* initQueue()
{
	Queue *q=(Queue*)malloc(sizeof(Queue));
	q->front=0;
	q->rear=0;
}

void enqueue(Queue *Q,ElemType e)//��Ӳ���,��β���� 
{
	Q->data[Q->rear]=e;
	Q->rear++;	
} 

ElemType dequeue(Queue *Q)
{
	ElemType e;
	e=Q->data[Q->front];//ȡ��ͷ��Ԫ��
	Q->front++;	
	return e;
} 

void push(Stack *s,ElemType e)
{
	s->top++;
	s->data[s->top]=e;
}

void pop(Stack *s,ElemType *e)
{
	*e=s->data[s->top];
	s->top--;	
}

int main()
{
	int n;
	ElemType e;
	cin>>n;//���������Ԫ�صĸ���
	Queue *q=initQueue();
	Stack *s=initStack();
	for(int i=0;i<n;i++)
	{
		cin>>e;
		enqueue(q,e);//���Ӷ����е�Ԫ�� 
	} 
	for(int i=0;i<n;i++)
	{
		e=dequeue(q);
		push(s,e);
	}
	for(int i=0;i<n;i++)
	{
		pop(s,&e);
		printf("%d ",e);
	}
	return 0;
}
