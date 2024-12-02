#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int t;  // 测试组数
    int n, p, k;  // 商品总个数，sb所拥有的总钱数，offer所提供的商品数
    int a[200000];  // 用来存储每个商品的价格（最大商品数量为 2 * 10^5）
    int m;  // 最终sb能买的商品的总数
    cin >> t;
    
    while(t--) {
        scanf("%d%d%d", &n, &p, &k);
        
        // 读取商品的价格
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        // 对商品的价格进行排序，以便能优先购买便宜的商品
        sort(a, a + n);
        
        m = 0;  // 初始化买到的商品数量
        
        // 尝试先购买商品对（使用优惠）
        for(int i = 0; i + 1 < n; i++) {
            if (p >= a[i + 1]) {  // 如果有足够的金币买一对商品
                m += 2;  // 成功购买一对商品
                p -= a[i + 1];  // 只支付这对商品中最贵的那个商品的价格
                i++;  // 跳过已购买的商品
            } else {
                break;  // 如果不能购买一对商品，退出循环
            }
        }
        
        // 再次购买剩下的单个商品
        for(int i = 0; i < n; i++) {
            if(p >= a[i]) {  // 如果还可以购买当前商品
                m++;
                p -= a[i];  // 支付该商品的价格
            } else {
                break;  // 如果剩余的钱不足以购买当前商品，结束循环
            }
        }
        
        // 输出最终结果：每个测试用例最大能买的商品数量
        printf("%d\n", m);
    }
    
    return 0;
}
