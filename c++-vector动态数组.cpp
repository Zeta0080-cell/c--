//c++-vector动态数组 
#include<iostream>
#include<algorithm>
#include<vector> // 使用动态数组需包含的头文件 
using namespace std;

int main() {
    vector<int> a(10, 2); // 给a数组分配10个空间，数组的每个值都初始化为2 
    vector<int> b(10);    // 默认初始化为0
    vector<int> c;
    c.resize(10);         // 通过该方法重新获取数组c的空间 

    // 迭代器，用于遍历整个数组
    for (auto p = a.begin(); p != a.end(); p++) {
        cout << *p << " "; // 输出值，用空格隔开
    }
    cout << endl; // 换行

    return 0;
}

