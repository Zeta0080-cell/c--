//求最大公因数和最小公倍数 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int m,n; //输入两个整数
	int zeta; 
	int temp;//用来转换m和n的值 
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;//交换m和n的值，以确保m比n大 
	}
	zeta=m%n;
	m=n;
	n=zeta;
	while(zeta!=0)
	{
		m=n;
		n=zeta;
		zeta=m%n;
	}
	printf("%d",m);
	return 0;
}
