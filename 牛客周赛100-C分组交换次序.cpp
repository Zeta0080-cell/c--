//牛客周赛100-C分组交换次序
#include<bits/stdc++.h>
#define MAXSIZE 1000000
using namespace std;

int main()
{
    int n;
    int a[MAXSIZE],b[MAXSIZE];
    int m[MAXSIZE];//用来存储每一个类别的长度
    int result=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    if(n==1)
    {
        cout<<"-1"<<endl;
    }
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[j]==i)
            {
                m[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(m[i]==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(m[i]%2==0)
            {
                result+=m[i]/2;
            }
            else if(m[i]%2!=0)
            {
                result+=(m[i]/2+1);
            }
        }
    }
    printf("%d",result);
    return 0;
} 
