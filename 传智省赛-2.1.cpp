#include<iostream>
#include<cstdio>
#include<cstdbool>
using namespace std;

int f(int x)
{
    int sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}

bool is_good_number(int x)
{
    int sum_factors=f(x);
    return (x*sum_factors)%2==0;
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int prefix[n+1];
        prefix[0]=0;
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+(is_good_number(a[i-1])?1:0);
        }
        while(q--)
        {
            int l,r;
            scanf("%d %d",&l,&r);
            int good_count =prefix[r]-prefix[l-1];
            printf("%d\n",good_count);
        }
    }
    return 0;
}
