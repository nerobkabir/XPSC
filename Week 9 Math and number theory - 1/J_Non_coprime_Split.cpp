#include <bits/stdc++.h>
using namespace std;
int isPrime(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return i;
    }
    return a;
}
void solve()
{
    int l, r, a, b;
    cin >> l >> r;
    bool found = false;
    if (r >= 4 && l != r)
    {
        cout << "2 ";
        if (r % 2 == 0)
            b = r - 2;
        else
            b = r - 3;

        cout << b << endl;
    }
    else if (l == r)
    {
        int divisor = isPrime(r);
        if (divisor != r)
        {
            cout << divisor << " " << r - divisor << '\n';
            found = true;
        }
        else
            cout << "-1" << endl;
    }
    else
    {
        if (!found)
            cout << "-1" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}