#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;  // ��ȡ��������������
    while (t--) {
        int n, p, k;
        cin >> n >> p >> k;  // ��ȡÿ�����������Ĳ���
        vector<int> a(n);  //c++�﷨������һ����̬���� 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // ��ȡ��Ʒ�۸�
        }

        sort(a.begin(), a.end());  // ����Ʒ�۸������������

        int goods_bought = 0;
        int current_cost = 0;
        
        // ������Ʒ�����Թ�����Ʒ
        for (int i = 0; i < n; ++i) {
            if (current_cost + a[i] <= p) {  // �����ǰʣ���Ǯ���������Ʒ
                current_cost += a[i];  // ����ʣ���Ǯ
                goods_bought++;  // ��Ʒ��������
                
                // ÿ����k����Ʒ��ʹ���Ż��ٹ���һ����Ʒ
                if (goods_bought % k == 0) {
                    goods_bought++;  // �����Żݣ�����һ��������Ʒ
                }
            } else {
                break;  // ��������ٹ�����Ʒ�ˣ����˳�
            }
        }

        cout << goods_bought << endl;  // ����ò��������Ľ��
    }
}

int main() {
    solve();  // ���ý��⺯��
    return 0;
}

