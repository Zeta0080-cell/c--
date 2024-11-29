#include<stdio.h>
int main()
{
	int index,i,k,temp;
	int a[20]; 
	int n;//代表数组元素的个数
	printf("请输入数组元素的个数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++)
	{
		index=k;
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[index])
			{
				index=i;//这里必须有index变量，因为i的值在不断变化，必须有这个变量来定位	
			}	
		}	
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;
	} 
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
