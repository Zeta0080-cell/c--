//2023年蓝桥杯省赛研究生组—阶乘的和
#include<stdio.h>
int fact(int m)//定义一个阶乘函数
{
	int i,result=1;
	for(i=1;i<=m;i++)
	{
		result=result*i;
	}	
	return result;
} 
int main()
{
	int n,i,j,sum=0;//代表用户输入的数的个数
	int a[1000];//将用户输入的数存入数组
	int m,flag,item;//m即为要求的阶乘 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);	
		flag=fact(a[i]);
		sum+=flag;//拿到阶乘的和 
	} 
	for(j=sum;j>=1;j--)
	{
		item=fact(j);
		if(sum%item==0)
		{
			printf("%d",j);
			break;
		}
	}
	return 0;	
} 
