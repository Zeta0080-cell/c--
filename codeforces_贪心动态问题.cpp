#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;  // 读取测试用例的数量
    while (t--) {
        int n, p, k;
        cin >> n >> p >> k;  // 读取每个测试用例的参数
        vector<int> a(n);  //c++语法—创建一个动态数组 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // 读取商品价格
        }

        sort(a.begin(), a.end());  // 对商品价格进行升序排序

        int goods_bought = 0;
        int current_cost = 0;
        
        // 遍历商品，尝试购买商品
        for (int i = 0; i < n; ++i) {
            if (current_cost + a[i] <= p) {  // 如果当前剩余的钱够买这个商品
                current_cost += a[i];  // 更新剩余的钱
                goods_bought++;  // 商品数量增加
                
                // 每购买k个商品，使用优惠再购买一个商品
                if (goods_bought % k == 0) {
                    goods_bought++;  // 利用优惠，购买一个额外商品
                }
            } else {
                break;  // 如果不能再购买商品了，则退出
            }
        }

        cout << goods_bought << endl;  // 输出该测试用例的结果
    }
}

int main() {
    solve();  // 调用解题函数
    return 0;
}

