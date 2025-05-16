//栈-全面6
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct Stack{
	ElemType data[MAXSIZE];
	int top;//栈顶指针 
}Stack; 

Stack* initStack()//初始化栈
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->top=-1;
	return s;	
} 

int push(Stack *s,ElemType e)//入栈操作 
{
	if(s->top>=MAXSIZE)
	{
		printf("满");
		return 0;	
	}	
	s->top++;
	s->data[s->top]=e;
}

int pop(Stack *s,ElemType *e)//删除栈顶元素
{
	if(s->top==-1)
	{
		printf("栈空");
		return 0;
	}
	*e=s->data[s->top];
	s->top--;
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
	pop(s,&e);
	printf("%d\n",e);
	printf("%d\n",e);
	free(s);//释放内存 
	return 0;
}
