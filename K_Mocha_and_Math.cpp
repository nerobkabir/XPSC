#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int res = -1; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            res &= a[i];
        }
        cout << res << endl;
    }
    return 0;
}