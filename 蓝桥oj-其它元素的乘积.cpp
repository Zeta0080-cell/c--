//����oj-����Ԫ�صĳ˻� 
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;//��ʾԪ�صĸ���
  int i,j;
  int result=1;
  scanf("%d",&n);//�������Ԫ�صĸ���n
  vector<int>a(n);
  for(i=0;i<n;i++)
  {
  	  result=1; 
      scanf("%d",&a[i]);//��������Ԫ��
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
