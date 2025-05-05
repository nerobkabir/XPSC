#include <bits/stdc++.h>
using namespace std;
long long main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    long long k;
    cin >> n >> k;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin >> v[i];
    }
    long long l=0, r=0;
    long long ans = 0;
    multiset<long long> ml;
    while(r < n){
        ml.insert(v[r]);
        long long mn = *ml.begin();
        long long mx = *ml.rbegin();
        if(mx - mn <= k){
            ans += (r - l + 1);
        }
        else{
            while(l <= r){
                long long mn = *ml.begin();
                long long mx = *ml.rbegin();
                if(mx - mn <= k){
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
                
            }
            long long mn = *ml.begin();
            long long mx = *ml.rbegin();
            if(mx - mn <= k){
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}