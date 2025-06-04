//算法-汉诺塔问题 
#include<bits/stdc++.h>
using namespace std;

void hanoi(int n,char from,char to,char aux)
{
	if(n==1)
	{
		printf("将盘子从%d从%c移动到%c\n",n,from,to);
		return;
	}
	//将n-1个盘子从起始柱移动到辅助柱 
	hanoi(n-1,from,aux,to);
	//移动n个盘子到目标柱 
	printf("将盘子%d从%c移动到%c\n",n,from,to);
	//将n-1个盘子从辅助柱移动到目标柱 
	hanoi(n-1,aux,to,from);
} 

int main()
{
	int n;
	printf("请输入汉诺塔盘子的数量");
	scanf("%d",&n);
	printf("移动步骤如下:\n");
	hanoi(n,'A','C','B');//A是起始柱，C是目标柱，B是辅助柱 
	return 0;
}
