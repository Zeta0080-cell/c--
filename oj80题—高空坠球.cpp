//高空坠球
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	double height,i,n,result;
	printf("请输入小球下落的初始高度：\n");
	scanf("%lf",&height);
	printf("请输入小球落地的次数：\n");	
	scanf("%lf",&n);
	result=height+height*2*(1-pow(1/2,n));
	printf("%.1f",result);
	return 0;		
} 
