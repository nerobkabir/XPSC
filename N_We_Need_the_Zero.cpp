#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        int result = -1;
        
        // Try all x from 0 to 255
        for (int x = 0; x < 256; ++x) {
            int total_xor = 0;
            for (int i = 0; i < n; ++i)
                total_xor ^= (a[i] ^ x);
            
            if (total_xor == 0) {
                result = x;
                break;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}
