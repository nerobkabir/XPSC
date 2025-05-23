#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; long long m;
        cin >> n >> m;

        if (n == 1) {
            cout << "Yes\n" << m << "\n";
            continue;
        }

        long long y = m - n;
        if (y >= 0 && y <= n && (y % 2 == 0) && (n - y) >= 1) {
            cout << "Yes\n";
            for (int i = 0; i < n - y; i++) cout << 1 << ' ';
            for (int i = 0; i < y; i++) cout << 2 << (i == y - 1 ? '\n' : ' ');
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
