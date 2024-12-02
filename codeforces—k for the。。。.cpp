#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        int n, p, k; // n: number of goods, p: coins available, k: number of goods for the price of the most expensive one
        cin >> n >> p >> k;
        
        vector<int> a(n); // prices of goods
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort the prices in ascending order
        sort(a.begin(), a.end());
        
        int m = 0; // count of goods bought
        int i = 0;

        // Try to buy goods in groups of k
        while (i + k - 1 < n) {
            if (p >= a[i + k - 1]) {  // Can afford this group
                m += k;  // Buy all k goods in the group
                p -= a[i + k - 1];  // Pay for the most expensive one
                i += k;  // Move to the next group
            } else {
                break;  // If cannot afford the group, stop
            }
        }

        // Try to buy remaining goods individually
        for (; i < n; i++) {
            if (p >= a[i]) {
                m++;  // Buy this good
                p -= a[i];  // Reduce the number of coins
            } else {
                break;  // Stop if no more goods can be bought
            }
        }

        // Output the result for this test case
        cout << m << endl;
    }
    
    return 0;
}

