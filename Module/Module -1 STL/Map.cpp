#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> mp;
    mp[56] = 4211;
    mp[14] = 45;
    mp[85] = 25;
    for(auto [x, y] : mp){
        cout << x << "->" << y << endl;
        }

    return 0;
}