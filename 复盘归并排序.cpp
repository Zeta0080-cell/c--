//复盘归并排序 
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1e6+10;
int q[N];
int tmp[N];
void merge_sort(int q[],int l,int r)
{
	int i,j,k=0;//定义三个指针
	int mid;
	mid=(l+r)/2;
	i=l; j=mid;
	merge_sort(q,l,mid);
	merge_sort(q,mid+1,r);//先递归排序左右两个短序列
	if(l>=r)
	{
		return;//这种情况不排序 
	} 
	while(i<=mid&&j<=r)
	{
		if(q[i]<q[j])
		{
			tmp[k++]=q[i++];
		}
		else
		{
			tmp[k++]=q[j++];
		}
	}
	while(i<=mid)
	{
		tmp[k++]=q[i++];
	}
	while(j<=r)
	{
		tmp[k++]=q[j++];
	}//第二个和第三个while循环用来处理剩余的部分，即指针没有指完的那部分
	//如果左半部分有剩余元素（i <= mid），将剩下的元素复制到 tmp[] 中。
    //如果右半部分有剩余元素（j <= r），将剩下的元素复制到 tmp[] 中。 
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
