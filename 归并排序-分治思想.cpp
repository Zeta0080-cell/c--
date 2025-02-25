//归并排序—分治思想
//归并排序先递归处理左右两个区间，然后将两个区间合并 
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1e6+10;
int q[N];
int tmp[N];//额外的辅助数组，用来存储结果 
void merge_sort(int q[],int l,int r)
{
	int mid,k;//区间的中点
	int i,j;
	mid=(l+r)/2; 
	if(l>=r)
	{
		return;//此种情况不需排序 
	}
	merge_sort(q,l,mid);
	merge_sort(q,mid+1,r);//先递归处理左右区间 
	//接着归并，也是最麻烦的一部分 
	i=l;//左指针的起点 
	j=mid+1;//右指针的起点
	while(i<=mid&&j<=r)
	{
		if(q[i]<=q[j])
		{
			tmp[k++]=q[i++];	
		}	
		else
		{
			tmp[k++]=q[j++];
		}
	} 
	for(i=l,j=0;i<=r;i++,j++)
	{
		q[i]=tmp[j];
	}
}
int main()
{
	int n;//需要排序的数字个数
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&q[i]);	
	} 
	merge_sort(q,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",q[i]);
	}
	return 0;
}
