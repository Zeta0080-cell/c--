//DFS模版-全排列
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int a[N];
int n;  // 全局变量n表示数组长度
int p[N];
bool used[N];  // 改名为used更符合语义

void dfs(int x) // 定义搜索函数 
{
    if(x==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<p[i]<<' '; // 输出排列
        }
        puts("");
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        if(!used[i])  // 改为记录下标是否使用过
        {
            p[x]=a[i];
            used[i]=true; // 标记已使用
            dfs(x+1);
            used[i]=false; // 回溯
        }
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // 输入数组元素
    }
    sort(a, a+n); // 可选：排序使输出有序
    dfs(0);
    return 0;
}
