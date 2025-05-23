#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total_xor = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_xor ^= a[i];
    }
    
    if (n % 2 == 1) {
        cout << total_xor << endl;
    } else {
        if (total_xor == 0) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
