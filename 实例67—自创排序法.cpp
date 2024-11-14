#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int i;
	int temp;
	int max;
	int min;
	int a[20];
	printf("请输入数组元素的个数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 for(i=0;i<n;i++)
	 {
	 	max=a[0];
	 	if(a[i]>max)
	 	{
	 		max=a[i];
	 		a[i]=a[0];
	 		a[0]=max;
		 }
	 }
	 for(i=0;i<n;i++)
	 {
	 	min=a[n-1];
	 	if(a[i]<min)
	 	{
	 		min=a[i];
	 		a[i]=a[n-1];
	 		a[n-1]=min;
		 }
	 }
	 for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	 } 
	 return 0;
}
