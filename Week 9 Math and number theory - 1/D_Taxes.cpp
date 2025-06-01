#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n == 1){
        return false;
    }
    for(int i=2;i<= sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(isprime(n)){
        cout << 1 << endl;
    }
    else if(n%2==0){
        cout << 2 << endl;
    }
    else{
        if(isprime(n-2)){
            cout << 2 << endl;
        }
        else{
            cout << 3 << endl;
        }
    }
    return 0;
}

  