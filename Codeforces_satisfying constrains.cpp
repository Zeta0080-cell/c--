#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int t,m;
	int i,j,v;
	int k;
	int operation,num[20],count=0;
	int shang,xia,budeng;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>m;
		for(j=0;j<m;j++)
		{
			scanf("%d %d",&operation,&num[j]);
			if(operation==1)
			{
				xia=num[j];
			}
			else if(operation==2)
			{
				shang=num[j];
			}
			else if(operation==3)
			{
				budeng=num[j];
			}
		}
		for(v=xia;v<=shang;v++)
		{
			count=count+1;
		}
		printf("%d\n",count);
	}
	return 0;
}

