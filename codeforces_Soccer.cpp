#include<stdio.h>
int main()
{
	int t;//控制测试的组数
	int x1,y1;//这个代表第一次两队的比分
	int x2,y2;//这个代表第二次两队的比分
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x1,&y1);
		scanf("%d%d",&x2,&y2);
		if(x2>y1)
		{
			printf("NO\n");	
		}
		else
		{
			printf("YES\n");	
		}	
	} 
	return 0;
}
