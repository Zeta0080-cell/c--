#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int t; // 测试用例数
    cin >> t;

    while (t--) {
        int n; // 约束条件的个数
        cin >> n;

        int low = 1, high = 1000000000; // k 的初始范围
        int loss[100]; // 用来存储排除的值
        int loss_count = 0; // 排除的数的个数

        // 读取约束条件
        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                // k >= x
                if (x > low) {
                    low = x;
                }
            } else if (a == 2) {
                // k <= x
                if (x < high) {
                    high = x;
                }
            } else if (a == 3) {
                // k != x
                loss[loss_count++] = x;
            }
        }

        // 如果 low > high，说明没有满足条件的k
        if (low > high) {
            cout << "0\n";
            continue;
        }

        // 计算区间 [low, high] 中的整数个数
        long long result = high - low + 1;

        // 排除不等于某些值的数
        for (int i = 0; i < loss_count; i++) {
            if (loss[i] >= low && loss[i] <= high) {
                result--;
            }
        }

        cout << result << endl;
    }

    return 0;
}
