#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,sum=0;
	int a[10000005];
	int b[10000005]; 
	scanf("%d %d",&n,&k);//获得玩具的个数以及分组的数量
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//获得玩具数组	
	} 
	for(int i=1;i<n;i++)
	{
		b[i-1]=a[i]-a[i-1];//获得极差数组 
	}
	sort(b,b+n-1);//对极差数组进行排序 
	for(int i=0;i<n-k;++i)
	{
		sum+=b[i];
	}
	printf("%d",sum);
	return 0;
}
