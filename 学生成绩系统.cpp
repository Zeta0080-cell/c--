#include<stdio.h>
int main()
{
	int n,a[5],sum=0,j,i;
	float result;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		if(a[i]<60)
		{
			j++;
		}
	}
	result=sum/n;
	printf("%.2 %d",result,j);
	return 0;
}
