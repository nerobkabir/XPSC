// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     ios:: sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     pair<string, int> student = {"kabir", 683431};

//     auto [name, roll] = student;
//     cout << name << " " << roll;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    pair<string, int> student[n];
    for(int i=0;i<n;i++){
        cin >> student[i].first >> student[i].second;
    }

    for(auto [x,y]: student){
        cout << x << " " << y;
    }
    return 0;
}