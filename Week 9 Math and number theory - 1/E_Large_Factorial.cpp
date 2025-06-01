#include <bits/stdc++.h>
using namespace std;
const int mod = 10e9 + 7;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 1;
        for(int i=1;i<=n;i++){
            ans = (1LL * ans % mod * i % mod) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}