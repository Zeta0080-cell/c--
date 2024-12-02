#include <iostream>
#include <cmath> // 用于 abs 函数

using namespace std;

int main() {
    int t; // 测试用例数
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // 计算两个时间点的分数差值
        int d1 = abs(x1 - y1);
        int d2 = abs(x2 - y2);

        // 检查两个差值之间的差是否为偶数
        if ((d2 - d1) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
