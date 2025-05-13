//ջ-ȫ��2
#include<bits/stdc++.h>
#define MAXSIZE 100	
using namespace std;
typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];//ջ��Ԫ�� 
	int top;//ջ��ָ�� 
}Stack; 

Stack* initStack()
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->top=-1;
	return s;
}

void initStack(Stack *s)//��ʼ��ջ�� 
{
	s->top=-1;
}

int isEmpty(Stack *s)
{
	if(s->top==-1)
	{
		printf("��");
		return 1; 
	}
	else
	{
		return 0;
	}
}

int push(Stack *s,ElemType e)//��ջ��ѹջ 
{
	if(s->top>=MAXSIZE-1)
	{
		printf("ջ��");
		return 0; 
	}
	s->top++;
	s->data[s->top]=e;
	return 1;
}

int pop(Stack* s,ElemType *e)
{
	if(s->top==-1)
	{
		printf("��");
		return 0;
	}
	*e=s->data[s->top];//��ָ�봢��ջ����Ԫ�� 
	s->top--;
	return 1;
}

int getTop(Stack *s,ElemType *e)
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
	Stack *s = initStack();//����һ��ջ����ָ�� 
    initStack(s);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    ElemType e;
    pop(s, &e);
    printf("%d\n", e);
    getTop(s, &e);
    printf("%d\n", e);
    free(s); // �ǵ��ͷ��ڴ�
	return 0;
}
