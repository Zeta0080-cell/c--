#include<stdio.h>
int main()
{
	int t;//���Ʋ��Ե�����
	int x1,y1;//��������һ�����ӵıȷ�
	int x2,y2;//�������ڶ������ӵıȷ�
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
