//栈-全面 
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
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s->top = -1;
    return s;
}

void initStack(Stack *s)
{
    s->top = -1;
}

int isEmpty(Stack *s)
{
    if(s->top == -1)
    {
        printf("空\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(Stack *s, ElemType e)
{
    if(s->top >= MAXSIZE-1)
    {
        printf("满");
        return 0;
    }
    s->top++;
    s->data[s->top] = e;
    return 1;
}

int pop(Stack *s, ElemType *e)
{
    if(s->top == -1)
    {
        printf("空\n");
        return 0;
    }
    *e = s->data[s->top]; //储存栈顶的元素 
    s->top--;
    return 1;
}

int getTop(Stack *s, ElemType *e)
{
    if(s->top == -1)
    {
        printf("空");
        return 0;    
    }    
    *e = s->data[s->top];
    return 1;
} 

int main()
{
    Stack *s = initStack();//定义一个栈类型指针 
    initStack(s);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    ElemType e;
    pop(s, &e);
    printf("%d\n", e);
    getTop(s, &e);
    printf("%d\n", e);
    free(s); // 记得释放内存
    return 0;
}
