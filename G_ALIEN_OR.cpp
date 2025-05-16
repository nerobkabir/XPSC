#include <bits/stdc++.h>
using namespace std;
int binaryToInt(const string& s) {
    int result = 0;
    for (char c : s) {
        result = (result << 1) | (c - '0');
    }
    return result;
}

bool canFormAll(int K, const vector<int>& values) {
    unordered_set<int> seen(values.begin(), values.end());
    unordered_set<int> reachable;

    queue<int> q;
    for (int val : seen) {
        reachable.insert(val);
        q.push(val);
    }

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int val : seen) {
            int new_or = current | val;
            if (reachable.find(new_or) == reachable.end()) {
                reachable.insert(new_or);
                q.push(new_or);
            }
        }
    }

    int limit = (1 << K);
    for (int j = 1; j < limit; j++) {
        if (reachable.find(j) == reachable.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> values;
        for (int i = 0; i < N; i++) {
            string s;
            cin >> s;
            values.push_back(binaryToInt(s));
        }

        if (canFormAll(K, values)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}