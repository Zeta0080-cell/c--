//DFSģ��-ȫ����
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int a[N];
int n;  // ȫ�ֱ���n��ʾ���鳤��
int p[N];
bool used[N];  // ����Ϊused����������

void dfs(int x) // ������������ 
{
    if(x==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<p[i]<<' '; // �������
        }
        puts("");
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        if(!used[i])  // ��Ϊ��¼�±��Ƿ�ʹ�ù�
        {
            p[x]=a[i];
            used[i]=true; // �����ʹ��
            dfs(x+1);
            used[i]=false; // ����
        }
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // ��������Ԫ��
    }
    sort(a, a+n); // ��ѡ������ʹ�������
    dfs(0);
    return 0;
}
