#include<stdio.h>
int main()
{
    int T;//T代表测试组数
    int l,r;//士兵的边界
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d",&l,&r);
        for(int j=l;j<=r;j++)
        {
            if(j%3==0)
            {
                printf("YES\n");
            }
            else if(j==r)
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
