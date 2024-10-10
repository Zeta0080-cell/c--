//冒泡排序
#include<stdio.h>
void Paosort(int a[],int n)
{
	int i,j,temp;
 for(j=1;j<=n-1;j++)
  {
	for(i=0;i<n-j;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}
  }
}
int main()
{
	int a[11],i;
	printf("请输入5个数据：\n");
	for(i=0;i<5;i++)
	{scanf("%d",&a[i]);}
	Paosort(a,5);
	printf("现在的序列为：\n");
	for(i=0;i<5;i++)
	{
	printf("%5d",a[i]);
    }
	return 0; 
} 
