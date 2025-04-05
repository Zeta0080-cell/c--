//蓝桥oj-其它元素的乘积 
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;//表示元素的个数
  int i,j;
  int result=1;
  scanf("%d",&n);//获得数组元素的个数n
  vector<int>a(n);
  for(i=0;i<n;i++)
  {
  	  result=1; 
      scanf("%d",&a[i]);//获得数组的元素
      for(j=0;j<n;j++)
      {
        if(j!=i)
        {
          result*=a[j];
        }
      }
      printf("%d ",result);
  }
  return 0;
}
