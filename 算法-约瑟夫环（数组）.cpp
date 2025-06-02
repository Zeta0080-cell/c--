//算法-约瑟夫环（数组） 
#include<bits/stdc++.h>
using namespace std;
int a[110]={0};

int main()
{
	int n,m;
	int cnt=0,i=0,k=0;//cnt表示目前出局的人数 
	cin>>n>>m;//表示总共有n人，数到数字m时出局 
	while(cnt!=n)
	{
		i++;
		if(i>n)
		{
			i=1;
		}
		if(a[i]==0)//这个代表数组的那个位置还没有淘汰 
		{
			k++;//k用来报数 
			if(k==m)//已经报数到第m个 
			{
				a[i]=1;//1代表已经出局 
				cnt++;//出局的人数增加
				cout<<i<<" ";
				k=0;//局部计数器清空为0 
			}
		}
	}
	return 0;
} 
