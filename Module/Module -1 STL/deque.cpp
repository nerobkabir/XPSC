#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        dq.push_front(x);

    }
    dq.push_front(6);
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << " " ;
    }
    cout << endl;
    dq.pop_back();

    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << " ";
    }
    return 0;
}