//直接插入排序 
#include<stdio.h>
void insort(int s[],int n)
{
	int i,j;
	for(i=2;i<=n;i++)
		if(s[i]<s[i-1])
		{
			s[0]=s[i];
			for(j=i-1;s[j]>s[0];j--)
			{
				s[j+1]=s[j];
			}
			s[j+1]=s[0];
		}
}
int main()
{
	int a[11],i;
	printf("请输入5个数据：\n");
	for(i=1;i<=5;i++)
	{scanf("%d",&a[i]);}
	insort(a,5);
	printf("现在的序列为：\n");
	for(i=1;i<=5;i++)
	{
	printf("%5d",a[i]);
    }
	return 0; 
}
