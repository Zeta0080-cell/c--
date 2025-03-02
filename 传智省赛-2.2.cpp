#include<iostream>
#include<cstdio>
#include<cstdbool>
#include<cstring>
#define MAX_A 100000
using namespace std;

int f[MAX_A+1]
void preprocess_factors()
{
	memset(f,0,sizeof(f));
	for(int i=1;i<MAX_A;I++)
	{
		for(int j=i*2;j<=MAX_A;j+=i)
		{
			f[j]+=i;
		} 
	}
}
bool is_good_number(int x)
{
    return (x*f[x])%2==0
}

int main()
{
	preprocess_factors();
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
