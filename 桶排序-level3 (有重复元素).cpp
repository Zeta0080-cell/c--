//桶排序-level3 (有重复元素)
#include<stdio.h>
int main()
{
  int arr[500005]={0};
  int n=0;
  int num1;
  scanf("%d",&n);//输入需要排序的个数 
  for(int i=0;i<n;i++)
  {
    scanf("%d",&num1);
    arr[num1]++;
  }
  for(int i=0;i<=n;i++)
  {
    for(int j=1;j<=arr[i];j++)
    {
      printf("%d ",i);
    }
  }
  return 0;
}
