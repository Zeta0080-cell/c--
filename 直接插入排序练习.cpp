#include<stdio.h>
void insort(int a[],int n)
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		if(a[i]<a[i-1])
		{
			a[0]=a[i];
			for(j=i-1;a[j]>a[0];j--)
			{
				a[j+1]=a[j];
			}
			a[j+1]=a[0];
		}
	}
}
int main()
{
	int i,a[6];
	printf("请输入要排序的5个数：\n");
	for(i=1;i<=5;i++)
	{
		scanf("%5d",&a[i]);
	}
	insort(a,5);
	printf("新的序列为：\n");
	for(i=1;i<=5;i++)
	 {
	   printf("%5d",a[i]);
     }
	return 0;
}
