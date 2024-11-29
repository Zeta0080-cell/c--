//最大公因数和最小公倍数 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int m,n;
	int result1,result2;
	int temp;
	scanf("%d %d",&m,&n);
	while(n!=0)
	{
		temp=m%n;
		m=n;
		n=temp;
	 } 
	 printf("%d",m);
	 return 0;
}
