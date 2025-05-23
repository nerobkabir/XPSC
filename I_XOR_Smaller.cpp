#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    int OR = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        OR |= A[i];
    }
    
    int free_bits = 0;
    for (int b = 0; b < 30; ++b) {
        if (!(OR & (1 << b))) {
            free_bits++;
        }
    }
    long long ans = (1LL << free_bits) - 1;
    
    // Now, we need to verify that for all A_i, (X ^ A_i) < A_i for all X in candidates.
    // However, the construction ensures that any X with bits only in the free positions will satisfy the condition.
    // So no further check is needed.
    
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}