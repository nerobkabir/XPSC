#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m = __lg(n);
        int a = n-(1<<m);
        int b = 1 << m;
        cout << a << " " << b << endl;
    }
    return 0;
}