//2023ʡ��-���������ģ�⣩ 
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,i;//����������ε�����
	int x1,y1,x2,y2;//����ÿ�����ε�
	int sum=0; 
	int j,k;//��������ָ�룬���ڱ������θ��ǵķ�Χ 
	bool vis[1000][1000];//����һ���������飬���ڴ�������Ƿ񱻸��ǣ������ͻᳬ������ 
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);//����ÿ�����εĶ�������
		if(x1>x2) swap(x1,x2);
		if(y1>y2) swap(y1,y2);	
		for(j=x1;j<x2;j++)
		{
			for(k=y1;k<y2;k++)
			{
				if(!vis[j][k])
				{
					sum++;
					vis[j][k]=1;//�������飬���Ҽ��������ǵ������ 
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}

