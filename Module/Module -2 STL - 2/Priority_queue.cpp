#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        pq.push(x);
    }

    cout << pq.size() << endl;
    while(!pq.empty()){
        auto p = pq.top();
        pq.pop();
        cout << p << " ";
    }
    
    return 0;
}