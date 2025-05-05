#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ml;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        ml.insert(x);
    }

    for(auto ans: ml){
        cout << ans << " ";
    }
    cout << endl;

    auto it = ml.find(4);
    if(it != ml.end()){
        cout << "find" ;
    }
    else{
        cout << "not found";
    }
    return 0;
}