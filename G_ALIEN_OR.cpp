#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int covered = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int num = 0;
            for (char c : s) {
                num = (num << 1) | (c - '0');
            }
            covered |= num;
        }
        bool ok = (covered == (1 << k) - 1);
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}