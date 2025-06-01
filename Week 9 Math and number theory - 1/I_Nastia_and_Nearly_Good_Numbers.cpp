#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        if (b == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
        if (b == 2) {
            cout << a << " " << a * b << " " << a * (b + 1) << endl;
        } 
        else {
            cout << a << " " << a * (b - 1) << " " << a * b << endl;
        }
    }
    
    return 0;
}