//再次复盘-快速排序 
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e6 + 10;
int q[N];
int n;

void quick_sort(int q[], int l, int r) {
    int i, j; // 定义两个指针
    int x;
    x = q[(l + r) / 2]; // 选取中间值作为基准
    i = l - 1;
    j = r + 1; // 给指针赋予初值，并给予偏移量

    if (l >= r) {
        return;
    }

    while (i < j) {
        do {
            i++;
        } while (q[i] < x); // 向右移动i，直到找到一个大于等于x的元素
        do {
            j--;
        } while (q[j] > x); // 向左移动j，直到找到一个小于等于x的元素
        if (i < j) {
            swap(q[i], q[j]); // 如果i < j，就交换q[i]和q[j]
        }
    }

    quick_sort(q, l, j); // 递归处理左半部分
    quick_sort(q, j + 1, r); // 递归处理右半部分
}

int main() {
    cin >> n; // 输入需要排序的数字n
    for (int i = 0; i < n; i++) {
        cin >> q[i]; // 将需要排序的数字存入数组
    }
    quick_sort(q, 0, n - 1); // 快速排序，从数组的两端开始
    for (int i = 0; i < n; i++) {
        cout << q[i] << " "; // 输出排序后的数组
    }
    return 0;
}

