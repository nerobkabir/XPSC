#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(auto it = v.rbegin(); it != v.rend();it++){
        cout << *it << " " ;
    }
    return 0;
}