//牛客周赛100-B 数组的次序交换 
#include<bits/stdc++.h>
#define MAXSIZE 100000000
using namespace std;

int main()
{
    int n;
    int a[MAXSIZE];
    int result;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        if(n%2==0)
        {
            result=n/2;
        }
        else if(n%2!=0)
        {
            result=n/2+1;
        }
        printf("%d",result);
    }
}
