//蓝桥oj359-求和问题 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 10007;

void solve(){
    int n,m;cin>>n>>m;
    vector<int> a(n+1);
    vector<int> nums(n+1);
    vector<int> colors(n+1);
    for(int i=1;i<=n;i++) cin >> nums[i];
    for(int i=1;i<=n;i++) cin >> colors[i];
    
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(i % 2 == j % 2 && j > i && colors[i] == colors[j]){
                ans += (i + j) * (nums[i] + nums[j]);
            }
        }
    }
    cout << ans % mod << endl;
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1;
//    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}

/*
    x < y < z, y - x = z - y
    分数:(x+z)*(numberx+numberz)
    6 2
    5 5 3 2 2 2
    2 2 1 1 2 1
    编号:
    1 2 3 4 5 6
    
    1 -- 5 --> 42
    4 -- 6 --> 40

    82
*/
