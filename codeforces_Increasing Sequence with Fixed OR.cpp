#include<bits/stdc++.h>
#define MAXN 500005
using namespace std;
long long T,n,m,ans[MAXN],cnt,tmp;
long long lowbit(long long x){
	return x&-x;
}
int main() {
	cin>>T;
	while(T--){
		cin>>n;
		m=n,tmp=0,cnt=1,ans[1]=n;
		while(m!=0){
			tmp=lowbit(m);
			if(n-tmp>0) ans[++cnt]=n-tmp;
			m-=tmp;
		}
		cout<<cnt<<endl;
		for(int i=cnt;i>=1;i--) cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}

