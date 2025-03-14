//动态内存分配-malloc函数(结构体) 
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int x;
	int y;
}po;//定义一个名为po的结构体

int main()
{
	po *p;//定义一个指向结构体po的指针
	p=(po*)malloc(sizeof(po));//为结构体分配一个内存 
	p->x=5;
	p->y=10;
	printf("%d\n",p->x);
	printf("%d\n",p->y);
	return 0;	
} 


 
