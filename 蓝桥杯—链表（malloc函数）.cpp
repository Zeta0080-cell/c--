//蓝桥杯—链表（malloc函数）  
//malloc函数的作用是从内存中申请分配指定字节大小的内存空间
//malloc函数的返回类型是void*类型。void*表示未确定的指针的类型 
#include<stdio.h>
#include<stdlib.h>//这个头文件里包含malloc函数 
int main()
{
	int *p;//定义一个指针
	p=(int *)malloc(sizeof(int));//指针p获取动态分配的内存空间的地址
	*p=10;// 向指针p所指向的空间的内存存放数字10
	printf("%d",*p);//输出指针p所指向内存的值 
	return 0;	
} 
