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
        string s;
        cin >> s;

        int current = 0, min_value;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                current++;
            }
        }
        min_value = current;
        for (int i = k; i < n; i++) {
            if (s[i - k] == 'W') {
                current--;
            }
            if (s[i] == 'W') {
                current++;
            }
            min_value = min(min_value, current);
        }

        cout << min_value << '\n';
    }

    return 0;
}
