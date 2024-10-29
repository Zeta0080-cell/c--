#include<iostream>
using namespace std;
int main()
{
	int t;
	int n,m;
	int flag;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {   
    	scanf("%d %d\n",&n,&m);
    	for(int i=1;i<=n;i++)
		{
        	int a, b, c, d;
        	scanf("%d %d %d %d\n",&a,&b,&c,&d);
        	if (b == c) {flag = 1;}
    	}
     
    if (flag==1 && m%2==0) 
	{
        printf("YES\n");
    } 
    else if(flag==0 || m%2!=0) 
    {
        printf("NO\n");
    }
}
     
    return 0;
}
