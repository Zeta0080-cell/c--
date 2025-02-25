//快速排序-分治思想 
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1e6+10;
int n;
int q[N];
void quick_sort(int q[],int l,int r)
{
	int x,i,j;//x为排序的分界点
	x=q[(l+r)/2];//x的取值可以任意 
	if(l>=r)
	{
		return;//这种情况就不用排序了 
	}
	//在这个函数中我们需要用到两个数组指针，分别是i和j
	i=l-1;
	j=r+1;//因为我们的两个指针需要每次先向中间移动一格再判断，所以应该先给一个偏移量
	while(i<j){
		//确定边界条件
		do{
			i++;
		} while(q[i]<x);
		do{
			j--;
		}while(q[j]>x);
		//两个do循环用来确定指针的落脚点，并且交换
		if(i<j)
		{
			swap(q[i],q[j]);	
		} 
	} 
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
}
int main()
{
	scanf("%d",&n);//输入需要排序的数字n 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&q[i]);//将需要排序的数字存入数组 
	}
	quick_sort(q,0,n-1);//其中l和r分别代表数字的两个边界
	for(int i=0;i<n;i++)
	{
		printf("%d ",q[i]);	
	} 
	return 0;
}
