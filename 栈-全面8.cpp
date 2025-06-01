//栈-全面8
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

int push(Stack *s,ElemType e)//入栈操作 
{
	if(s->top>=MAXSIZE)
	{
		printf("栈满");
		return 0;
	}
	s->top++;
	s->data[s->top]=e;
	return 1;
}

int getHead(Stack *s,ElemType *e)//取栈顶元素
{
	if(s->top==-1)
	{
		printf("栈空");
	}	
	*e=s->data[s->top];
	return 1;
} 

int main()
{
	Stack *s=initStack();//初始化一个栈
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	ElemType e;
	getHead(s,&e);
	printf("%d\n",e);
	getHead(s,&e);
	printf("%d\n",e);
	return 0;
}
