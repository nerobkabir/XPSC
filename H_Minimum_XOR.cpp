#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int total_xor = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_xor ^= a[i];
        }

        int min_xor = total_xor;
        for (int i = 0; i < n; i++) {
            int current_xor = total_xor ^ a[i];
            if (current_xor < min_xor) {
                min_xor = current_xor;
            }
        }

        cout << min_xor << '\n';
    }

    return 0;
}
