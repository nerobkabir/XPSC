#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        if(s == t || s[0] == '1'){
            cout << "YES" << endl;
            continue;
        } 
        int position = -1;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                position = i;
                break;
            }
        }
        if(position != -1){
            bool ok = true;
            for(int i=0;i<n;i++){
                if(s[i] != t[i]){
                    if(position > i){
                        ok = false;
                        break;
                    }
                }
            }
            if(ok){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
         
    }
    return 0;
}