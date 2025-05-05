#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        string s;
        cin >> s;
        int l =0;
        int r = x -1;
        int ans = x;
        while(l <= r){
            if(s[l] == s[r]){
                break;
            }
            else{
                ans -= 2;
                l++;
                r--;
            }
        }
        cout << ans << endl;

    }
    return 0;
}